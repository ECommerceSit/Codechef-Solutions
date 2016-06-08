#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int t,k,n,result,i,j,l;
     cin >> t;
     for(i=0;i<t;i++){
          cin >> n >>k;
           if(k<=n/2){
               for(j=n-1,l;j>=(n-k+1);j--) l*=j;
               for(j=k-1;j>0;j--) l/=j;
           } else {
              for(j=n-1,l=1;j>=k;j--)l*=j;
               for(j=n-k;j>1;l/=j,j--);
           }
           cout << l <<endl;
     }
     return 0;
}
