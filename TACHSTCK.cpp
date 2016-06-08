#include <cstdio>
#include <algorithm>
int main(){
	int N,D, pairs;
	scanf("%d%d",&N,&D);
	long long int arr[N+1];
	for(int i=0;i< N; i++) scanf("%llu",&arr[i]);
	std::sort(arr, arr+N);
	pairs=0;
	for(int i=1; i<N; ++i){
		if(arr[i]- arr[i-1] <= D){
			pairs++;
			++i;
		}
	}
	printf("%d\n",pairs);
}