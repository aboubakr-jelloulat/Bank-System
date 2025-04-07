# 🏦 Bank System

![GitHub](https://img.shields.io/badge/license-MIT-blue)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white)
![Console Application](https://img.shields.io/badge/Console-Application-brightgreen)

> **A comprehensive console-based banking system built with C++ and Object-Oriented Programming principles.**
>
> ## 🤝 Acknowledgements
```
I would like to express my sincere gratitude to my teacher who guided me throughout the development of this project:

Dr. [Mohammed Abu-Hadhoud ] - for his valuable insights on banking systems and financial operations.

His patience, knowledge, and encouragement were instrumental in bringing this project to fruition. The skills he has imparted will continue to guide my future endeavors in software development
```

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Future Enhancements](#future-enhancements)
- [Contributing](#contributing)
- [License](#license)

## 🔍 Overview

This Bank System is a robust console application that simulates a banking environment with client management, currency exchange, transaction processing, and user authentication. Built using modern C++ and following object-oriented design principles, it serves as an excellent learning resource for beginners and intermediate developers alike.

## ✨ Features

### 👥 User Management
- 🔐 User authentication (login/register)
- 👤 Create, update, and delete user accounts
- 👮 Admin privileges for system management

### 💰 Client Operations
- ➕ Add new clients to the system
- 🔄 Update client information
- 🔍 Find client details
- ❌ Delete clients when needed
- 📊 View total balances

### 💱 Currency Exchange
- 💲 Support for multiple currencies
- 🧮 Currency conversion calculator
- 📈 Update exchange rates
- 📋 View currency listings

### 💸 Transaction Processing
- 💵 Deposit funds
- 💳 Withdraw money
- 📤 Transfer between accounts
- 📝 Transaction logging

### 🛠️ Utility Features
- 📅 Date handling
- ✅ Input validation
- 🔤 String manipulation utilities

## 🗂️ Project Structure

```
Bank-System/
├── Bank/
├── Clients.txt         # Client data storage
├── Currencies.txt      # Currency exchange rate information
├── Logfile.txt         # System log information
├── Main.cpp            # Entry point of the application
├── Main.o              # Compiled object file
├── Makefile            # Build automation
├── TransferLog.txt     # Log of all transfers
├── Users.txt           # User authentication data
└── includes/           # Header files
    ├── Global.h
    ├── InterfaceCommunication.h
    ├── clsAddNewClientScreen.h
    ├── clsAddNewUserScreen.h
    ├── clsBankClient.h
    ├── clsClientScreen.h
    ├── clsCurrenciesListScreen.h
    ├── clsCurrency.h
    ├── clsCurrencyCalculatorScreen.h
    ├── clsCurrencyExchangeMainScreen.h
    ├── clsDate.h
    ├── clsDeleteClientScreen.h
    ├── clsDeleteUserScreen.h
    ├── clsDepositScreen.h
    ├── clsFindClientScreen.h
    ├── clsFindCurrencyScreen.h
    ├── clsFindUserScreen.h
    ├── clsInputValidate.h
    ├── clsLoginRegisterScreen.h
    ├── clsLoginScreen.h
    ├── clsMainScreen.h
    ├── clsManageUsers.h
    ├── clsPerson.h
    ├── clsScreen.h
    ├── clsString.h
    ├── clsTotalBalancesScreen.h
    ├── clsTransactionsScreen.h
    ├── clsTransferLogScreen.h
    ├── clsTransferScreen.h
    ├── clsUpdateClientScreen.h
    ├── clsUpdateCurrencyRateScreen.h
    ├── clsUpdateUserScreen.h
    ├── clsUser.h
    ├── clsUsersListScreen.h
    ├── clsUtils.h
    ├── clsWithdrawScreen.h
    └── main.h
```

## 🚀 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/aboubakr-jelloulat/Bank-System.git
   ```

2. Navigate to the project directory:
   ```bash
   cd Bank-System
   ```

3. Compile the project using Make:
   ```bash
   make
   ```

4. Run the executable:
   ```bash
   ./Bank
   ```

## 💻 Usage

1. **First-time Setup**
   - Register an admin account when prompted
   - Log in with your credentials

2. **Navigation**
   - Use the numbered menu to navigate through different screens
   - Follow on-screen instructions for each operation

3. **Client Management**
   - Add clients with their personal information and account details
   - Perform searches, updates, and deletions as needed

4. **Financial Operations**
   - Process deposits and withdrawals
   - Transfer funds between accounts
   - Exchange currencies at current rates

5. **System Administration**
   - Manage user accounts and permissions
   - Review transaction logs
   - Update currency exchange rates



## 🚧 Future Enhancements

- 🌐 Web-based interface
- 📱 Mobile application integration
- 📊 Advanced reporting and analytics
- 🔒 Enhanced security features
- 📤 Export functionality for reports
- 🗄️ Database integration (replacing text files)
- 📈 Investment portfolio management
- ⏰ Scheduled transactions and reminders
- 🌙 Dark mode for console interface

## 🤝 Contributing

Contributions are welcome! Here's how you can contribute:

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and follow the code style guidelines.

## 📄 License

This project is licensed under the MIT License - see the LICENSE file for details.

---

⭐ **Developed with ❤️ by [Aboubakr]** ⭐
