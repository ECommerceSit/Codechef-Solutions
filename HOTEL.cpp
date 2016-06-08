#include <stdio.h>
#include <stdlib.h>
#include <cstring>
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
	int T,N,i,j;
	T= fastRead();
	int *arrival= new int[101];
	int *departure= new int[101];
	int time_[1001];
	while(T--){
		N=fastRead();
		memset(time_,0, sizeof(int)*1001);
		for(i =0; i< N; i++) arrival[i]= fastRead();
		for(i= 0; i< N; i++) departure[i] = fastRead();
		for(i=0; i< N; i++){
			for(j= arrival[i]; j< departure[i]; j++)
				time_[j]++;
		}
		j=0;
		for(i=0; i< 1001; i++)
			if(j < time_[i])
				j= time_[i];
		printf("%d\n",j);
	}
}