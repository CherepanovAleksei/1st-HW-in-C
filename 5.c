/** program #5:array m+n>>n+m
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i; //счетчик
	int j;

	int m; //длина первого отрезка
	int n; //длина второго отрезка
	scanf("%d%d",&m,&n); //задаем длину первого и второг отрезка

	int array[1000]; // Выделение памяти для массива

	for (i = 1; i <= m+n; i++) scanf("%d", &array[i]); //считываем-заполняем массив
	for ( j = 1; j <= n; j++)
	{
		for (i = m+j; i >= 1+j; i--)
		{
			array[i] += array[i - 1]; //прибавляем предыдущий эл
			array[i - 1] = array[ i ] - array[i - 1];  //присваиваем разницу
			array[i] -= array[i - 1]; //вычитаем
		}
	}
	for ( i = 1; i <= m + n; i++)
    {
        printf("%d ", array[i]); //выводим
    }
	printf("\n");
	system("pause");
	return 0;
}
