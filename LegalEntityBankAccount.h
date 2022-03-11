#pragma once
#include "BankAccount.h"

class LegalEntityBankAccount:public BankAccount {
public:
	/*Данные*/
	string _name;
	string _TIN;
	Date _establishing_date;	
	Address _legal_address;

	/*Конструктор*/
	LegalEntityBankAccount(string name = "", string TIN = "", Date establishing_date = { 1,1,1 }, Address legal_address = { 1,"","","",1 });

	/*Сеттеры и геттеры*/
	void set_name(string name) { _name = name; }
	string get_name() { return _name; }
	void set_TIN(string TIN) { _TIN = TIN; }
	string get_TIN() { return _TIN; }
	void set_establishing_date(Date establishing_date);
	Date get_establishing_date() { return _establishing_date; }	
	void set_legal_address(Address legal_address) { _legal_address = legal_address; }
	Address get_legal_address() { return _legal_address; }

	/*Печать информации - ФИО и дата*/
	void print_info() const;

	/*Перегрузка операторов*/
	friend istream& operator>>(istream& in, LegalEntityBankAccount& form);
	friend ostream& operator<<(ostream& out, LegalEntityBankAccount& form);	
};