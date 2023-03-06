#include <iostream>
#include "header.h"

using namespace std;

bool check_balance(string str1) 
{
    int sum1 = 0;
    
    for (char &ch : str1) 
    {
       if (ch == '(')  sum1++;
       if (ch == ')')  sum1--;
       if (sum1 < 0)   return false;
    }    
    
    if (sum1 != 0)
    {
      return false;
    }
    else
    {
      return true;
    }
}
