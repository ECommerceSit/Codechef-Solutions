#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <stdbool.h>
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
	int N,i, counter, start, end;
	N= fastRead();
	int *arr= new int[N+1];
	bool *visited= new bool[N+2];
	std::vector<int> start_vector;


	for(i=1; i<= N; i++) arr[i] = fastRead(); 
	counter=0;
	start=1;
    while(counter < N){
    	start_vector.push_back(start);
    	visited[start]=true;
    	counter++;
    	end= arr[start];
    	while(end!=start){
    		counter++;
            visited[end]= true;
            end= arr[end];
    	}
    	for(i=start+1; i<= N; i++)
    		if(!visited[i]){
    			start= i;
    			break;
    		}
    }
    printf("%d\n",start_vector.size());
    unsigned int size= start_vector.size();
    for(int i=0; i< size; i++){
        start= start_vector[i];
        printf("%d ",start);
        end = arr[start];
        while(end!=start){
            printf("%d ",end);
            end= arr[end];
        }
        printf("%d\n",end);
    }
}