
#include<iostream>
#include<vector>
using  std::cout;
using std::cin;
using std::endl;
int main(){
    short i,j,k,l,m,n,p;
    cin >>n;
    short *ar=new short[n];
    short ***vect=new short**[n];
    for(i=0;i<n;i++){
         cin >> ar[i] ;
         j=ar[i];
         vect[i]=new short*[j];
         for(k=1;k<=j;k++){
            vect[i][k-1]=new short[k];
             for(l=0;l<k;l++) cin >>vect[i][k-1][l]; 
         }
       }
         for(i=0;i<n;i++){
            j=ar[i];
            for(k=j-2;k>=0;k--){
                  for(l=0;l<=k;l++){
                     if(vect[i][k+1][l] > vect[i][k+1][l+1])
                        vect[i][k][l]+=vect[i][k+1][l];
                     else vect[i][k][l]+=vect[i][k+1][l+1];
                  }
            }
            cout <<endl <<vect[i][0][0];
         }
         cout <<endl;
    return 0;
    
}
