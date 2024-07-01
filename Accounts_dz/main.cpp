//
//  main.cpp
//  Accounts_dz
//
//  Created by Александр Нестеров on 01/07/2024.
//

#include <iostream>
#include <string>

using namespace std;

// Структура для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;
};

// Функция для изменения баланса счёта
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    cout << "Введите номер счёта: ";
    cin >> account.accountNumber;

    cout << "Введите имя владельца: ";
    cin.ignore(); // Удаление символа новой строки из буфера ввода
    getline(cin, account.accountHolderName); // Ввод имени с пробелами

    cout << "Введите баланс: ";
    cin >> account.balance;

    double newBalance;
    cout << "\nВведите новый баланс: ";
    cin >> newBalance;

    changeBalance(account, newBalance); // Изменяем баланс с помощью функции

    cout << "\nВаш счет: " << account.accountNumber <<
    ", " << account.accountHolderName <<
    ", "<< account.balance << endl;

    return 0;
}
