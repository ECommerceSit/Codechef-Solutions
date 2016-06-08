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
	int T,N,i,K;
	int sum1, sum2;
	int arr[103];
	T= fastRead();
	while(T--){
		N= fastRead(); K = fastRead();
		for(i=0; i< N; i++) arr[i]= fastRead();
		std::sort(arr, arr+N);
		int half= N- (N>>1);
		sum1= sum2=0;
		if(K >= half)
			K= N-K;
		for(i=0; i< K; i++)
			sum1+= arr[i];
		for(;i<N;i++)
			sum2+=arr[i];
		printf("%d\n",sum2-sum1);
	}
}