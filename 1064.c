#include<stdio.h>
int main()
{
    int N,m=0,i,j,temp;
    scanf("%d",&N);
    int a[N],b[40]={0};
    int a1,a2,a3,a4;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        a1=a[i]/1000;
        a2=(a[i]-a1*1000)/100;
        a3=(a[i]-a1*1000-a2*100)/10;
        a4=a[i]-a1*1000-a2*100-a3*10;
        b[a1+a2+a3+a4]++;
    }
    for(i=0,j=0;i<40;i++)
    {
        if(b[i]!=0)
        {
            m++;
            a[j++]=i;
        }
    }
    printf("%d\n",m);
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
