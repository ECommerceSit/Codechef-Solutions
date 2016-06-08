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
	int T,N;
	T=fastRead();
	while(T--){
		N=fastRead();
		if(N%4==1) printf("ALICE\n");
		else printf("BOB\n");
	}
}