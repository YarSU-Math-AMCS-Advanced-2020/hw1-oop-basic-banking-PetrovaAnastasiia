#pragma once
#include "BankAccount.h"

class PersonalBankAccount:public BankAccount {
public:
	/*Данные*/
	string _surname;
	string _name;
	string _pathronymic;
	Date _birth_date;

	/*Конструктор*/
	PersonalBankAccount(string name = "", string surname = "", string pathonymic = "", string passport = "", Date birth_date = Date{ 1, 1, 1 });

	/*Сеттеры и геттеры*/
	void set_surname(string surname) { _surname = surname; }
	string get_surname() { return _surname; }
	void set_name(string name) { _name = name; }
	string get_name() { return _name; }
	void set_pathronymic(string pathronymic) { _pathronymic = pathronymic; }
	string get_pathronymic() { return _pathronymic; }	
	void set_birth_date(Date birth_date);
	Date get_birth_date() { return _birth_date; }		
	string get_passport() { return _passport; }

	/*Есть ли отчество*/
	bool has_pathronymic();	
	/*Сокращенное имя - ФИО*/
	void redices_name();

	/*Печать информации - ФИО и дата*/
	void print_info() const;

	/*Перегрузка операторов*/
	friend istream& operator>>(istream& in, PersonalBankAccount& form);
	friend ostream& operator<<(ostream& out, PersonalBankAccount& form);	
private:
	string _passport;	

	void set_passport(string passport);	
};