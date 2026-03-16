# Banking System (C++)

A simple **console-based Banking System** implemented in **C++** using **Object-Oriented Programming (OOP)** and **STL containers**.
The application allows users to create bank accounts and perform basic banking operations such as deposits, withdrawals, balance inquiries, and account management.

---

## 📌 Features

* Open a new bank account
* Deposit money into an account
* Withdraw money from an account
* Balance enquiry
* Close an account
* Display all accounts in the bank
* Minimum balance enforcement (500)
* Menu-driven console interface

---

## 🏗️ Project Structure

The project is implemented using two main classes:

### 1️⃣ Account Class

Represents a bank account and stores the following information:

* Account Number
* First Name
* Last Name
* Current Balance

#### Main Functions

* `Deposit_money()` – Adds money to the account
* `Withdraw_money()` – Withdraws money while maintaining the minimum balance
* `Check_balance()` – Returns the current balance
* Getter functions for account information

---

### 2️⃣ Bank Class

Manages all bank accounts using a **map container**.

#### Data Structure

```cpp
map<int, Account> accounts;
```

The map stores:

* **Key:** Account Number
* **Value:** Account Object

#### Main Operations

* `Open_Account()` – Create a new account
* `Balance_Enquiry()` – Display account information
* `Deposit()` – Add money to an account
* `Withdraw()` – Withdraw money from an account
* `Close_Account()` – Remove an account
* `Show_All_Accounts()` – Display all bank accounts

---

## ⚙️ How It Works

When the program starts, the user is presented with a menu:

```
1 Open Account
2 Balance Enquiry
3 Deposit
4 Withdraw
5 Close Account
6 Show All Accounts
7 Quit
```

The user selects a service and enters the required information (such as account number or deposit amount).
The program then performs the requested operation.

---

## 💻 How to Compile and Run

### Compile

```bash
g++ banking_system.cpp -o banking_system
```

### Run

```bash
./banking_system
```

---

## 🧠 Concepts Demonstrated

This project demonstrates several important **C++ programming concepts**:

* Object-Oriented Programming
* Classes and Objects
* Encapsulation
* Static Class Members
* STL Containers (`map`)
* Operator Overloading
* Exception Handling
* Menu-driven Programs

---

## 🚀 Possible Improvements

Future enhancements could include:

* File storage for persistent accounts
* Transfer money between accounts
* Account authentication (PIN/password)
* Transaction history
* Input validation
* Better error handling
* Graphical user interface

---

## 👨‍💻 Author

**Ahmed Akram**

Electrical Engineering Student
Interested in **Software Engineering, Embedded Systems, and C++ Development**

---
