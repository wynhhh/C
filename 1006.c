#include<stdio.h>
int main()
{
 int N,a,b,c,i,j=1;
 scanf("%d",&N);
 a=N/100;
 b=(N/10)%10;
 c=N%10;
 for(i=1;i<=a;i++)
{
    printf("B");
}
for(i=1;i<=b;i++)
{
    printf("S");
}
for(i=1;i<=c;i++)
{
    printf("%d",j++);
}
return 0;
}
