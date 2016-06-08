#include<stdio.h>
 
inline int fast_scan()
{
    int n=0;
    int ch=getchar_unlocked();
    while( ch <48 )ch=getchar_unlocked();
	while( ch >47 ){
		n = (n<<3)+(n<<1) + ch-48;ch=getchar_unlocked();
		}
	return n;
}
int main()
{
     short T=fast_scan();
     short n,i,max,k;
     while(T--){
        n=fast_scan();
        short arr[10001]={0};
         max=0;
        while(n--){
          arr[k=fast_scan()]++;
          if(arr[k]>=arr[max]) {if(arr[max]==arr[k] && max<k) continue; max=k; };
          }
         
          printf("\n%d %d",max,arr[max]);
          }
          putchar('\n');
          return 0;
}
 
