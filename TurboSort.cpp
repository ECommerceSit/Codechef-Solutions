#include<>
#include<stdlib.h>
int main()
{
   int t,n,i,j,*arr,MAX = 1000000;
   scanf("%d",&t);
   
   arr = (int *)malloc(sizeof(int) * MAX); 
   for(i = 0; i < t; i++)
   {
     scanf("%d",&n);    
     arr[n-1]++;
   } 
   
   for( i = 0; i < MAX; i++)
   {
      for(j = 0;j < arr[i]; j++)
        printf("%d\n",i + 1);  
   }
   
   //getch();
   return 0; 
}
