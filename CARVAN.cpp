#include <stdlib.h>
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
	int *arr= new int[10000];
	int counter, speed1,speed2;
	T=fastRead();
	while(T--){
		N=fastRead();
		speed1= fastRead();
		counter=1;
		N--;
		while(N--){
			speed2= fastRead();
			if(speed2 < speed1){
				counter++;
				speed1= speed2;
			}
		}
		printf("%d\n",counter);
	}
}