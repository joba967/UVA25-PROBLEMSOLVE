
#include<stdio.h>
int main()
{
    long long int n=1,t,num1,num2;
    scanf("%lld",&t);

    while(n<=t)
    {
        scanf("%lld %lld",&num1, &num2);
        if(num1>num2)
            {
        printf(">\n");
        }

       else  if (num1<num2)
        {
        printf("<\n");
        }
         else
             printf("=\n");


      n++;
    }
return 0;
}
