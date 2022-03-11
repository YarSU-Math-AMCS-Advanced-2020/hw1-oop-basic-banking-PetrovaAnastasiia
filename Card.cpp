#include "Card.h"

Card::Card(long long int limit, char currency, string payment_system) {
	set_limit(limit);
	set_currency(currency);
	set_payment_system(payment_system);
}

void Card::set_currency(char currency) {
	if (currency == 'R' || currency == 'E' || currency == 'D') {
		_currency = currency;
	}
	else {
		throw "Currency error";
	}
}

void Card::set_payment_system(string payment_system) {
	if (payment_system == "Lisa" || payment_system == "MasterBard" || payment_system == "HoMir") {
		_payment_system = payment_system;
	}
	else {
		throw "Payment system error";
	}
}