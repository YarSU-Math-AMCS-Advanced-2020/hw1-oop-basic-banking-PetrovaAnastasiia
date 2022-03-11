#include "Account.h"

Account::Account(char currency, long long int limit, string account_id) {
	set_currency(currency);
	set_limit(limit);
	set_account_id(account_id);
}

void Account::set_currency(char currency) {
	if (currency == 'R' || currency == 'E' || currency == 'D') {
		_currency = currency;
	}
	else {
		throw "Currency error";
	}	
}

void Account::print_info() const {
	Account account = *this;
	cout << "Currency: ";
	if (account._currency == 'R') cout << "Ruble" << endl;
	else if (account._currency == 'E') cout << "Euro" << endl;
	else cout << "Dollar" << endl;
	cout << "Account for limit : " << account._limit << endl;
}

istream& operator>>(istream& in, Account& account) {
	char c;
	in >> c;
	account.set_currency(c);
	long double limit;
	in >> limit;
	account.set_limit(limit);
	return in;
}

ostream& operator<<(ostream& out, Account& account) {
	account.print_info();
	return out;
}