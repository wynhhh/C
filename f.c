#include<stdio.h>
int main()
{   int i=0,a[6]={0},flag=1;
    char str[10000];
    fgets(str,sizeof(str),stdin);
    while(str[i++]!='\0')
    { switch(str[i])
      { case 'P':
          a[0]++;
          break;
        case 'A':
         a[1]++;
         break;
        case 'T':
         a[2]++;
         break;
        case 'e':
         a[3]++;
         break;
        case 's':
         a[4]++;
         break;
        case 't':
         a[5]++;
         break;
      }
    }
    while(flag)
    {
       if (a[0] != 0)
        {
            printf("P");
            a[0]--;
        }
        if (a[1] != 0)
        {
            printf("A");
            a[1]--;
        }
        if (a[2] != 0)
        {
            printf("T");
            a[2]--;
        }
        if (a[3] != 0)
        {
            printf("e");
            a[3]--;
        }
        if (a[4] != 0)
        {
            printf("s");
            a[4]--;
        }
        if (a[5] != 0)
        {
            printf("t");
            a[5]--;
        }
        for (i = 0; i < 6; i++)
        {
            if (a[i] != 0)
                flag = 1;
        }
    }

    return 0;
}
