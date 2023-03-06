#include <iostream>
#include "header.h"

using namespace std;

int main() 
{
    string str1;
    cout << "Введите строку: ";
    getline(cin, str1);
    
    if (check_balance(str1))
    {
    	cout << "Баланс скобок соблюден!" << endl;
    }
    else
    {
    	cout << "Баланс скобок не соблюден!" << endl;
    }   
    
    return 0;
}
