#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,n;
    scanf("%d",&N);
    int a[10002]={0};
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n);
        if(n>i)
            a[n-i]++;
        else
            a[i-n]++;
    }
    for(i=N;i>=0;i--)
    {
       if(a[i]>1)
       {
           printf("%d %d\n",i,a[i]);
       }
    }
    return 0;
}
