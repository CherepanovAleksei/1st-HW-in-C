/** program #10:check '0' elements in array
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mas[1000];
    int i;   //счётчик
    int num; //размер массива
    int kol=0; //количество нулевых элементов
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        printf("[%d]: ", i + 1);   //ввод
        scanf("%d",&mas[i]); 	   //
        if(mas[i] == 0)        //проверка
	{
		kol++;
	}
    }
printf("%d\n",kol);
system("pause");
    return 0;
}
