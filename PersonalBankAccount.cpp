#include "PersonalBankAccount.h"

PersonalBankAccount::PersonalBankAccount( string name, string surname, string pathronymic, string passport, Date birth_date) {
	set_name(name);
	set_surname(surname);	
	set_pathronymic(pathronymic);
	set_passport(passport);
	set_birth_date(birth_date);;
}

void PersonalBankAccount::set_birth_date(Date birth_date) {
	/*ќшибка на номер мес€ца*/
	if (birth_date.mounth > 12) {
		throw "Mounth error";
	}
	/*ќшибка на день*/
	else if (birth_date.day > 31) {
		throw "Day error";
	}
	/*ќшибки на февраль - високосный и обычный*/
	else if (birth_date.mounth == 2 && birth_date.day > 29 && birth_date.years % 4 == 0) {
		throw "Date error";
	}
	/*ќшибки на апрель, июнь, сент€брь, окт€брь*/
	else if (birth_date.mounth == 2 && birth_date.day > 28 && birth_date.years % 4 != 0) {
		throw "Date error";
	}
	else if (birth_date.mounth % 2 == 0 && birth_date.mounth <= 6 && birth_date.day > 30 ||
				birth_date.mounth % 2 == 1 && birth_date.mounth >= 8 && birth_date.day > 30) {
		throw "Date error";
	}
	else {
		_birth_date = birth_date;
	}
}

void PersonalBankAccount::set_passport(string passport) {
	_passport = passport;
}

bool PersonalBankAccount::has_pathronymic() {
	if (_pathronymic.size() == 0) return false;
	else return true;
}

void PersonalBankAccount::redices_name() {
	cout << _surname[0] << ". " << _name[0] << ". " << _pathronymic[0] << "." << endl;
}

void PersonalBankAccount::print_info() const {
	PersonalBankAccount form = *this;
	cout << endl << "Info perconal - " << form._name << " " << form._surname << " " << form._pathronymic << endl;
	cout << "Birth date: " << form._birth_date.day << "." << form._birth_date.mounth << "." << form._birth_date.years << endl;
	cout << "Passport: " << form._passport << endl;
	cout << "Phone number: " << form.get_phone_number() << endl << endl;
}

istream& operator>>(istream& in, PersonalBankAccount& form) {
	string name, surname, patronymic;
	in >> name;
	form.set_name(name);
	in >> surname;
	form.set_surname(surname);
	in >> patronymic;
	form.set_pathronymic(patronymic);
	int years, mounth, day;
	in >> day >> mounth >> years;
	Date birth_date = { day, mounth, years };
	form.set_birth_date(birth_date);
	string passport;
	in >> passport;
	form.set_passport(passport);
	string phone_number;
	in >> phone_number;
	form.set_phone_number(phone_number);
	return in;
}

ostream& operator<<(ostream& out, PersonalBankAccount& form) {
	form.print_info();
	return out;
}