#include<stdio.h>
int a[11];
int msort(int,int);
int merge(int,int,int);
int comb(int,int);
int main()
{
    int t,s=1,d=1,i,j,k,l;
    long int fact[12]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800};
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        for(i=0;i<11;i++)
            scanf("%d",&a[i]);
        scanf("%d",&k);
        msort(0,10);
        s=d=1;
        if(k!=11)
        for(l=10-k;l>=0;l--)
        {
            if(a[11-k]==a[l])
                ++s;
            else
                break;
        }
        if(k!=1)
            for(l=12-k;l<=10;l++)
            {
                if(a[11-k]==a[l])
                {
                    ++s;
                    ++d;
                }
                else
                    break;
            }
        printf("%ld\n",fact[s]/(fact[s-d]*fact[d]));
    }
    return 0;
}
int msort(int lo,int hi)
{
    int m=(lo+hi)/2;
    if(lo<hi)
    {
             msort(lo,m);
             msort(m+1,hi);
             merge(lo,m,hi);
    }
    return 0;
}
int merge(int lo,int m,int hi)
{
        int i,j,k,b[10];
        for(i=lo;i<=hi;i++)
        b[i] = a[i];
        i=k=lo;
        j=m+1;
        while(i<=m && j<=hi)
        {
            if(b[i]<b[j])
            {
                a[k]=b[i];
                i++;
                k++;
            }
            else
            {
                a[k] = b[j];
                j++;
                k++;
            }
        }
        while(i<=m)
        {
            a[k]=b[i];
            k++;
            i++;
        }
        return 0;
}
