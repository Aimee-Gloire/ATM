# ATM machine in C

A C program that simulates basic ATM (Automated Teller Machine) functions for a single user. This project is ideal for learning about functions, variables, loops, and conditional logic.

---

## About the Project

This project is a basic simulation of an ATM system. It reinforces foundational C programming concepts such as:

- Function declarations and definitions
- Modular code design
- User input/output handling
- Control flow with loops and conditional statements

---

## Features

- Check account balance: Displays the current account balance. Takes balance as a parameter.
- Deposit money: Prompts the user to input a deposit amount and adds it to the balance. Uses a pointer to modify the actual balance variable.
- Withdraw money: Prompts the user to input a withdrawal amount. Checks for sufficient funds before subtracting from the balance. Uses a pointer to modify the balance.
- Exit the program

---

## 🛠️ Getting Started

### Environment requirements

You need the following tools installed:

- A C compiler (e.g., `gcc`)
- [Visual Studio Code](https://code.visualstudio.com/)
- [WSL (Windows Subsystem for Linux)](https://learn.microsoft.com/en-us/windows/wsl/) – recommended for compiling if using Windows

---

## ▶️ How to Run

1. Clone the repository to your local machine

git clone <https://github.com/Aimee-Gloire/ATM.git>
2. Open the project folder in **VS Code**.
3. Open the **Ubuntu(WSL)terminal**:
4. . Compile the program:

   ```bash
   gcc main.c -o main
5. Run the compiled program/file:

   ```bash
   ./main
