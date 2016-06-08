#include <stdio.h>
#include <string.h>
#define PRIME 10000009
int main(){
	char str[1000002];
	int t,i,j,num,lens, flag, len;
	scanf("%d",&t);
	while(t--){
		scanf("%s", str);
		len= strlen(str);
		for(i=0, j= len-1, len>>=1, flag= 1, num=1; i <= j; ++i, --j){
			if((str[i]=='?' && str[j]!='?') || (str[i]!='?' && str[j]=='?'))
				num*=1;
			else if(str[i]=='?' && str[j] == '?')
				num*=26;
			else if(str[i]!= str[j]){
				flag= 0;
				break;
			}
			if(num >= PRIME)
				num %= PRIME;
		}
		if(!flag)
			printf("0\n");
		else
			printf("%d\n",num);
	}
}