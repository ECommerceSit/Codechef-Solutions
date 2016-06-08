#include<iostream>
using namespace std;
int main()
{
  int n,i,j,k;
  cin>>n;
  while(n>0){
     int *arr=new int[n];
     j=0;
     for(i=0;i<n;i++) cin >>arr[i];
     for(i=0;i<n;i++) {if(arr[arr[i]-1]==i+1) j++;
     else break;}
     if(j==n) cout <<"ambiguous\n";
     else cout <<"not ambiguous\n";
     cin >>n;
     delete [] arr;
  }
  return 0;
}
