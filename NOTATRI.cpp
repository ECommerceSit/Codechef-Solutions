#include<cstdio>
#include<cstdlib>
#include<algorithm>
int con(const void *a, const void*b)
{
    return ( *(int*)a - *(int*)b );
}
/*inline int scan(){
   int n=0;char ch;
   
   ch=getchar_unlocked();
   
   //while(ch<47);
   while(ch>47){
    n=(n<<3)+(n<<1)+ch-48;
    ch=getchar_unlocked();
    //printf("I came heren\n");
   }return n;
}*/
int main(){
   int arr[2000];
    int i,j,k,l,n,t;
   
    while(1){
   // printf("%d\n",n);
    scanf("%d",&n);
    if(n<3|| n>2000) return 0;
       arr[2000]={0};
       l=0;
       for(i=0;i<n;i++) scanf("%d",&arr[i]);
       qsort(arr,n,4,con);
       for(i=0;i<n-2;i++){
       for(t=i+1;t<n-1;t++){
          j=arr[i]+arr[t];
          
           k=t+1;
           while(k<n){if(arr[k]>j)break;k++;}
          
           l=l+n-k;
         // printf("%d %d %d %d %d\n",arr[i],arr[t],t,k,l);
          }
       }
       printf("\n%d",l);
    }
    printf("\n");
   return 0;    
}
