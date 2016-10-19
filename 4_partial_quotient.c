#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, partial_quotient = 0;
	scanf("%d %d", &a, &b);
	while (a>=b)
	{
		a -= b;
		partial_quotient++;
	}
	printf("%d\n",partial_quotient);
	system("pause");
	return 0;
}
