
#include<stdio.h>
int main()
{
    long long int num1,num2,count,carr;
    while(scanf("%llu%llu",&num1,&num2)==2)
    {
       if(num1==0 && num2==0)
         break;
       carr=0;
       count=0;
       while(num1||num2)
       {
          carr=((num1%10)+(num2%10)+carr)/10;
          num1=num1/10;
          num2=num2/10;
          count=count+carr;
       }
       if(count==0)
        printf("No carry operation.\n");
       else if(count==1)
        printf("1 carry operation.\n");
       else
        printf("%llu carry operations.\n",count);
    }
    return 0;
}


