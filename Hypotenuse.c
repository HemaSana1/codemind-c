#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    float hyp;
    scanf("%lf%lf",&a,&b);
    hyp=sqrt(a*a+ b*b);
    printf("%.2f",hyp);
}