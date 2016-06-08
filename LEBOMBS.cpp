#include <stdio.h>
#define gc getchar_unlocked
char string[1003];
inline void fastRead(int N){
	string[0]='0';
	int len=1; 
	char ch= gc();
	while(ch < '0') ch=gc();
	while(ch >= '0'){
		string[len++]= ch;
		ch= gc();
	}
	string[++N]='0';
	string[++N]='\0';	
}

int main(){
	int T,N,i,j;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		fastRead(N);
		//printf("%s %d\n",string, N);
		for(i=1; i<= N; ++i)
			if(string[i]=='1'){
				string[i-1]= '1';
				if(string[i+1]!='1')
					string[++i]='1';
			}
		j=0;
		for(int i=1; i<= N; i++)
			if(string[i]=='0')
				j++;
		printf("%d\n",j);
	}
}