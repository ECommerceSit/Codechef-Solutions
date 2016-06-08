#include<stdio.h>
inline int fast_scan()
{
    int n=0;
    int ch=getchar_unlocked();
    while( ch <48 )ch=getchar_unlocked();
	while( ch >47 )
		n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
	return n;
}
 
int main()
{
    unsigned short T = fast_scan();
    while(T--)
    {
        char hash[1010]={0};
        unsigned short M,N;
        unsigned short i = 0;
        N = fast_scan();
        M = fast_scan();
        while(M--)
        {
            unsigned short num = fast_scan();
            hash[num] = '0';
        }
        while(i<=N)
        {
            while(hash[++i]== '0' && i<=N);
            hash[i] = '1';
            while(hash[++i] == '0' && i<=N);
            hash[i] = '2';
        }
        putchar('\n');
        for(i=1;i<=N;i++) if(hash[i]=='1') printf("%d ",i);
        putchar('\n');
        for(i=1;i<=N;i++) if(hash[i]=='2') printf("%d ",i);
       // putchar('\n');
    }
    return 0;
}
