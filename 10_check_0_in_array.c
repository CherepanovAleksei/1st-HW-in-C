#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,k=0; // размер массива
    printf("Enter integer value: ");
    scanf("%d",&num); // получение от пользовател¤ размера массива
    int mas[1000]; // ¬ыделение пам¤ти дл¤ массива


    for (i = 0; i < num; i++) {
            printf("[%d]: ", i + 1);
            scanf("%d",&mas[i]);
            if(mas[i] == 0) k++;
        }
printf("%d\n",k);
system("pause");


    return 0;
}
