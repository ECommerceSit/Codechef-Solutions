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
	int T,p;
	T=fastRead();
	while(T--){
		p=fastRead();
		if(p&1)
			printf("%d\n",p-1);
		else printf("%d\n",p);
	}
}