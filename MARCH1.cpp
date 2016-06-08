#include <stdio.h>
#include <stdlib.h>
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
	int t,n,m;
	int *arr;
	int pow_n, sum;

	t= fastRead();
	while(t--){
		n= fastRead();
		m= fastRead();
		arr= new int[n];
		for(int i=0;i< n;i++)
			arr[i] = fastRead();
		pow_n= 1<<n;
		for(int i=0;i< pow_n; i++){
			sum=0; 
			int k=i;
			for(int j=0;j< n; j++){
				if(k&1)
					sum+=arr[j];
				k>>=1;
			}
			if(sum==m) break;
		}
		if(sum==m) printf("Yes\n");
		else printf("No\n");
	}
}