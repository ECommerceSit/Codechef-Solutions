#include<iostream>
using std::cout ;
using std::cin;
using std::endl;
void swap(short &a, short &b){
    short temp; temp=a;a=b;b=temp;
}
void insertionsort(short *arr,short n){
     int  j, min,i;
     
     for (i=0;i<n-1;i++)
     {
        min =i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }if(min!=i)swap(arr[i],arr[min]);
     }
 }
int main(){
     short n,i,j,k,count;
     cin >> n;
     short *arr1;
     short *arr2; 
     for(i=0;i<n;i++){
         cin >>j; count=0;
         arr1=new short[j];
         arr2=new short[j];
         for(k=0;k<j;k++) cin >>arr1[k];
         for(k=0;k<j;k++) cin >>arr2[k];
         insertionsort(arr1,j);
         insertionsort(arr2,j);
         k=--j;
         for(;j>=0;j--) if(arr1[j]<=arr2[k]){count++; k--;}
         delete [] arr1;
         delete [] arr2;
         cout <<endl<<count ;
     }cout <<endl;
}
