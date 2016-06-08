#include <stdio.h>
#include <cstring>
#define len 1000002
int main(){
	int t,i,j,jump,k, days;
	char str[len];
	scanf("%d",&t);
	while(t--){
		scanf("%s",str);
		j= strlen(str);
		jump=days=k=0;
		for(i=0; i< j; ++i){
			if(str[i]=='.'){
				k=1;
				while(++i< j && str[i]!='#') ++k;
			}
			if(jump < k){
				jump=k;
				days++;
			}
			//printf("%d ",jump);
		}
		//printf("\n");
		printf("%d\n",days);
	}
}