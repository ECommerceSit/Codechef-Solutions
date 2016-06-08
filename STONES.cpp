#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked

int main(){
	int T,i;
	scanf("%d",&T);
	int arr[124];
	int s_len, j_len, counter;
	char ch;
	while(T--){
		memset(arr, 0, sizeof(int)*124);
		counter=0;
		ch= gc();
		while(ch<65) ch=gc();
		while(ch>64){
			arr[ch]=1;
			ch=gc();
		}
		ch=gc();
		while(ch<65) ch=gc();
		while(ch>64){
			if(arr[ch])
				counter++;
			ch=gc();
		}
		printf("%d\n",counter);
	}
}