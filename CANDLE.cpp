#include <stdio.h>
#include <stdlib.h>
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
	int t,i, index, val, num;
	int arr[10];
	t=fastRead();
	while(t--){
		for(i=0;i< 10;i++)
			arr[i]= fastRead();
		val=9;
		index=0;
		for(i=1;i< 10;i++){
			if(arr[i] < val){
				val= arr[i];
				index= i;
			}
		}
		num=index;
		if(arr[0] < val){
			val=arr[0]+1;
			index= 0;
			for(i=1;i< 10;i++)
				if(arr[i]){
					num=i;
					break;
				}
		}

		for(i=0;i< val; i++)
			num= (num<<1)+ (num<<3) + index;

		printf("%d\n",num);
	}
}