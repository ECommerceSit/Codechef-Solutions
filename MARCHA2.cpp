#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define gc getchar_unlocked
inline  int fastRead(){
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
	int t,k,i,j;
	int leaves;
	bool flag;
	t= fastRead();
	while(t--){
		k= fastRead();
		leaves=1;
		flag= true;
		for(i=0; i< k; i++){
			j= fastRead();
			if(flag){
				leaves= leaves-j;
				if(leaves < 0)
					flag= false;
				else leaves<<=1;
			}
		}
		if(leaves==0)
			printf("Yes\n");
		else printf("No\n");
	}
}