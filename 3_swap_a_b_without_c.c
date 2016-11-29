/** program #3:swap 'a' & 'b' without 'c'
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a-=b;
    b+=a;
    a=b-a;
    printf("%d %d\n",a,b);
    return 0;
}
