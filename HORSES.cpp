#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#define gc getchar_unlocked
int fastRead(){
	int num=0;
	char ch=gc();
	while(ch < 48) ch=gc();
	while(ch>47){
		num=(num<<1)+(num<<3)+ ch- 48;
		ch=gc();
	}
	return num;
}

int main(){
	int t,n,i;
	int min, temp;
	t= fastRead();
	while(t--){
		n=fastRead();
		int *arr= new int[n];
		for(i=0; i< n; i++)
			arr[i]= fastRead();
		std::sort(arr, arr+n);
		min= 1000000001;
		for(int i=0;i< n-1;i++){
			if((temp=arr[i+1]- arr[i]) < min)
				min = temp;
		}
		printf("%d\n",min);
	}
}