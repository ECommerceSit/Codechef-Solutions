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
	int T,K,rem;
	T=fastRead();
	while(T--){
		K=fastRead();
		rem= K%25;
		if(rem>0)
		for(int i=rem+97; i> 96; i--)
			printf("%c",i);
		rem= K/25;
		for(int i=0; i< rem; i++)
			for(int j=122; j> 96; j--)
				printf("%c",j);

		printf("\n");
	}
}