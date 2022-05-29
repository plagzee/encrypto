from tkinter import filedialog
import tkinter.messagebox as tmsg
from cryptography.fernet import Fernet
import os

def browse_file(file_label):
    # get filename
    filename = filedialog.askopenfilename()
    # print(filename)
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")


    file_label.config(text=filename)
    with open("selectedfile.txt", "w") as file:
        file.write(filename)

def browse_decrypt_file(file_label):
    filename = filedialog.askopenfilename()
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")

    file_label.config(text=filename)
    with open("selectedDecryptfile.txt", "w") as file:
        file.write(filename)

def browse_decrpyt_key(key_label):
    filename = filedialog.askopenfilename()
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")

    key_label.config(text=filename)
    with open("selectedDecryptkey.txt", "w") as file:
        file.write(filename)

def getDecryptKey():
    with open("selectedDecryptkey.txt", "r") as file:
        return file.read()
    
def getfile():
    with open("selectedfile.txt", "r") as file:
        return file.read()

def getDecryptFile():
    with open("selectedDecryptfile.txt", "r") as file:
        return file.read()


def encrypt(filename, nameOfKey):
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")

    key = Fernet.generate_key()

    #check if the keys folder exist
    if not os.path.exists("keys"):
        os.makedirs("keys")


    with open(f"keys/{nameOfKey}.key", 'wb') as file:
        file.write(key)

    # get key
    if key == "":
        return tmsg.showerror("Error", "You did not enter a key")

    fileToEncrypt = filename.replace('/', '\\')
    print(fileToEncrypt)


    with open(f"{fileToEncrypt}", "rb") as file:
        data = file.read()
    data_encrypted = Fernet(key).encrypt(data)

    with open(f"{fileToEncrypt}", "wb") as file:
        file.write(data_encrypted)

    tmsg.showinfo("Success", "File Encrypted")

def decrypt(filename, key):
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")

    if(key == ""):
        return tmsg.showinfo("No Key Selected", "You did not select a key")

    with open(f"{key}", "rb") as file:
        dataKey = file.read()

    with open(f"{filename}", "rb") as file:
        data = file.read()

    data_decrypted = Fernet(dataKey).decrypt(data)

    with open(f"{filename}", "wb") as file:
        file.write(data_decrypted)

    tmsg.showinfo("Success", "File Decrypted")
    