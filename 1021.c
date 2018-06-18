#include<stdio.h>
#include<string.h>
int main()
{
 int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
 a0=a1=a2=a3=a4=a5=a6=a7=a8=a9=0;
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
if(a0!=0)
{printf("0:%d\n",a0);}
if(a1!=0)
{printf("1:%d\n",a1);}
if(a2!=0)
{printf("2:%d\n",a2);}
if(a3!=0)
{printf("3:%d\n",a3);}
if(a4!=0)
{printf("4:%d\n",a4);}
if(a5!=0)
{printf("5:%d\n",a5);}
if(a6!=0)
{printf("6:%d\n",a6);}
if(a7!=0)
{printf("7:%d\n",a7);}
if(a8!=0)
{printf("8:%d\n",a8);}
if(a9!=0)
{printf("9:%d",a9);}
return 0;
}
