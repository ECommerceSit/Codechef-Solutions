#include <stdio.h>
#define gc getchar_unlocked
inline long long int fastRead(){
	long long int num=0;
	char ch=gc();
	while(ch < 48) ch=gc();
	while(ch>47){
		num=(num<<1)+(num<<3)+ ch- 48;
		ch=gc();
	}
	return num;
}

int main(){
	long long int n,a,t;
	t= fastRead();
	while(t--){
		n=fastRead();
		for(long long int i=0; i< n; i++)
			a= fastRead();
		printf("%llu\n",(n*(n-1))>>1);
	}
	return 0;
}