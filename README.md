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
