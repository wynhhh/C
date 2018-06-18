#include<stdio.h>
int main()
{
    int N,a,b,c;
    int i,max=0,flag;
    scanf("%d",&N);
    int score[1005]={0};
    for(i=0;i<N;i++)
    {
        scanf("%d-%d%d",&a,&b,&c);
        score[a]+=c;
        if(max<=score[a])
         {
             max=score[a];
             flag=a;
         }
    }
    printf("%d %d",flag,max);
    return 0;
}
