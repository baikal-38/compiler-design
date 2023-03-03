#include <iostream>
using namespace std;

int main() 
{
    std::string str1 = "He())llo, World!";
    int sum1 = 0;
    
    for (char &ch : str1) {
       //std::cout << ch << std::endl;
       if (ch == '(')  sum1++;
       if (ch == ')')  sum1--;
       if (sum1 < 0)
       {
         std::cout << "Баланс скобок не соблюден!" << std::endl;
         //exit(3);
         return 9;
       }
    }
    
    std::cout << sum1 << std::endl;
    if (sum1 != 0)
    {
      std::cout << "Баланс скобок не соблюден!" << std::endl;
    }
    else
    {
      std::cout << "Баланс скобок соблюден!" << std::endl;
    }/*
    */
    
    return 0;
}
