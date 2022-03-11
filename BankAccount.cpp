#include "BankAccount.h"

BankAccount::BankAccount(string account_id, double balance, string phone_number) {
	set_account_id(account_id);
	set_balance(balance);
	set_phone_number(phone_number);
}