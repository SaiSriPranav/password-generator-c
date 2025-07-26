#  Password Generator in C

This is a simple C program that generates strong random passwords based on user-defined length.  
It uses letters (uppercase + lowercase), digits, and special characters.

---

## 📌 Features

- User-defined password length (minimum 8 characters)
- Uses a mix of:
  - Lowercase letters
  - Uppercase letters
  - Digits
  - Special characters (`!@#$%^&*()`)
- Simple and secure random password generation using `rand()`

---

## 💻 Sample Output
Enter password length (minimum 8): 12
Generated Password: aH3$LwX8@q#1


---

## 🧠 How It Works

- The character set includes all commonly used symbols.
- The program seeds the random number generator using the current time.
- A loop randomly picks characters from the set to build the password.

---

## 🚀 Getting Started

### 📁 Clone the repository
```bash
git clone https://github.com/<SaiSriPranav>/password-generator-c.git
cd password-generator-c
Compile the program
gcc password_generator.c -o password_generator
Run it
./password_generator


