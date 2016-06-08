#include<iostream>
using namespace std;
int fact(int i){
   int fact=1;
   while(i >1)fact*=i--;
   return fact;
}

int main()
 {
     for(int i=2;i<=12;cout <<fact(i) <<" ",i++);
       return 0;
}
