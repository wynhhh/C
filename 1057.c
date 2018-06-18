#include<stdio.h>
int main()
{
    int N=0,a=0,b=0,i;
    char c;
    do
    {
        scanf("%c",&c);
        if(c>='a'&&c<='z')
            N+=(int)c-96;
        if(c>='A'&&c<='Z')
            N+=(int)c-64;
    }while(c!='\n');
    while(N!=0)
    {
        i=N%2;
        N=N/2;
        if(i==0) a++;
        if(i==1) b++;
    }
    printf("%d %d",a,b);
    return 0;
}
