#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
main()
{   std:ios_base::sync_with_stdio(false);
    int i,n,j,k,cnt=0;
    cin>>n;
    while(n)
    {   cnt=0;
    	int a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	
    	sort(a,a+n);
    	
    	for(i=n-1;i>1;i--)
    	{
    		j=0; k=i-1;
    		while(j<k)
    		{
    			if(a[j]+a[k]<a[i])
    			{
    				cnt+=k-j;
    				j++;
    			}
    			else
    			k--;
    		}
    	}
    	printf("%d\n",cnt);
    	cin>>n;
    }
	return 0;
}
 

