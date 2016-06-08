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

int main(){
	int T,N, velocity,temp;
	int arr[100002];
	T= fastRead();
	while(T--){
		N=fastRead();
		for(int i=0; i< N; i++) arr[i]= fastRead();
		velocity=arr[0];
		for(int i=1; i< N; i++){
			temp= arr[i]+i;
			if(temp > velocity){
				velocity= temp;
			}
		}
		printf("%d\n",velocity);
	}
	return 0;
}