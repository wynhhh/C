#include<stdio.h>
int main()
{
    int N,M,num[110][110],i,j,sum=0;/*N��ѧ��������M��ѡ����ĸ���,sum��ÿ���˵�ѡ����ĵ÷�*/
    scanf("%d%d",&N,&M);
    for(i=0;i<N+2;i++)/*��һ������ÿ��ѡ������ܷ֣�������5�����������ڶ�������ÿ��ѡ�������ȷ�𰸣���0��1��ʾ*/
    {
        for(j=0;j<M;j++)/*ʣ�༸����N��ѧ���Ľ��*/
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
