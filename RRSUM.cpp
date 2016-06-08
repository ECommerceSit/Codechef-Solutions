#include <stdio.h>
int main(){
	long long int N,M,Q, low, high, mid;
	scanf("%llu%llu",&N,&M);
	while(M--){
		scanf("%llu",&Q);
		low= N+2;
		high= N+(N<<1);
		mid= (low+high)/2;
		if(Q< low || Q > high)
			printf("0\n");
		else{
			Q= mid-Q;
			if(Q< 0) Q*=-1;
			printf("%llu\n",N-Q);
		}
	}
}