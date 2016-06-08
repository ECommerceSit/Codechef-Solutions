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
	long long int T,L,D,S,C,Likes,i;
	T= fastRead();
	while(T--){
		L= fastRead();
		D= fastRead();
		S= fastRead();
		C= fastRead()+1;
		Likes= S;
		for(i=1; i< D; i++){
			Likes= Likes*C;
			if(Likes >= L)
				break;
		}	
		if(Likes < L){
			printf("DEAD AND ROTTING\n");
		}else printf("ALIVE AND KICKING\n");
	}
}