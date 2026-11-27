// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   
int main() {
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
    {
        arr[i] = rand() % (30 - 10 + 1) + 10;
    }
    printf("Массив в прямом порядке: ");
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Массив в обратном порядке: ");
    for (int i = 9; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
//6.2 
int arr2[30];
int min, max;
for (int i = 0; i < 30; i++)
{
    arr2[i] = rand % 500 + 1;
}
min = arr2[0];
max = arr2[0];
printf("Массив: ");
for (int i = 0; i < 30; i++)
{
    printf("%d", arr2[i]);
    if (arr[i] < min) min = arr2[i];
    if (arr[i] > max) max = arr2[i]
}
printf("\n min:  \%d,max: \%d", min,max)




