#include <stdio.h>
int main(){
	int t;
	long long int sum,n;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		sum= n+((n*(n+1))>>1);
		printf("%llu\n",sum);
	}
}