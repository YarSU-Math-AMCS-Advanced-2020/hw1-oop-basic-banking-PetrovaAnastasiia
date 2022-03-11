#pragma once
#include "BankAccount.h"

class Account {
public:
	/*������*/
	long long int _limit;
	char _currency;

	/*�����������*/
	Account(char currency='R', long long int limit=0, string account_id="");

	/*������� � �������*/
	void set_currency(char currency);
	char get_currency() { return _currency; }
	void set_limit(long long int limit) { _limit = limit; }
	long long int get_limit() { return _limit; }	
	string get_account_id() { return _account_id; }

	/*������ ������ � ������*/
	void print_info() const;

	/*���������� ����������*/
	friend istream& operator>>(istream& in, Account& account);
	friend ostream& operator<<(ostream& out, Account& account);	
private:
	string _account_id;

	void set_account_id(string account_id) { _account_id = account_id; }
};