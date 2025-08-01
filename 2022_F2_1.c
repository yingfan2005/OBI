#include<stdio.h>
int main()
{
    int c;
    int d;
    int t;
    float res;
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&t);
    if((d-t*c)>=0)
    {
        res=(float)(d-t*c)/c*1.0;
    }
    else
    {
        res=0;
    }
    printf("%.1f\n",res);
    return 0;
}
