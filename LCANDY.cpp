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
	int T,N,C;
	T=fastRead();
	while(T--){
		N= fastRead();
		C= fastRead();
		while(N){
			C-= fastRead();
			N--;
		}
		if(C<0) printf("No\n");
		else printf("Yes\n");
	}
}