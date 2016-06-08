#include <stdio.h>
#define gc getchar_unlocked
inline int fastRead(){
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
	int t,n,q,c;
	int i,l,r;
	t= fastRead();
	while(t--){
		n= fastRead();
		c= fastRead();
		q= fastRead();
		for(i=0; i< q; i++){
			l= fastRead(); r = fastRead();
			if(l<= c && c<= r)
				c= r-(c-l);
		}
		printf("%d\n",c);	
	}
}