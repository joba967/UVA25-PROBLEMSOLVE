

#include<stdio.h>
int main()
{
    int t,n,i,j,total,num1,num2,num3;  //num1= size of the farmyard in square meters
                                       //num2= number of animals
                                       //num3= environment-friendliness
    
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        total=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d %d %d",&num1,&num2,&num3); //((num1/num2)*num3)*num2
            total=total+(num1*num3);
        }
        printf("%d\n",total);
    }
    return 0;
}
