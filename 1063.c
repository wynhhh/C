#include<stdio.h>
#include<math.h>
int main()
{
    int N,a,b,i;
    scanf("%d",&N);
    int A[N],B[N];
    float C[N],max=0.0;
    for(i=0;i<N;i++)
    {
        scanf("%d%d",&A[i],&B[i]);
        C[i]=sqrt(A[i]*A[i]+B[i]*B[i]);
    }
    for(i=0;i<N;i++)
    {
        if(C[i]>=max)
            max=C[i];
    }
    printf("%.2f",max);
    return 0;
}
