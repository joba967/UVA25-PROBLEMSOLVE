
#include<stdio.h>
int main()

{
    int t,a,b,c,i,sum;
    scanf("%d" ,&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        sum=0;
        for( c=a; c<=b; c++)
        {
          if(c%2!=0)
     {
         sum=sum+c;
     }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
