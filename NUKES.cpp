#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int A,N,K, counter;
	A=fastRead();
	N=fastRead();
	K=fastRead();
	int *arr=(int*)malloc(sizeof(int)*100);
	counter=0;
	if(N>0){
		N=N+1;
		while(A){
			arr[counter]= A%N;
			A/=N;
			if(counter < K)
				counter++;
		}
	}
	for(int i=0;i< K; i++)
		printf("%d ",arr[i]);
	printf("\n");
}