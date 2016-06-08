#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
     cin >> t;
     int l1,l2,i,j,flag;
     string str1, str2;
     while(t--){
      cin>> str1 >> str2;
      flag=0;
      i=0;j=0;
       l1=str1.length();
       l2=str2.length();
       if(l1>=l2){
          while(i<l1){
             if(str1[i++]==str2[j])
               j++;
               if(j==l2) { flag++; cout << "YES\n";break;}
          }
       }else {
            while(i<l2){
               if(str2[i++]==str1[j])
                  j++;
                  if(j==l1){flag++;cout << "YES\n";break;}
            }
       } if(!flag) cout <<"NO\n";
      }
      return 0;
}
