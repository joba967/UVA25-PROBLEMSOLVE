
#include<stdio.h>
#include<string.h>
int main()
{
    int i,start,count=0;
    char c[1001];
    while(gets(c))
    {
        for(i=0;c[i]!='\0';i++)
        {
            if((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z'))
            {
                start=1;
            }
            else
            {
                if(start==1)
                {
                    count++;
                    start=0;
                }
            }
        }
        printf("%d\n", count);
        count=0;
    }
    return 0;
}
