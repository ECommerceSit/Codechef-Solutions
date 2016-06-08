#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
       if(n&1) puts("BOB");
       else puts("ALICE");
    }return 0;
}

