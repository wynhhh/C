#include<stdio.h>
int main()
{ char str[2][6]={{'P','A','T','e','s','t'},{'0','0','0','0','0','0'}};
  char ch;
  int i,flag=1;
  do
  {
       ch=getchar();
       for(i=0;i<6;i++)
       {
         if(ch==str[0][i])
          str[1][i]++;
       }
  }while(ch!='\n');
  while(flag)
  {   flag=0;
      for(i=0;i<6;i++)
       {
         if(str[1][i]!='0')
         {
          flag=1;
          putchar(str[0][i]);
          str[1][i]--;
         }
       }
  }
  return 0;
}
