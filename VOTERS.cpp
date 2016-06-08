#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <map>
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
	int N1,N2,N3,i,j;
	std::map<int, int> map_;
	int *arr= new int[50001];
	N1= fastRead()+fastRead()+ fastRead();
	int counter=0;
	for(i=0;i< N1; i++){
		N2= fastRead();
		if(map_.find(N2) == map_.end())
			map_[N2]=0;
		map_[N2]++;
	}
	for(std::map<int, int>::iterator iter= map_.begin(); iter!=map_.end(); iter++)
		if(iter->second >= 2)
			arr[counter++]=iter->first;
	printf("%d\n",counter);
	for(i=0; i< counter; i++) printf("%d\n",arr[i]);
}