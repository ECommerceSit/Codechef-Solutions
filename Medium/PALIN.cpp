#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLEN 1000009
char string[MAXLEN];
int main(){
	long long n,i,j,k;
	long long right, left, flag, middle;
	scanf("%llu",&n);
	while(n--){
		scanf("%s",string+1);
		string[0]= '0';
		long long len= strlen(string);
		//printf("%d\n",len);
		//printf("%s\n",string+1);
		--len;
		left= (len>>1);
		if(len&1){
			right= left+2;
			middle= left+1;
		}
		else{
			right= left+1;
			middle= left;
		}

		flag= false;
		for(; left > 0 && right <= len; left--, right++){
			if(string[left] > string[right]){
				flag= true;
				break;
			}else if(string[left] < string[right])
				break;
		}
		if(flag){
			for(;left>0 && right <= len; left--, right++)
				string[right]= string[left];
		}else{
			for(i= middle; i>0 ; i--){
				j= string[i]+1;
				if(j>57)
					string[i]= '0';
				else{
					string[i]= j;
					break;
				}
			}
			right= middle+1;
			if(len&1)
				left=middle-1;
			else
				left= middle;

			if(i<=0){
				string[i]= '1';
				right--;
			}
			for(; left>=0 && right<= len; left--, right++ )
				string[right]= string[left];
		}
		if(string[0]=='1')
			printf("%s\n",string);
		else printf("%s\n",string+1);
	}	
}
