/** program #7:braces balance check
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	char str1[10000];   //обрабатываемая строка
	int i;              //счетчик
	int flag = 0;       //флаг проверки
	gets(str1);
	for (i = 0; i <= strlen(str1); i++)     //обрабатываем каждый символ
	{
		if (str1[i] == '(')
        	{
        	    flag++;
        	}

		if (str1[i] == ')')
        	{
        	    flag--;
        	}

		if (flag < 0)  //роверяем порядок
		{
			printf("no");
			goto label;  //breake+пропуск проверки флага
		}
	}
	if (flag == 0)    //проверяем баланс
	{
		printf("All right");
	}
  	else
	{
		printf("no");
	}
	label:
	printf("\n");
	system("pause");
	return 0;
}
