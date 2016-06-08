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
	int T,N,count4,count7;
	T = fastRead();
	while(T--){
		N=fastRead();
		count4= N/7;
		count7= N%7;
		while(count7%4 && count4){
			count7+= 7;
			count4--;
		}
		if(count7%4==0)
			printf("%d\n",7*count4);
		else printf("%d\n",-1);
	}
}