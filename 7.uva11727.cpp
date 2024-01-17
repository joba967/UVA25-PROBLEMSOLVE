
#include<stdio.h>
int main()
{
int t, a,b,c,k;
scanf("%d", &t);
for(k=1; k<=t; k++){
    scanf("%d %d %d", &a,&b,&c);
    if((a<b && a>c)|| (c>a && a>b))
         printf("Case %d: %d\n", k,a);
     else if((b>a)&&(b<c)||(b<a)&&(b>c))
            printf("Case %d: %d\n",k,b);

   else if((a>b && b>c)||(c>b && b>a))
        printf("Case %d: %d\n", k,c);
}
return 0;


}


