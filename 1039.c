#include<stdio.h>
#include<string.h>
int main()
{
    char a[1005],b[1005],ch;/*a数组用来存放摊主的珠串，数组b用来存放小红想做的珠串*/
    int i,j,len1,len2,m=0,n=0;
    scanf("%s",a);
    ch=getchar();
    scanf("%s",b);
    len1=strlen(a);
    len2=strlen(b);
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(b[j]==a[i])
              {
                  b[j]=' ';
                  break;
              }
        }
        if(j<len2)
            a[i]=' ';
    }
    for(i=0;i<len2;i++)
    {
        if(b[i]!=' ')
           m++;
    }
    for(i=0;i<len1;i++)
    {
        if(a[i]!=' ')
           n++;
    }
    if(m==0)
        printf("Yes %d",n);
    if(m!=0)
        printf("No %d",m);
    return 0;
}
