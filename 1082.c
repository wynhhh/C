#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct test
{
    char ID[10];
    int x;
    int y;
    float s;
}Test;
int main()
{
    int N,i;
    char idx[10],idn[10];
    float max=0.0,min=10000;
    scanf("%d",&N);
    Test A[N];
    for(i=0;i<N;i++)
    {
        scanf("%s%d%d",&A[i].ID,&A[i].x,&A[i].y);
        A[i].s=sqrt(A[i].x*A[i].x+A[i].y*A[i].y);
        if(A[i].s>=max)
        {
            max=A[i].s;
            strcpy(idx,A[i].ID);
        }
        if(A[i].s<=min)
        {
            min=A[i].s;
            strcpy(idn,A[i].ID);
        }
    }
    printf("%s %s",idn,idx);
    return 0;
}
