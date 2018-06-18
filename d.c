#include<stdio.h>
int main()
{
 int N,i,j,num[100][4],a=0,b=0;/*N是比划的局数，a是甲喝的酒数,b是乙喝的酒数*/
 scanf("%d",&N);
 for(i=0;i<N;i++)
   {
    for(j=0;j<4;j++)
     {
         scanf("%d",&num[i][j]);/*每行四个数分别代表甲喊，甲划，乙喊，乙划;*/
     }
     if((num[i][0]+num[i][2])==num[i][1]&&(num[i][0]+num[i][2])!=num[i][3])
     {
         b++;/*若甲喊+乙喊=甲划且不等于乙划，则甲赢乙喝酒b+1*/
     }
     if((num[i][0]+num[i][2])==num[i][3]&&(num[i][0]+num[i][2])!=num[i][1])
     {
         a++;/*若甲喊+乙喊=乙划且不等于甲划，则乙赢甲喝酒a+1*/
     }
   }
   printf("%d %d",a,b);
  return 0;
}
