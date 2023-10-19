#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>

//using namespace std;

//функция для подсчета длины числа
int lenght(int number) {
    int len = 0;
    while (number != 0) {
        number = number / 10;
        len++;
    }
    return len;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);

    //Название Вид собственности Площадь земли (га) Кол.работников
    char title1[20], title2[20], title3[20];
    char type1[2], type2[2], type3[2];
    int square1, square2, square3;
    int cnt1, cnt2, cnt3;

    //Ввод данных
    printf("Введите название1    Вид собственности1    Площадь земли1    Кол. работников1    \n");
    scanf_s("%s %s %d %d", title1, sizeof(title1), type1, sizeof(type1), &square1, &cnt1);
    printf("Введите название2    Вид собственности2    Площадь земли2    Кол. работников2    \n");
    scanf_s("%s %s %d %d", title2, sizeof(title2), type2, sizeof(type2), &square2, &cnt2);
    printf("Введите название3    Вид собственности3    Площадь земли3    Кол. работников3    \n");
    scanf_s("%s %s %d %d", title3, sizeof(title3), type3, sizeof(type3), &square3, &cnt3);

    //Вывод таблицы
    int wigth = 95;
    printf("+");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("+\n");
    printf("|Сельскохозяйственные предприятия                                                             |");
    printf("\n");
    printf("|");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("|\n");
    printf("|Название      |Вид собственности           |Площадь земли (га)         |Кол. работников      |");
    printf("\n");
    printf("|");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("|\n");

    //строка 1
    printf("|%s", title1);
    for (int i = 0; i < 14 - strlen(title1); i++)
        printf(" ");
    printf("|%s", type1);
    for (int i = 0; i < 28 - strlen(type1); i++)
        printf(" ");
    printf("|%d", square1);
    int lenght_square1 = lenght(square1);
    for (int i = 0; i < 27 - lenght_square1; i++)
        printf(" ");
    printf("|%d", cnt1);
    int lenght_cnt1 = lenght(cnt1);
    for (int i = 0; i < 21 - lenght_cnt1; i++)
        printf(" ");
    printf("|\n");
    printf("|");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("|\n");


    //строка 2
    printf("|%s", title2);
    for (int i = 0; i < 14 - strlen(title2); i++)
        printf(" ");
    printf("|%s", type2);
    for (int i = 0; i < 28 - strlen(type2); i++)
        printf(" ");
    printf("|%d", square2);
    int lenght_square2 = lenght(square2);
    for (int i = 0; i < 27 - lenght_square2; i++)
        printf(" ");
    printf("|%d", cnt2);
    int lenght_cnt2 = lenght(cnt2);
    for (int i = 0; i < 21 - lenght_cnt2; i++)
        printf(" ");
    printf("|\n");
    printf("|");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("|\n");

    //строка 3
    printf("|%s", title3);
    for (int i = 0; i < 14 - strlen(title3); i++)
        printf(" ");
    printf("|%s", type3);
    for (int i = 0; i < 28 - strlen(type3); i++)
        printf(" ");
    printf("|%d", square3);
    int lenght_square3 = lenght(square3);
    for (int i = 0; i < 27 - lenght_square3; i++)
        printf(" ");
    printf("|%d", cnt3);
    int lenght_cnt3 = lenght(cnt3);
    for (int i = 0; i < 21 - lenght_cnt3; i++)
        printf(" ");
    printf("|\n");
    printf("|");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("|");

    //примечание
    printf("\n");
    printf("|Вид собсвенности: Д - государственная, Ч - частная, К - кооперативная                        |");
    printf("\n");
    printf("+");
    for (int i = 0; i < wigth - 2; i++)
        printf("-");
    printf("+\n");

    return 0;
}