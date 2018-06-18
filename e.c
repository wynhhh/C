#include<stdio.h>
int main()
{
    int N,M,num[110][110],i,j,sum=0;/*N是学生人数，M是选择题的个数,sum是每个人的选择题的得分*/
    scanf("%d%d",&N,&M);
    for(i=0;i<N+2;i++)/*第一行输入每个选择题的总分，不超过5的正整数，第二行输入每个选择题的正确答案，用0和1表示*/
    {
        for(j=0;j<M;j++)/*剩余几行是N个学生的解答*/
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=2;i<N+2;i++)
    {    sum=0;
         for(j=0;j<M;j++)
         {
            if(num[i][j]==num[1][j])
            {
                sum+=num[0][j];
            }
         }
         printf("%d\n",sum);
    }
   return 0;
}
