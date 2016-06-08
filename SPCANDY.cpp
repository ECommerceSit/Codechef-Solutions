#include <stdlib.h>
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
	int T;
	unsigned long long N,K;
	unsigned long long teacher, students;
	T= fastRead();
	while(T--){
		scanf("%llu %llu",&N,&K);
		if(K==0){
			teacher= N; students=0;
		}else{
			students= N/K; teacher= N%K;
		}
		printf("%llu %llu\n",students, teacher);
	}
}