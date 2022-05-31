from cryptography.fernet import Fernet
import sys
import time

def getDecryptFile():
    with open("selectedFile.enloc", "r") as file:
        return file.read()


def getDecryptKey():
    with open("selectedGivenKey.enloc", "r") as file:
        return file.read()

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

    print("File Decrypted!")

decrypt(getDecryptFile(), getDecryptKey())
time.sleep(1.5)
sys.exit()