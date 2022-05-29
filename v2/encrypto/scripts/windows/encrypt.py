from cryptography.fernet import Fernet
import os
import time
import sys


def getfile():
    with open("selectedFile.enloc", "r") as file:
        return file.read()


def getKeyName():
    with open("selectedKey.enloc", "r") as file:
        return file.read()


def encrypt(filename, nameOfKey):
    if filename == "":
        return tmsg.showinfo("No File Selected", "You did not select a file")

    key = Fernet.generate_key()

    # check if the keys folder exist
    if not os.path.exists("keys"):
        os.makedirs("keys")

    with open(f"keys/{nameOfKey}.key", 'wb') as file:
        file.write(key)

    fileToEncrypt = filename.replace('/', '\\')
    print(fileToEncrypt)

    with open(f"{fileToEncrypt}", "rb") as file:
        data = file.read()
    data_encrypted = Fernet(key).encrypt(data)

    with open(f"{fileToEncrypt}", "wb") as file:
        file.write(data_encrypted)


encrypt(getfile(), getKeyName())
print("Encrypting...")
print("File is Encrypted! Check the keys folder for the decryption key.")
sys.exit()
