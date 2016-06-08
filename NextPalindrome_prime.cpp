#include<iostream>
#include<string>
#include<cmath>
using  std::string;
using std::cout;
using std::cin;
using std::endl;
int stringToInt(string&str){
   int l=str.length();
   int temp=1;
   int num=0;
   for(int i=l-1;i>=0;i--) {
   num+= temp*(str[i]-48);
   temp*=10;
   }return num;
}
bool checkPrime(int n ){
    int p=(int)sqrt(n),x,y;
    bool flag=true;
    if(!(n%2 && n%3)) flag=false;
 else{
         for(int i=1;(x=6*i-1)<=p;i++){
             if(!(n%x && n%(x+2))){
             flag=false;
             break;}
         }
    }
    return flag;
}
int main(){
     string str;
     int i,carry=0;
     int j,k,l;
      cin >> str;
      while(1){
      cout <<str <<endl;
         l=str.length();
         if((str[0]-48)%2==0 || str[0]=='5'){
         if(str[0]=='2'|| str[0]=='8')
          str[0]=(char)(str[0]+1);
          
          else if(str[0]=='4' || str[0]=='5' || str[0]=='6' )
          str[0]='7';
          str[l-1]=str[0];
          for(i=1;i<l-1;i++) str[i]='0';
          }
         k=l%2? l/2+1:l/2;
               for(j=l/2-1;j>=0;j--,k++)
                  if(str[j]!=str[k])
                  break;   
                  
                  if(j<0 || str[j] < str[k]){
                     j=l%2?l/2:l/2-1;
                       while(j>=0 && str[j]=='9')
                              str[j--]='0';
                             
                              if(j<0) str="1"+str;
                              else 
                                  str[j]=(char)((int)str[j]+1);
                 }
                  
                 l=str.length();
                 l--;
               for(k=0;k<l;k++,l--)  str[l]=str[k];
               k=stringToInt(str);
               if(checkPrime(k)) {
                  cout <<k<<"  " <<str<<endl;
                  break;
               }
                   }
     return 0;
}
