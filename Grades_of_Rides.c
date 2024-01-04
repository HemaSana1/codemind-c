#include<stdio.h>
int main()
{
    int h,s,x;
    scanf("%d%d%d",&h,&s,&x);
    if(h>50&&s>60&&x>100)
    {
        printf("10");
    }
    else if(h>50&&s>60)
     {
        printf("9");
    }
    else if(s>60&&x>100)
     {
        printf("8");
    }
    else if(h>50&&x>100)
     {
        printf("7");
    }
    else if(h>50||s>60||x>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
}
}
