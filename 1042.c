#include<stdio.h>
int main()
{
    int i,max;
    char c;
    int str[26]={0};
    do
    {
        scanf("%c",&c);
        if(c>='a'&&c<='z')
            str[c-'a']++;
        if(c>='A'&&c<='Z')
            str[c-'A']++;
    }while(c!='\n');
    max=0;
    for(i=25;i>=0;i--)
    {
        if(str[i]>=max)
           {
               max=str[i];
               c='a'+i;
           }
    }
    printf("%c %d\n",c,max);
    return 0;
}
