#include<stdio.h>
int main()
{
 int m=0,n=0,a,b,c=1,d=1,P_A=0,P_B=0;
 int sum=0,i;
 char A[20],B[20];
 char D_A,D_B;
 scanf("%s %c %s %c",A,&D_A,B,&D_B);
 for(i=0;i<20;i++)
{
    if(D_A==A[i])
        m++;
    if(D_B==B[i])
        n++;
}
a=(int)D_A-48;
b=(int)D_B-48;
if(m!=0)
{
    for(i=1;i<m;i++)
  {
    c*=10;
  }
    while(c!=0)
  {
    P_A+=c*a;
    c/=10;
  }
}
else P_A=0;
if(n!=0)
{
    for(i=1;i<n;i++)
  {
     d*=10;
  }

    while(d!=0)
  {
    P_B+=d*b;
    d/=10;
  }
}
else P_B=0;
sum=P_A+P_B;
printf("%d",sum);
return 0;
}
