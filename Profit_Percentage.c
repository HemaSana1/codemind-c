#include<stdio.h>
int main()
{
   int x, y;
  float p;
  scanf("%d%d",&x,&y);
  p=(y-x);
  printf("%.2f",p*100/x);
}