
#include<stdio.h>
#include<cstdlib>
int func(const void *a, const void*b){
   return ( *(int*)a - *(int*)b );
}

/*void swap(int &a, int &b){
    int temp; temp=a;a=b;b=temp;
}
void insertionsort(int *arr,int n){
     int  j, min,i;
     
     for (i=0;i<n-1;i++)
     {
        min =i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }if(min!=i)swap(arr[i],arr[min]);
     }
    /* for(i=0;i<n;i++) printf("%d ",arr[i]);
     printf("\n");
 }*/
/*inline int fast_scan()
{
    int n=0;
    int ch=getchar_unlocked();
    while( ch <48 )ch=getchar_unlocked();
	while( ch >47 ){
		n = (n<<3)+(n<<1) + ch-48;ch=getchar_unlocked();
		}
	return n;
}
/*int fact(int i){
   int fact=1;
   while(i >1)fact*=i--;
   return fact;
}*/
int main(){
     int n,i,j,k,flag,flag2,x;
     int fact[]={1,1,2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600 };
     //n=fast_scan();
     scanf("%d",&n);
     int arr[11];
     while(n--){
         
          for(j=0;j<11;j++)scanf("%d",&arr[j]);// arr[j]=fast_scan();
          qsort(arr,11,sizeof(int),func);
          //insertionsort(arr,11);
          // i=fast_scan();
          scanf("%d",&i);
          flag=0; flag2=1;
          for(j=10;i>0 && j>=0;i--) {
             if(arr[j]==arr[--j])
                 flag++;
             else flag=0;
          }if(flag>0){
          x=fact[flag];
         // printf("%d\n",j);
          k=flag;
             //printf("%d %d %d\n",arr[j],arr[j+1],arr[j+2]);
             while(arr[j]==arr[--j]) flag++;
            // printf("%d %d\n",flag,k);
            ++flag;
              while(k-- >0)flag2*=flag--;
            printf("\n%d",flag2/x); 
          }else printf("\n1");
          
     }printf("\n");return 0;
}

