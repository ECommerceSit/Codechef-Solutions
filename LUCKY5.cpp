#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int t, counter,len;
	cin>> t;
	string num;
	while(t--){
		cin >> num;
		counter=0;
		len= num.size();
		for(int i=0; i< len; ++i){
			if(num[i]=='4' || num[i]=='7')
				counter++;
		}
		printf("%d\n",len-counter);
	}
}