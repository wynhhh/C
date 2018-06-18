#include <stdio.h>
int main()
{
   int i,N,num[10],sum=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {   scanf(" %d",&num[i]);
       sum+=num[i]*11*(N-1);
   }
   printf("%d",sum);
    return 0;
}
