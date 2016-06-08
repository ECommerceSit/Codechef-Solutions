#include<cstdio>
#include<cstdlib>
int con(const void *a, const void*b)
{
    return ( *(int*)a - *(int*)b );
}
int main(){
  int arr[]={2,99,3,5,6,2,3,1,1,489};
  qsort(arr,10,4,con);
  for(int i=0;i<10;i++) printf("%d ",arr[i]);
  return 0;
}
