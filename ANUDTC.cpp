#include <stdio.h>
#define gc getchar_unlocked
inline int fastRead(){
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
	T= fastRead();
	while(T--){
		N= fastRead();
		if(!(360%N)) printf("y ");
		else printf("n ");
		if(N<=360) printf("y ");
		else printf("n ");
		i= (N*(N+1))>>1; 
		if(i<= 360) printf("y ");
		else printf("n ");
		printf("\n");
	}
}