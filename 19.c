#include <stdio.h>
int main()
{
  int a,b,i,r,v,num;
  scanf("%d %d",&a,&b);
    for(i=a+1;i<b;++i)
  {
      v=i;
      num=0;
      while(v!=0)
      {
          r=(v%10);
          num+=r*r*r;
         v/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
