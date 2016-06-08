#include<iostream>
#include<iomanip>
int main()
{
    float balance;
    int amount,n;
    
    std::cin >> amount >>balance;
    if((balance>=0.0f && balance <=2000.0f) && (amount>=0 && amount <=2000) &&(amount%5==0) && ((balance-0.5)>=(float)amount)) 
         balance=balance-(amount+0.50);
   std::cout <<std::fixed <<std::setprecision(2) <<balance <<std::endl;
    return 0;
}


