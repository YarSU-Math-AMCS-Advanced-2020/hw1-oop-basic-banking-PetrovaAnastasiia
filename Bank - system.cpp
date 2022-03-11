#include "function.h"

int main(){
    /*PersonalBankAccount* form1 = input_personal_info(cin);
    if (form1 == nullptr) cout << "Incorrect" << endl;
    else {
        form1->print_info();
        cout << "Input name for chahge" << endl;
        string str1;
        cin >> str1;
        form1->set_name(str1);
        form1->print_info();
    }*/

    LegalEntityBankAccount* form2 = input_legal_info(cin);
    if (form2 == nullptr) cout << "Incorrect" << endl;
    else {
        form2->print_info();
        cout << "Input name for chahge" << endl;
        string str2;
        cin >> str2;
        form2->set_name(str2);
        form2->print_info();
    }
    
    return 0;
}