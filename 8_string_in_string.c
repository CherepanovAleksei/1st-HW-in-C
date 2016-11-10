#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000];
    char s1[1000];
    scanf("%s",s);
    scanf("%s",s1);
int ii,i,j;
int k=0;
int flag=0;
//printf("%i\n",strlen(s1));
for(i=0;i<strlen(s);i++)
{
    ii = i;
    for(j=0;j<strlen(s1);j++)
    {
        if(s[ii] == s1[j])
        {
            ii++;

        }
        else
        {
            flag = -1;
        }
    }
    if(flag>=0)
    {
        k++;
    }
    flag=0;
}

printf("%i",k);

    return 0;
}
