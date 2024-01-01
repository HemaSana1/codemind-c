#include<stdio.h>
int main()
{
    int X,Y;
    float loss;
    scanf("%d%d",&X,&Y);
    loss=X-Y;
    printf("%.2f",(loss)*100/X);
}