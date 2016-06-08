#include <iostream>
using namespace std;
void print_meth (int a , int b){
	cout << a  <<" " << b <<endl;
}
 int main(){
   int a =1;
   print_meth(a++ , 4);
 }