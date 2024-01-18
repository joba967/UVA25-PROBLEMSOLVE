#include<stdio.h>
#include<math.h>
int main()
{

    int num;
    double f,k;
    while(scanf("%d %lf",&num,&f)==2)
    {
        k=pow(f,(1.0/num));
        printf("%.0lf\n",k);
    }
    return 0;
}
