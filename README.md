<h1 align="center">🔐 Encrypto</h1>

<p align="center">
  <img src="https://media.discordapp.net/attachments/760496001936261230/981236375175188520/unknown.png?width=719&height=568" alt="Encrypto Banner"/>
</p>

---

## 📘 Description
**Encrypto** is a secure and modern approach to file sharing. Unlike traditional methods that rely on passwords (which can be cracked via brute force), Encrypto leverages **ransomware-style encryption for good**.

It encrypts any file or application and generates a **unique decryption key**, saved in the `/keys` folder. You can share your file publicly — only users with the correct key can access it. You stay in full control of who unlocks the content.

> 🚀 **New update dropping soon!**  
> 👤 Created by: **@plagzee**

---

## 📊 Project Overview

- [🎯 Motivation](#-motivation)
- [❓ Why Encrypto?](#-why-encrypto)
- [📌 Why Not Other Methods?](#-why-not-other-methods)
- [✅ Advantages](#-advantages)
- [⚠️ Disadvantages](#-disadvantages)
- [📦 Requirements](#-requirements)
- [⚙️ Installation](#-installation)
- [📚 Usage](#-usage)
- [🤝 Contributing](#-contributing)
- [👨‍💻 Developers & Maintainers](#-developers-and-maintainers)

---

## 🎯 Motivation
File sharing today often depends on password-protected archives or cloud services. These approaches can be **vulnerable to attacks**, with passwords being cracked or accounts being compromised.

**Encrypto** aims to solve this by encrypting files with unique tokens, ensuring that only the intended recipient — the one with the matching key — can decrypt the file.

---

## ❓ Why Encrypto?
Encrypto encrypts the file and generates a **unique key** for it. The file remains encrypted while the key (stored in `/keys`) can be shared securely with the intended recipient. You decide who gets access.

---

## 📌 Why Not Other Methods?
While other file-sharing methods are widely used and relatively secure, they often fall short in handling **highly confidential** or **sensitive** data. Passwords can be guessed, brute-forced, or leaked. Encrypto minimizes this risk with true encryption.

---

## ✅ Advantages

- 🔐 **Fast & Lightweight** – Only encrypts essential file segments for speed.
- 🧬 **Unique Token Generation** – Keys are unique, not found in standard wordlists.
- 🛡️ **Resistant to Brute Force** – Unlike password locks, Encrypto uses token-based access.
- 💀 **Inspired by Ransomware** – But used for good! Locks files securely with tokens.
- 📖 **Open-Source & Transparent** – Clean, understandable algorithms with strong security.

---

## ⚠️ Disadvantages

- ❗ The **key must be protected** — sharing it with untrusted parties defeats the purpose.
- ❗ The **key is not encrypted**, so treat it with care.
- ❗ **Lost keys cannot be recovered.** There’s no backdoor.
- ❗ Currently maintained by **a solo developer** — contributors welcome!

---

## 📦 Requirements

- Windows 10 (64-bit) or higher  
  *(Linux and macOS support coming soon)*

### For Shell Version:
- Python 3.9.5+
- `cryptography` library (Fernet)

---

## ⚙️ Installation

### GUI Application
1. Go to the [Releases Page](https://github.com/plagzee/encrypto/releases)
2. Download and run the latest version.
3. Extract if needed and launch the app.
4. Done ✅

### Shell Application
1. Download the shell version from [here]() *(link pending)*
2. Install dependencies:
   ```bash
   pip install -r requirements.txt
   ```

> 🔧 *Shell version is still under development.*

---

## 📚 Usage
Please refer to the official [📘 Documentation](https://voidal493.gitbook.io/encrypto-documentation/) for full details on usage, token handling, and file recovery.

---

## 🤝 Contributing

We welcome contributors! The project is stable but **open to improvements**, especially:

- 🌈 Better & modern GUI
- 🛠️ Shell version (WIP)
- 🔄 Cross-platform support (macOS, Linux)
- 🧪 Features like password decryptor and RAR cracker in upcoming v3

### How to Contribute
- Open an issue for bugs or ideas
- Submit a pull request
- Read our [Contribution Guidelines](https://voidal493.gitbook.io/encrypto-documentation/)

---

## 👨‍💻 Developers and Maintainers

- **plagzee** – Founder  
- **aashish6377** – Co-founder, Maintainer

> 👏 Contributors will be credited in changelogs and project pages.

---
