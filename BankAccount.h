#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Address {
	int flat;
	string house;
	string town;
	string street;	
	int index;
};

struct Date {
	int day;
	int mounth;
	int years;
};

class BankAccount {
public:
	/*Данные*/	
	double _balance;

	/*Конструктор*/
	BankAccount(string account_id = "", double balance = 0, string phone_number = "");

	/*Сеттеры и геттеры*/	
	string get_account_id() { return _account_id; }
	void set_balance(double balance) { _balance = balance; }
	double get_balance() { return _balance; }	
	string get_phone_number() { return _phone_number; }
	void set_phone_number(string phone_number) { _phone_number = phone_number; }
private:
	string _account_id;
	string _phone_number;
	
	void set_account_id(string account_id) { _account_id = account_id; }	
};