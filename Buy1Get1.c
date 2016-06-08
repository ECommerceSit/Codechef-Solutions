#include<stdio.h>
    #include<string.h>
     //#include<conio.h>
    int main()
    {
    int num[55],t,i,total,len;
    char str[205];
     
    scanf("%d",&t);
     
    while(t--)
    {
    scanf("%s",str);
    len = strlen(str);
    total = 0;
    for(i=0; i<52; i++)
    num[i]=0;
     
    for(i=0; i<len; i++)
    {
    if(str[i] >= 'a' && str[i] <= 'z')
      num[str[i]-'a']++;
    else
    num[str[i]-'A'+26]++;
    }
     for(i=0; i<52; i++)
    {
    total=total+num[i]/2;
    if(num[i]%2 == 1)
    total = total+1;
    }
     printf("%d\n",total);
    }
    //getch();
     return 0;
    } 
