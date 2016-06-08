#include<iostream>
using std::cin ;
using std::cout;
using std::endl;
int main(){
     int n,m,i,k;
     cin >>n;
     
     short *player1=new short[n];
     short *player2=new short[n];
     short max=0,winner;
     cout <<endl;
     
     for(i=0;i<n;i++)
          cin >>player1[i] >>player2[i];
        for(i=0;i<n;i++){   if((k=player1[i]-player2[i])>0) {
           if(max<k){
             winner=1;
             max=k;}
           }else {
             if(max< -1*k){
             max=-1*k;
             winner=2;
             }
           }
     }
     cout <<winner <<" " <<max <<endl;
     return 0;
}
