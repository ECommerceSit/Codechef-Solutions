#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,i,j;
   const int MAX=1000001;
   int*arr=(int *)malloc(sizeof(int)*MAX);
  // printf("%d\n",arr[0]);
   scanf("%d",&n);
   
   for(i = 0; i < n; i++)
   {
     scanf("%d",&j);    
     arr[j]++;
     //printf("%d\n",arr[j]);
   } 
   printf("\n");
   for( i = 0; i < MAX; i++)
   {
      for(j = 0;j < arr[i]; j++)
        printf("%d\n",i );  
   }
   
   //getch();
   return 0; 
}
