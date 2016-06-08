#include <stdio.h>
#include <string.h>
int main(){
	char str[1002];
	int t, len, steps, inc;
	scanf("%d",&t);
	while(t--){
		scanf("%s",str);
		len= strlen(str);
		steps= 2;
		for(int i=1; i< len; i++){
			inc= str[i] - str[i-1];
			if(inc< 0)
				inc= 26 + inc;
			steps+= inc+1;
		}
		//printf("%d\n",steps);
		if(steps<= 11* len) printf("YES\n");
		else printf("NO\n");
	}
}