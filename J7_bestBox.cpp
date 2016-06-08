#include<iostream>
#include<cmath>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;
int main()

{
    int t,i,P,S;
    float b1,b2,j,v1,v2;
    cin >> t;
    while(t--){
        cin >> P >>S;
        j=sqrt(P*P-4*6*S);
        b1=(P-j)/12;
        //b2=(P-j)/12;
        v1=b1*S/2.0-b1*b1*P/4.0+b1*b1*b1;
        //v2=b2*S/2.0-b2*b2*P/4.0+b2*b2*b2;
        //b1=v1>v2?v1:v2;
        cout <<fixed;
        cout<<setprecision(2);
        cout <<endl <<v1;
    }
    cout <<endl;
    return 0;
}
