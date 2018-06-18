#include <stdio.h>
#include <stdlib.h>
int main()
{  int c,sum=0,temp=1,count=0;
   char* pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
   while((c=getchar())!='\n')
   {
       sum+=(c-'0');
   }
   if(sum==0)
    { printf("ling");
      return 0;
    }
   while(temp<=sum)
   {
      temp=temp*10;
      count++;
   }
   temp/=10;
   while(count>0)
   {
      printf("%s",pinyin[sum/temp]);
      sum=sum-(sum/temp)*temp;
      temp/=10;
      count--;
      if(count>0)
      {
          printf(" ");
      }
   }
    return 0;
}
