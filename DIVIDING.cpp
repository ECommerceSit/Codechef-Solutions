#include <stdlib.h>
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
	long long int N;
	N= fastRead();
	long long int sum = (N*(N+1))>>1;
	//printf("%llu\n",sum);
	long long int total_sum=0;
	for(int i=0; i< N; i++) total_sum+=fastRead();
	//printf("%llu\n",total_sum);
	if(total_sum== sum)
		printf("YES\n");
	else printf("NO\n");
}