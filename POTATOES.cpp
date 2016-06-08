#include <stdio.h>
#define SIZE 2200
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

int primes[SIZE];
void sieve(){
	primes[0]= primes[1]=1;
	for(int i=2; i< SIZE; i++){
		if(!primes[i])
			for(int j=(i<<1); j< SIZE; j+=i)primes[j]=1;
	}
}

int main(){
	int T,x,y,i;
	sieve();
	T= fastRead();
	while(T--){
		x= fastRead()+fastRead();
		y= x+1;
		for(i= y; i< SIZE; i++)
			if(!primes[i])
				break;
		printf("%d\n",i-y+1);
	}
}