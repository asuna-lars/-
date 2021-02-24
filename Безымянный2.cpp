#include <stdio.h>
#include <math.h>
 
main() {
        int n,y;
        float p,m,s;
        printf("Сумма кредита (руб.): ");
        scanf("%d", &n);
        printf("Период (количество лет): ");
        scanf("%d", &y);
        printf("Процент: ");
        scanf("%f", &p);
 
        p = p / 100;
        m = (n * p * pow((1+p),y)) / (12 * (pow(1+p,y) - 1));
        s = m * 12 * y;
        printf("Ежемесячные выплаты: %.0f руб.\nВсего будет выплачено: %.0f руб.\n", m, s);
}
