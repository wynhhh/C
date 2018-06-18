#include<stdio.h>
int main()
{
    int i,j,k=0;
    int max,min;
    int N,M;
    scanf("%d%d",&N,&M);
    int a[100][100],b[100]={0};
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        max=a[i][1],min=a[i][1];
        for(j=1;j<N;j++)
        {
                    b[i]+=a[i][j];
                    if(a[i][j]>max)
                    {
                        max=a[i][j];
                    }
                    if(a[i][j]<min)
                    {
                        min=a[i][j];
                    }
                    if((a[i][j]<0)||(a[i][j]>M))
                    {
                        b[i]-=a[i][j];
                        k++;
                    }
        }
        b[i]=b[i]-max-min;
        b[i]=b[i]*1.0/(N-1-k-2);
        b[i]=(int)((b[i]+a[i][0])/2.0+0.5);
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
