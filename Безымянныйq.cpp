#include <stdio.h>
 
int main() 
{
	//setlocale(LC_ALL, "rus"); 
    int n,a,b,c;
    scanf("%d", &n);
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    print("сумма: %d\n", a+b+c);
    print("произведение: %d\n", a*b*c);
}

