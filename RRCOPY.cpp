#include <stdio.h>
#include <string.h>
#define SIZE 100002
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
	int T,N, j;
	int counter;
	T= fastRead();
	int *arr=new int[SIZE];
	while(T--){
		memset(arr, 0,sizeof(int)*SIZE);
		counter=0;
		N= fastRead();
		for(int i=0; i< N; i++){
			j= fastRead(); 
			if(!arr[j]) counter++;
			arr[j]= 1;
		}
		printf("%d\n",counter);
	}
}