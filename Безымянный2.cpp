#include <stdio.h>
#include <math.h>
 
main() {
        int n,y;
        float p,m,s;
        printf("����� ������� (���.): ");
        scanf("%d", &n);
        printf("������ (���������� ���): ");
        scanf("%d", &y);
        printf("�������: ");
        scanf("%f", &p);
 
        p = p / 100;
        m = (n * p * pow((1+p),y)) / (12 * (pow(1+p,y) - 1));
        s = m * 12 * y;
        printf("����������� �������: %.0f ���.\n����� ����� ���������: %.0f ���.\n", m, s);
}
