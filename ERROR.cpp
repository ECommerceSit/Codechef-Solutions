#include <stdio.h>
#define gc getchar_unlocked
char S[100002];
inline int fastRead(){
	char ch=gc();
	int counter=0;
	while(ch < '0')ch=gc();
	while(ch >= '0'){
		S[counter++]=ch;
		ch= gc();
	}
	S[counter]='\0';
	return counter;
}

bool compare(int start, char* str){
	if(str[0]== S[start] && str[1]==S[start+1] && str[2]==S[start+2])
		return true;
	return false;
}

int main(){
	int T,i,j;
	scanf("%d",&T);
	char g_1[]="101";
	char g_2[]="010";
	while(T--){
		int len= fastRead()-2;
		bool flag=false;
		for(i=0; i< len; i++){
			if(compare(i,g_1) || compare(i,g_2)){
				flag=true;
				break;
			}
		}
		if(flag)
			printf("Good\n");
		else printf("Bad\n");
	}
}