#include "PersonalBankAccount.h"
#include "LegalEntityBankAccount.h"
#include "Transaction.h"
#include "Account.h"
#include "Card.h"

/*Ввод информации для физ.лица - если ошибка, то бросает исключение*/
PersonalBankAccount* input_personal_info(istream& in);

/*Ввод информации для юр.лиц - если ошибка, то бросает исключение*/
LegalEntityBankAccount* input_legal_info(istream& in);

/*Ввод информации для счета*/
Account* input_account_info(istream& in);