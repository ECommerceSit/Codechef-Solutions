#include<iostream>
#define LIMIT 100
using namespace std;
int main(){
    short n,i,l,k,temp,temp2,carry=0;
    cin>> n;
    short *arr=new short[n];
    const int x=80;
    int vals[x]={0};
    for(i=0;i<n;i++) cin >> arr[i];
    cout <<endl;
    
    for(i=0;i<n;i++){
            temp=arr[i];
            //for(int t=0;t<x;t++) vals[t]=0;
            l=1;
            vals[0]=temp;
		while(--temp>1)
		{
			for(k=0;k<l;k++){
				temp2=vals[k]*temp+carry;
		   		vals[k]=temp2%LIMIT;
		   		carry=temp2/LIMIT;
		   		//cout << vals[k] <<endl;
			}
			while(carry>0){
				vals[k++]=carry%LIMIT;
				carry/=LIMIT;
				l++;
			}
		}
		for(int p=k-1;p>=0;p--) cout << vals[p];
		cout <<endl;
    }
    
 return 0;
}
