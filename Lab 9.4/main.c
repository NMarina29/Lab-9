#include <stdio.h> //������������ ����/����� �� �����
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    int A, B, C;

    printf("A:");
    scanf_s("%d", &A);

    printf("B:");
    scanf_s("%d", &B);

    printf("C:");
    scanf_s("%d", &C);

    printf("%d\n", (A / C) * (B / C));

    return 0; //������� �������������� �������� ����� ����������� �������
}