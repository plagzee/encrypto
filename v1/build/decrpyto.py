from tkinter import *
import functions as funcs

def decrypto(master):
    decryptoGUI = Toplevel(master)
    decryptoGUI.title("Decrypto")
    decryptoGUI.geometry("800x600")
    decryptoGUI.configure(bg="#000d24")
    decryptoGUI.resizable(width=False, height=False)
    decryptoGUI.iconbitmap("icon.ico")

    title = Label(decryptoGUI, text="Decrypto", font=("Helvetica", 30), bg="#000d24", fg="#fff")
    title.pack(pady=20)

    file_name_dec = Label(decryptoGUI, text="No File Selected", font=("Helvetica", 15), bg="#000d24", fg="#fff")
    file_name_dec.pack(pady=20)

    browse_button = Button(decryptoGUI, text="Browse", font=("Helvetica", 15), bg="#000d24", fg="#fff", command=lambda: funcs.browse_decrypt_file(file_name_dec))
    browse_button.pack(pady=20)


    key_name = Label(decryptoGUI, text="No Key Selected", font=("Helvetica", 15), bg="#000d24", fg="#fff")
    key_name.pack(pady=20)

    givenKey = Button(decryptoGUI, text="Browse Key", font=("Helvetica", 15), bg="#000d24", fg="#fff", command=lambda: funcs.browse_decrpyt_key(key_name))
    givenKey.pack(pady=20)

    decrypt_button = Button(decryptoGUI, text="Decrypt", font=("Helvetica", 15), bg="#000d24", fg="#fff", command=lambda: funcs.decrypt(funcs.getDecryptFile(), funcs.getDecryptKey()))
    decrypt_button.pack(pady=20)

    decryptoGUI.mainloop()