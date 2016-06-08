#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char str[102];
	char byt_alph[28];
	int ascii_trans[129];
	char eng[]="abcdefghijklmnopqrstuvwxyz";
	int T,i,j;
	scanf("%d%s",&T,byt_alph);
	for(int i=0; i< 129; i++)
		ascii_trans[i]=i;

	for(int i=0;i< 26; i++){
		ascii_trans[eng[i]]=byt_alph[i];
		ascii_trans[eng[i]-32]=byt_alph[i]-32;
	}
	ascii_trans['_']=' ';
	//printf("%c%c\n",ascii_trans['!'], ascii_trans[66]);
	while(T--){
		scanf("%s",str);
		j= strlen(str);
		for(int i=0; i< j; i++)
			putchar(ascii_trans[str[i]]);
		printf("\n");
	}
}