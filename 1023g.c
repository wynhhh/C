#include<stdio.h>
int main()
{
 int A[10];
 int i;
 for(i=0;i<10;i++)
 {
     scanf("%d",&A[i]);
 }
i=1;
while(A[i]==0)
{
    i++;
}
printf("%d",i);
A[i]--;
for(i=0;i<10;i++)
{
    while(A[i]!=0)
    {
      printf("%d",i);
       A[i]--;
    }
}
return 0;
}
