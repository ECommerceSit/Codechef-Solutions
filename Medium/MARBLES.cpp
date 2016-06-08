#include <stdio.h>
#include <stdlib.h>

long long binCoeff(long long n, long long k){
	k--; n--;
	if(k > (n>>1))
		k= n-k;
	long long *C=(long long*)malloc(sizeof(long long)*(k+1));
	C[0]=1;
	for(int i=1; i<= n; i++){
		for(int j= i>k?k:i; j>0; j--)
			C[j]= C[j]+C[j-1];
	}
	return C[k];
}

int main(){
	int T;
	long long n,k;
	scanf("%d",&T);
	while(T--){
		scanf("%llu%llu",&n,&k);
		printf("%llu\n",binCoeff(n,k));
	}
}