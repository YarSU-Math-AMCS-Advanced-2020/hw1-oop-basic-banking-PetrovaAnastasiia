#include "function.h"
#include <conio.h>
#include <Windows.h>

PersonalBankAccount* input_personal_info(istream& in) {
	cout << "Input full name (name, surname, pathtonymic), " << endl;
	cout << "birth date (day, mounth, years), passport and phone number" << endl;
	PersonalBankAccount* form = new PersonalBankAccount;
	try {
		in >> *form;
	}
	catch (const char* exception) {
		cout << exception << endl;
		delete form;
		form = nullptr;
	}
	return form;
}

LegalEntityBankAccount* input_legal_info(istream& in) {
	cout << "Input name, establishing date (day, mounth, years), TIN," << endl;
	cout <<"legal addreess (flate, house, street, town, index) and phone number" << endl;
	LegalEntityBankAccount* form = new LegalEntityBankAccount;
	try {
		in >> *form;
	}
	catch (const char* exception) {
		cout << exception << endl;
		delete form;
		form = nullptr;
	}
	return form;
}

Account* input_account_info(istream& in) {
	cout << "Change currenty for the account and input the account limit " << endl;
	cout << "Input currency: R - Ruble, E - Euro, D - Dollar" << endl;
	Account* account = new Account;
	try {
		in >> *account;
	}
	catch (const char* exception) {
		cout << "Error: " << exception << endl;
		delete account;
		account = nullptr;
	}
	return account;
}