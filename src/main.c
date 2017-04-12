#include <stdio.h>
#include "../thirdparty/ctest.h"
#include "main.h"

int main() 
{
    unsigned int days = 0;
    float money = 0;
    
    printf("Сумма вклада(т.р.):\n");
    if(scanf("%f", &money) != 1 || money < 10) {
        printf("Сумма вклада введена некорректно.\n");
        return 1;
    }
    printf("Срок вклада(д.):\n");
    if((scanf("%d", &days)) != 1 || days > 365) {
        printf("Срок вклада введён некорректно.\n");
        return 1;
    }
    
    if((money = calc(money, days))) {
        printf("Вы получите %.2f т.р.\n", money);
    } else {
        printf("Произшла ошибка.\n");
    }
    return 0;
}
