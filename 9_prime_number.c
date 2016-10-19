/** program #9:Prime number
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;    //до какого числа искать
    int j;    //для упрощения алгоритма проходим от i*i до n с шагом +i
    int i;    //перебор всех чисел
    bool arr[10000];


    for(i=1; i<=n; i++)  //заполняем массив
    {
        arr[i] = true;
    }
    scanf("%d",&n);
    for(i=2; i<=n; i++)    //перебираем все числа до n
    {
        if (arr[i] == true) //находим первое незануленное число
        {
            j = i*i;
            while(j <= n)  //проходим от i*i до n с шагом +i
            {
                arr[j] = false; //"зануляем" не простые числа
                j += i;
            }
        }
    }

    for(i=2; i<=n; i++)  //вывод оставшихся простых чисел
       {
        if (arr[i] == true) printf("%d\n",i);
       }
    return 0;
}
