#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    int A, B, C;

    printf("A:");
    scanf_s("%d", &A);

    printf("B:");
    scanf_s("%d", &B);

    printf("C:");
    scanf_s("%d", &C);

    printf("%d\n", (A / C) * (B / C));

    return 0; //Возврат целочисленного значения перед завершением функции
}