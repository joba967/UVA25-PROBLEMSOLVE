#include<stdio.h>
int main()

{
    long long int hAshmat, opOnant;


    while( scanf("%lld%lld",&hAshmat, &opOnant)!=EOF)
    {
        if (hAshmat<opOnant)
            printf("%lld\n",opOnant-hAshmat);
        else
            printf("%lld\n",hAshmat-opOnant);
    }
    return 0;
}
