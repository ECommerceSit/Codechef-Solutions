#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked
char str[1001];
int fastRead(){
	char ch=gc();
	int i=0;
	while(ch< 97) ch=gc();
	while(ch >96){
		str[i++]= ch;
		ch=gc();
	}
	return i;
}

int main(){
	int T,i,j;
	int counter[127];
	scanf("%d",&T);
	while(T--){
		for(i=0;i< 127;i++)
			counter[i]=0;

		int len= fastRead();
		int half= len>>1;
		for(i=0, j=len-1 ;i<half; i++, j--){
			counter[str[i]]++;
			counter[str[j]]--;
		}
		//printf("%d %d\n",i,j);
		for(i=97;i< 123; i++)
			if(counter[i]!=0)
				break;
		if(i<123)
			printf("NO\n");
		else printf("YES\n");
	}
}