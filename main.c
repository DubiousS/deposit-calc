#include <stdio.h>


int main() 
{
    int f = 0, days = 0;
    float money = 0;
    
    printf("Сумма вклада(т.р.):\n");
    if(scanf("%d", &money) != 1 || money < 10) {
        printf("Сумма вклада введена некорректно.\n");
        return 1;
    }
    printf("Срок вклада(т.р.):\n");
    if(scanf("%d", &days) != 1 || days > 365) {
        printf("Chjr вклада введён некорректно.\n");
        return 1;
    }
    
    

    return 0;
}
