#include <stdio.h>
#include <stdlib.h>
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
	int T,N,i,j;
	int* arr= new int[101];
	int inv, loc_inv;
	T=fastRead();
	while(T--){
		N=fastRead();
		for(i=0;i< N; i++) arr[i]= fastRead();
		inv=0;
		loc_inv=0;
		for(i=0; i< N; i++)
			for(j=i+1; j< N; j++)
				if(arr[i] > arr[j])
					inv++;
		N--;
		for(i=0; i< N; i++)
			if(arr[i] > arr[i+1])
				loc_inv++;
		if(loc_inv== inv)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}