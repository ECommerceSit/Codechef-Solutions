#include<iostream>
using std::cout;
using std::cin;
using std::endl;
void swap(int &a, int &b){
    int temp; temp=a;a=b;b=temp;
}
void insertionsort(int *arr,int n){
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
