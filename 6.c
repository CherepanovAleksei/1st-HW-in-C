/** program #6:number of lucky tickets (000000..999999)
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; //число счастливых билетов
    int s;   //счетчик для перебора всех билетов
    int copys;//копия переменной "s" для вычислений-номер билета
    int ost; //одна цифра числа билета
    int a,b; //сумма правой половины(a) и левой(b)
    int j;   //счетчик

    num = 0;
    for (s = 0; s <= 999999; s++)
    {

        copys = s;
        a = 0;
        b = 0;
        for (j = 1; j <= 3; j++) //считаем сумму правых трех цифр билета в "а"
        {
            ost = copys % 10;
            copys = copys / 10;
            a = a + ost;
        };
        for ( j = 1; j <= 3; j++) //считаем сумму левых трех цифр билета в "b"
        {
            ost = copys % 10;
            copys = copys / 10;
            b = b + ost;

        };

        if (a == b)                //если сумма цифр правой и левой части совпадают, увеличиваем счетчик +1
        {
            num++;
        }
    }
    printf("%d\n", num);
    system("pause");
    return 0;
}