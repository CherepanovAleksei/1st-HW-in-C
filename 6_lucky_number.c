/** program #6:number of lucky tickets (000000..999999)
 *
 *
 *  by Cherepanov Alexei (PI-171)
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; //����� ���������� �������
    int s;   //������� ��� �������� ���� �������
    int copys;//����� ���������� "s" ��� ����������-����� ������
    int ost; //���� ����� ����� ������
    int a,b; //����� ������ ��������(a) � �����(b)
    int j;   //�������

    num = 0;
    for (s = 0; s <= 999999; s++)
    {

        copys = s;
        a = 0;
        b = 0;
        for (j = 1; j <= 3; j++) //������� ����� ������ ���� ���� ������ � "�"
        {
            ost = copys % 10;
            copys = copys / 10;
            a = a + ost;
        };
        for ( j = 1; j <= 3; j++) //������� ����� ����� ���� ���� ������ � "b"
        {
            ost = copys % 10;
            copys = copys / 10;
            b = b + ost;

        };

        if (a == b)                //���� ����� ���� ������ � ����� ����� ���������, ����������� ������� +1
        {
            num++;
        }
    }
    printf("%d\n", num);
    system("pause");
    return 0;
}
