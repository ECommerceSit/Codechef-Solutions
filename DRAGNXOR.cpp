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

int returnBits_1(int A){
	int numBits=0;
	while(A){
		if(A&1)
			numBits++;
		A>>=1;
	}
	return numBits;
}
int main(){
	int T,N,A,B;
	T= fastRead();
	while(T--){
		N= fastRead(); A= fastRead(); B= fastRead();
		A= returnBits_1(A);
		B= returnBits_1(B);
		//printf("%d %d\n",A,B);
		A= A+B;
		B=0;     // B will store the final result
		if(A > N)
			A= (N<<1)-A;
		for(int i=0; i< A; i++){
			B+= 1<<(--N);
		}
		printf("%d\n",B);
	}
}