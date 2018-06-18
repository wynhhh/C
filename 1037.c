#include<stdio.h>
int main()
{
    long G,G1,G2;
    int S,K,S1,K1,S2,K2;
    int sub,flag=0;
    scanf("%ld.%d.%d %ld.%d.%d",&G,&S,&K,&G1,&S1,&K1);
    K=(G*17+S)*29+K;
    K1=(G1*17+S1)*29+K1;
    sub=K1-K;
    if(sub<0)
    {
         flag=1;
         sub=K-K1;
    }
    G2=sub/29/17;
    S2=(sub/29)%17;
    K2=sub%29;
    if(flag)
        printf("-%ld.%d.%d",G2,S2,K2);
    else
        printf("%ld.%d.%d",G2,S2,K2);
    return 0;
}
