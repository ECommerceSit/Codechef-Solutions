#include <stdlib.h>
#include <stdio.h>
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
	int T,K,N;
	int i,j;
	int *arr=new int[101];
	T=fastRead();
	while(T--){
		N=fastRead();
		for(i=0;i<N;i++)
			arr[i]= fastRead();
		K= fastRead();
		K= arr[K-1];
		j=1;
		for(i=0;i<N;i++)
			if(arr[i] < K)
				j++;
		printf("%d\n",j);
	}
}