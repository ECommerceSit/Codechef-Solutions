#include <stdio.h>
#define MAX_ 100001
int main(){
	int T,N,i,j;
	int arr[50001];
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&N);
		for(j=0;j<N;j++)
			scanf("%d",&arr[j]);
		int min=MAX_;
		for(j=0;j<N;j++){
			if(arr[j]<min)
				min = arr[j];
		}
		printf("%d\n",(N-1)*min);
	}
}