#include <stdio.h>
#define gc getchar_unlocked

int fastRead(){
	int num=0;
	char ch=gc();
	while(ch < 48) ch=gc();
	while(ch>47){
		num=(num<<1)+(num<<3)+ ch- 48;
		ch=gc();
	}
	return num;
}

int main(){
	int T,i,j,path_length;
	T=fastRead();
	while(T--){
		i=fastRead();
		j= fastRead();
		path_length=0;
		while(i!=j){
			if(i>j)
				i>>=1;
			else j>>=1;
			path_length++;
		}
		printf("%d\n",path_length);
	}
}