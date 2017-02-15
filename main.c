#include <stdio.h>

float calc(float result, int days);

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

float calc(float result, int days) {
    float one, two, thr;
    
    if(days > 0 && days < 30) {
        result = result * 0.9;
        return result;
    }
    if(result < 100) {
        one = 1.02;
        two = 1.06;
        thr = 1.12;
    } else if(result >= 100) {
        one = 1.03;
        two = 1.08;
        thr = 1.15;
    } else return 0;
    
    if(days > 30 && days <= 120) {
        result = result * one;
    } else if(days > 120 && days <= 240) {
        result = result * two;
    } else if(days > 240 && days <= 365) {
        result = result * thr;
    } else return 0;
    return result;
}
