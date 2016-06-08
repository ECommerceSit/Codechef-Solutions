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

int dot(int x1, int y1, int x2, int y2){
	return x1*x2 + y1* y2;
}

int main(){
	int N,x1,x2,x3,y1,y2,y3;
	N=fastRead();
	int counter=0;
	while(N--){
		x1= fastRead(); y1= fastRead();
		x2= fastRead(); y2= fastRead();
		x3= fastRead(); y3= fastRead();
		if(!dot(x1-x2, y1-y2, x3-x2, y3-y2) || !dot(x1-x3, y1-y3, x2-x3, y2-y3) 
			|| !dot(x2-x1, y2-y1, x3-x1, y3- y1))
			counter++;
	}
	printf("%d\n",counter);
}