#include <stdio.h>
#include <iostream>
#include <string>
int main(){
	int n,k,j;
	std::string str;
	std::cin >> k>> n;
	std::string k_str[k];
	for(int i=0; i< k; i++)
		std::cin>> k_str[i];
	for(int i=0;i< n; i++){
		std::cin>> str;
		if(str.size()>=47)
			printf("Good\n");
		else{
			for(j=0; j< k; j++)
				if(str.find(k_str[j])!=std::string::npos)
					break;
			if(j<k) printf("Good\n");
			else printf("Bad\n");
		}
	}
}