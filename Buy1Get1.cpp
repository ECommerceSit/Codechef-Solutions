#include<iostream>
#include<string>
using std::string;
using std::cout ;
using std::cin;
using std::endl;
int main(){
   int t,i,j,k,p,f;
   cin >> t;
   int x,y;
   string str;
   cin.get();
     short *arr1=new short[124];
   
   while(t--){
     getline(cin,str);
     
     for(x='a',y='A';x<='z';x++,y++){arr1[x]=0;arr1[y]=0;}
     j=0;
     k=0;
     
     while(str[j])
      arr1[str[j++]]++;
     for(x='a',y='A';x<='z';x++,y++)k+=(arr1[x]+1)/2+(arr1[y]+1)/2;
     cout <<endl<<k;
    
     }
     cout <<endl;
   return 0;
}
