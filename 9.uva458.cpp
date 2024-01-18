
#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int j, len;
   while(gets(str))
  {
      len=strlen(str);

    for(j=0; j<len; j++){

    printf("%c",(str[j])-7);

    }
    printf("\n");
  }
    return 0;
}






