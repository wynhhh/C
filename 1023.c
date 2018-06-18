#include<stdio.h>
#include<string.h>
int main()
{
 int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
 a0=a1=a2=a3=a4=a5=a6=a7=a8=a9=0;
 int i;
 char c;
 do
{
    scanf("%c",&c);
    switch(c)
    {
     case '0':
        a0++;
        break;
     case '1':
        a1++;
        break;
     case '2':
        a2++;
        break;
     case '3':
        a3++;
        break;
     case '4':
        a4++;
        break;
     case '5':
        a5++;
        break;
     case '6':
        a6++;
        break;
     case '7':
        a7++;
        break;
     case '8':
        a8++;
        break;
     case '9':
        a9++;
        break;
    }
}while(c!='\n');
if(a1!=0)
{printf("1");a1--;}
if(a0!=0)
{
    for(i=0;i<a0;i++)
    {printf("0");}
}
if(a1!=0)
{
    for(i=0;i<a1;i++)
    {printf("1");}
}
if(a2!=0)
{
    for(i=0;i<a2;i++)
    {printf("2");}
}
if(a3!=0)
{
    for(i=0;i<a3;i++)
    {printf("3");}
}
if(a4!=0)
{
    for(i=0;i<a4;i++)
    {printf("4");}
}
if(a5!=0)
{
    for(i=0;i<a5;i++)
    {printf("5");}
}
if(a6!=0)
{
    for(i=0;i<a6;i++)
    {printf("6");}
}
if(a7!=0)
{
    for(i=0;i<a7;i++)
    {printf("7");}
}
if(a8!=0)
{
    for(i=0;i<a8;i++)
    {printf("8");}
}
if(a9!=0)
{
    for(i=0;i<a9;i++)
    {printf("9");}
}
return 0;
}
