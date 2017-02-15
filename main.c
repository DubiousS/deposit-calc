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
    printf("Срок вклада(д.):\n");
    if(scanf("%d", &days) != 1 || days > 365) {
        printf("Срок вклада введён некорректно.\n");
        return 1;
    }
    
    

    return 0;
}

float function() {

    return result;
}
