#include "PersonalBankAccount.h"
#include "LegalEntityBankAccount.h"
#include "Transaction.h"
#include "Account.h"
#include "Card.h"

/*���� ���������� ��� ���.���� - ���� ������, �� ������� ����������*/
PersonalBankAccount* input_personal_info(istream& in);

/*���� ���������� ��� ��.��� - ���� ������, �� ������� ����������*/
LegalEntityBankAccount* input_legal_info(istream& in);

/*���� ���������� ��� �����*/
Account* input_account_info(istream& in);