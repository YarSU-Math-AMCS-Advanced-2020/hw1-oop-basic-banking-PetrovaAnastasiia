#include "LegalEntityBankAccount.h"

LegalEntityBankAccount::LegalEntityBankAccount(string name, string TIN, Date establishing_date, Address legal_address) {
	set_name(name);
	set_TIN(TIN);
	set_establishing_date(establishing_date);	
	set_legal_address(legal_address);
}

void LegalEntityBankAccount::set_establishing_date(Date establishing_date) {
	/*ќшибка на номер мес€ца*/
	if (establishing_date.mounth > 12) {
		throw "Mounth error";
	}
	/*ќшибка на день*/
	else if (establishing_date.day > 31) {
		throw "Day error";
	}
	/*ќшибки на февраль - високосный и обычный*/
	else if (establishing_date.mounth == 2 && establishing_date.day > 29 && establishing_date.years % 4 == 0) {
		throw "Date error";
	}
	/*ќшибки на апрель, июнь, сент€брь, окт€брь*/
	else if (establishing_date.mounth == 2 && establishing_date.day > 28 && establishing_date.years % 4 != 0) {
		throw "Date error";
	}
	else if (establishing_date.mounth % 2 == 0 && establishing_date.mounth <= 6 && establishing_date.day > 30 ||
				establishing_date.mounth % 2 == 1 && establishing_date.mounth >= 8 && establishing_date.day > 30) {
		throw "Date error";
	}
	else {
		_establishing_date = establishing_date;
	}
}

void LegalEntityBankAccount::print_info() const {
	LegalEntityBankAccount form = *this;
	cout << endl << "Info legal entity - " << form._name << endl;
	cout << "Establishing date: " << form._establishing_date.day << "." << form._establishing_date.mounth;
	cout << "." << form._establishing_date.years << endl;
	cout << "TIN: " << form._TIN << endl;
	cout << "Address: " << "town " << form._legal_address.town << " , street " << form._legal_address.street;
	cout << ", house " << form._legal_address.house << " , flat " << form._legal_address.flat << " ,index " << form._legal_address.index << endl;
	cout << "Phone number: " << form.get_phone_number() << endl << endl;
}

istream& operator>>(istream& in, LegalEntityBankAccount& form) {
	string name;
	in >> name;
	form.set_name(name);
	int years, mounth, day;
	in >> day >> mounth >> years;
	Date birth_date = { day, mounth, years };
	form.set_establishing_date(birth_date);
	string TIN;
	in >> TIN;
	form.set_TIN(TIN);
	string house, town, street;
	int flate, index;
	in >> flate >> house >> street >> town >> index;
	Address legal_address = { flate, house, town, street, index };
	form.set_legal_address(legal_address);
	string phone_number;
	in >> phone_number;
	form.set_phone_number(phone_number);
	return in;
}

ostream& operator<<(ostream& out, LegalEntityBankAccount& form) {
	form.print_info();
	return out;
}