#include <stdio.h>
long int arr[30][19];
long int byteGold(long int n, int i, int j)
{
if (n<12)
	return n;
if (!arr[i][j])
	arr[i][j] = byteGold(n/2,i+1,j)+byteGold(n/3,i,j+1)+byteGold(n/4,i+2,j);
return arr[i][j];
}
 
int main()
{
long int n;
int i,j;
 while(scanf("%ld",&n)!=EOF)
	{
	i=0;
	j=0;
	for (i=0;i<30;i++)
		for (j=0;j<19;j++)
			arr[i][j]=0;
	printf("%ld\n", byteGold(n,0,0));
	}
return 0;
}
 
