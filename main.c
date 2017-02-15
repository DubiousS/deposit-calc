#include <stdio.h>


int main() 
{
    int f = 0, money = 0, days = 0;

    printf("Сумма вклада(т.р.):\n");
    if(scanf("%d", &money) != 1 || money < 20) {
        printf("Сумма вклада введена некорректно.\т");
        return 1;
    }
    printf("Срок вклада(т.р.):\n");
    if(scanf("%d", &days) != 1 || days < 20) {
        printf("Сумма вклада введена некорректно.\т");
        return 1;
    }

    return 0;
}
