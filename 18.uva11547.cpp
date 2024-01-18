

#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,result1, result2, result3, result4,i, result5, result6;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);

      result1= ((((((n*567)/9)+7492)*235)/47)- 498) ;

        result2 =result1/10;
  result3= result2%10 ;
        printf("%d\n",abs(result3));
    }
    return 0;
}
