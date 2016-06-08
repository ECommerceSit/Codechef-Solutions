#include <stdio.h>
#include <algorithm>
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
	int T,N,sum,M,i;
	int arr[101];
	T= fastRead();
	while(T--){
		N=fastRead();
		for(i=0; i< N; i++) arr[i]= fastRead();
		sum=0;
		std::sort(arr, arr+N);
		for(i=1, M=N; i< N;i++){
			--M;
			sum+=(arr[i]- arr[i-1])*M;
		}
		printf("%d\n",sum);
	}	
}