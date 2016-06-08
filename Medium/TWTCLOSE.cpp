#include <cstdio>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int main(){
	int N,K,i,j,openedTweets,tweetNo;
	char press[10];
	char click[]= "CLICK";
	char closeAll[]= "CLOSEALL";
	openedTweets=0;
	scanf("%d%d",&N,&K);
	bool *tweetArr=new bool[N+2];
	while(K--){
		scanf("%s",press);
		if(strcmp(press,click)==0){
			scanf("%d",&tweetNo);
			if(tweetArr[tweetNo])
				openedTweets--;
			else openedTweets++;
			tweetArr[tweetNo]= !tweetArr[tweetNo];
		}
		else if(strcmp(press,closeAll)==0){
			memset(tweetArr,false, sizeof(bool)*(N+2));
			openedTweets=0;
		}
		printf("%d\n",openedTweets);
	}
}