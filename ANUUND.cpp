#include <stdlib.h>
#include <stdio.h>
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
	int T,i,j,N;
	T=fastRead();
	int arr[100001];
	while(T--){
		N= fastRead();
		for(i=0; i< N; i++)
			arr[i] = fastRead();
		std::sort(arr, arr+N);
		printf("%d",arr[0]);
		for(i=1;i< N; i+=2){
			j=i+1;
			if(j<N)
				printf(" %d %d",arr[j], arr[i]);
			else printf(" %d",arr[i]);
		}
		printf("\n");
	}
}