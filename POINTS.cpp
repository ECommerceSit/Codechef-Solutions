#include <map>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
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
	int T,N,x,y;
	float distance, initial_dist;
	int x1, x2, y1, y2, temp1, temp2, flag;
	T= fastRead();
	map<int,vector<int> > coord;
	while(T--){
		N=fastRead();
		for(int i=0; i< N; i++){
			x= fastRead();
			y= fastRead();
			
			if(coord.find(x)== coord.end()){
				std::vector<int> vect;
				coord[x]= vect;
			}
			coord[x].push_back(y);
		}
		distance=0;
		x1=0;y1=0;
		initial_dist=0;
		flag=0;
		for(map<int, vector<int> >::iterator iter= coord.begin(), end= coord.end(); iter!=end; ++iter){
			x2= iter->first;
			vector<int> temp= iter->second;
			sort(temp.begin(), temp.end());
			for(vector<int>::iterator vect_end= temp.end()-1, vect_beg= temp.begin(); vect_end>= vect_beg; --vect_end){
				y2= *vect_end;
				temp1= (x1-x2);
				temp2= (y1-y2);
				distance+= sqrt(temp1*temp1 + temp2*temp2);
				x1= x2; y1= y2;
				if(!flag){
					initial_dist= distance;
			 		flag= 1;
				}
				//printf("%d %d %.2f\n",x1, y1, distance);
			}
		}
		coord.clear();
		printf("%.2f\n",distance- initial_dist);
	}
}