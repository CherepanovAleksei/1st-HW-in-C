/** program #4:search of partial quotient
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a; //делимое
	int b; //делитель
	int partial_quotient = 0; //неполное частное
	scanf("%d %d", &a, &b);
	while (a>=b)
	{
		a -= b;
		partial_quotient++;
	}
	printf("%d\n",partial_quotient);
	return 0;
}
