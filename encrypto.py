from tkinter import *
import functions as funcs
import sys
import decrpyto

class encrypto:
    def __init__(self, master):
        self.master = master
        self.master.title("Encrypto")
        self.master.geometry("800x600")
        self.master.configure(bg="#000d24")
        self.master.resizable(width=False, height=False)
        self.master.iconbitmap("icon.ico")

        self.title = Label(self.master, text="Encrypto", font=("Helvetica", 30), bg="#000d24", fg="#fff")
        self.title.pack(pady=20)


        self.file_name = Label(self.master, text="No File Selected", font=("Helvetica", 15), bg="#000d24", fg="#fff")
        self.file_name.pack(pady=20)

        self.browse_button = Button(self.master, text="Browse", font=("Helvetica", 15), bg="#000d24", fg="#fff", command=lambda: funcs.browse_file(self.file_name))  
        self.browse_button.pack(pady=20)

        self.keyName = Entry(self.master, font=("Helvetica", 15), bg="#fff", fg="#000")
        self.keyName.pack(pady=20)


        self.encrypt_button = Button(self.master, text="Encrypt", font=("Helvetica", 15), bg="#000d24", fg="#fff", command=lambda: funcs.encrypt(funcs.getfile(), self.keyName.get()))
        self.encrypt_button.pack(pady=20)

        # add a menu bar
        self.menu_bar = Menu(self.master)
        self.master.config(menu=self.menu_bar)

        # add a file menu
        self.file_menu = Menu(self.menu_bar, tearoff=0)
        self.menu_bar.add_cascade(label="File", menu=self.file_menu)
        self.file_menu.add_command(label="Decrypto", command=lambda: decrpyto.decrypto(self.master))
        self.file_menu.add_command(label="Exit", command=lambda: sys.exit())

        

if __name__ == "__main__":
    root = Tk()
    app = encrypto(root)
    root.mainloop()
