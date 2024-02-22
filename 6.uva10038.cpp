
/*#include<stdio.h>
#include<math.h>
int main()
{
int number[3000],i,n,d;
scanf("%d", &n);
for(i=0; i<=n; i++)
scanf("%d", &number[i]);
for(i=0; i<=n; i++){

 d=(abs(i-(i+1)));
}
for(i=0; i<=n; i++){
if(d--)
    count++
}
    printf("Jolly");
else
    printf("Not jolly");
return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,temp,count=0;
    while(scanf("%d",&t)==1)
    {
        int a[t],b[t-1];
        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0,j=1; i<t,j<t; i++,j++)
        {
            if(a[i]>a[j])
                b[i]=a[i]-a[j];
            else
                b[i]=a[j]-a[i];
        }
        for(i=0; i<t-1; i++)
        {
            for(j=i+1; j<t-1; j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0; i<t-1; i++)
        {
            if(b[i] != (i+1))
                count++;
        }
        if(count==0)
            printf("Jolly\n");
        else
        {
            printf("Not jolly\n");
            count=0;
        }
    }
    return 0;
}
*/




#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,temp,count=0;
    while(scanf("%d",&t)==1)
    {
        int a[t],b[t-1];
        for(i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<t; i++;)
        {
            if(a[i]>a[i+1])
                b[i]=a[i]-a[i+1];
            else
                b[i]=a[i+1]-a[i];
        }

        }
        for(i=0; i<t-1; i++)
        if(b[i]--){
            count++;
        }
        if(count==0)
            printf("Jolly\n");
        else
        {
            printf("Not jolly\n");

        }
    }
    return 0;
}
/A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between
successive elements take on all the values 1 through n − 1. For instance,
1 4 2 3
is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively


Each line of input contains an integer n ≤ 3000 followed by n integers representing the sequence.



Sample Input
4 1 4 2 3
5 1 4 2 -1 6
Sample Output
Jolly
Not jolly
*/
