#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HEAD 1
#define TAIL 2
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
	int I,T,N,Q,i,j,G;
	T=fastRead();
	while(T--){
		G=fastRead();
		while(G--){
			I=fastRead();
			N=fastRead();
			Q=fastRead();
			if(N&1){
				if(Q==I)
					printf("%d\n",N>>1);
				else printf("%d\n",(N>>1)+1);
			}else{
				printf("%d\n",N>>1);
			}
		}
	}
}