#include <stdio.h>
#define gc getchar_unlocked
inline long long int fastRead(){
	long long int num=0;
	char ch=gc();
	while(ch < 48) ch=gc();
	while(ch>47){
		num=(num<<1)+(num<<3)+ ch- 48;
		ch=gc();
	}
	return num;
}

int main(){
	long long int a= fastRead();
	long long int mod= a%6;
	if(mod==1 || mod==3 || mod==0)
		printf("yes\n");
	else printf("no\n");
}
