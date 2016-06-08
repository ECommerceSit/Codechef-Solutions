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
	int T,X,N;
	int arr[101];
	int sum, quantity, left,i;
	T=fastRead();
	while(T--){
		N=fastRead();
		X= fastRead();
		sum=0;
		for(i=0;i< N;i++){
			arr[i]= fastRead();
			sum+=arr[i];
		}
		quantity= sum/X;
		left= sum%X;
		if(left){
			for(i=0;i< N; i++)
				if(arr[i] <= left)
					break;
			if(i<N) printf("-1\n");
			else printf("%d\n",quantity);
		}else printf("%d\n",quantity);
	}
}