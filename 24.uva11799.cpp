
#include<stdio.h>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
   for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int maximum=0,speed;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&speed);
            if(speed>maximum)
                {
                    maximum=speed;
                }
        }
        printf("Case %d: %d\n",i,maximum);
    }
    return 0;
}
