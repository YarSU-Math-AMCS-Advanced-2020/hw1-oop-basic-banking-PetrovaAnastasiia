#pragma once
#include "BankAccount.h"

class Card {
public:
	/*Данные*/
	long long int _limit;
	char _currency;
	string _payment_system;
	bool _active_card;

	/*Конструктор*/
	Card(long long int limit=1, char currency=' ', string payment_system="");

	/*Сеттеры и геттеры*/
	void set_limit(long long int limit) { _limit = limit; }
	long long int get_limit() { return _limit; }
	void set_currency(char currency);
	char get_currency() { return _currency; }
	void set_payment_system(string payment_system);
	string get_payment_system() { return _payment_system; }	
	string get_card_id() { return _card_id; }

private:	
	string _card_id;
	

	void set_card_id(string card_id) { _card_id = card_id; }
};