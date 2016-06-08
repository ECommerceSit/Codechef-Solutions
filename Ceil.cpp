#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
	int T,p,i,j;
	bool array_1[20];

	T=fastRead();
	while(T--){
		p=fastRead();
		for(i=0;i< 20;i++)
			array_1[i]=false;
		int i=0;
		while(p){
			if(p&1)
				array_1[i]=true;
			i++;
			p>>=1;
		}
		int count=0;
		for(j=0;j< i;j++)
			if(array_1[j])
				count= j<12? count+1: count+(1<<(j-11));
		printf("%d\n",count);
	}

	return 0;
}