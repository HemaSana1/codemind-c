#include<stdio.h>
int main()
{
    float da,hra,bs,gs;
    scanf("%f",&bs);
    if(bs<=10000)
    {
        da=bs*0.80;
        hra=bs*0.20;
        gs=bs+da+hra;
    }
    else if(bs<=20000)
    {
        da=bs*0.90;
        hra=bs*0.25;
        gs=bs+da+hra;
    }
    else
    {
        da=bs*0.95;
        hra=bs*0.30;
        gs=bs+da+hra;
    }
    printf("%.2f",gs);
}
