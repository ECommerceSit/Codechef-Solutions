#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

// int primes[SIZE];
// int counter;
// void sieve(){
// 	primes[0]= primes[1]=1;
// 	for(int i=2; i< SIZE; i++){
// 		if(!primes[i])
// 			for(int j=(i<<1); j< SIZE; j+=i)primes[j]=1;
// 	}
// 	counter=0;
// 	for(int i=2; i< SIZE; i++)
// 		if(!primes[i])
// 			primes[counter++]=i;
// }
int gcd(int a,int b){
	if(a==0) return b;
	else if(b==0) return a;
	else return gcd(b, a%b);
}

int main(){
	// memset(primes,0,sizeof(int)*SIZE);
	// sieve();
	int T,N,i,gcd_;
	int arr[1001];
	T= fastRead();
	while(T--){
		N=fastRead();
		for(i=0; i< N; i++)
			arr[i]= fastRead();
		gcd_= arr[0];
		for(i=0; i< N; i++){
			gcd_= gcd(gcd_, arr[i]);
			if(gcd_==1)
				break;
		}
		printf("%d\n", gcd_);
	}
	return 0;
}