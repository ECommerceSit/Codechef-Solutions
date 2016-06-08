#include <stdio.h>
#include <map>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int t,n;
	string name, vote;
	scanf("%d",&t);
	map<string, string> records;
	while(t--){
		scanf("%d",&n);
		for(int i=0; i< n; i++){
			cin>> name >> vote;
			records[name]= vote;
		}
		int count =0; 
		for(map<string, string>::iterator iter= records.begin(), end= records.end(); iter!= end; ++iter){
			if(iter->second=="+")
				count++;
			else count--;
		} 
		printf("%d\n",count);
		records.clear();
	}
	return 0;	
}