#include<iostream>
//#include<string>

using namespace std;
int main(){
    unsigned long long A,B,result,last_digit;
    cin >> A >>B;
    result=A-B;
    last_digit=result%10;
    result/=10;
    if(last_digit==9)
      last_digit-=2;
    result=result*10+(last_digit+1)%10;
    cout <<result <<endl;
    return 0;
}
