#include<stdio.h>
int main()
{   char a,b;
    int N,i,j;
    scanf("%d",&N);
    int n[N];
    for(i=0;i<N;i++)
    { for(j=0;j<4;j++)
       {
           scanf(" %c-%c",&a,&b);
           if(b=='T')
           {
               n[i]=(int)a-64;
           }
       }
    }
    for(i=0;i<N;i++)
    {
        printf("%d",n[i]);
    }
    return 0;
}
