#include <stdio.h>
main() {
        int a,b,c;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("a=%d; b=%d\n", a, b);
        c = a;
        a = b;
        b = c;
        printf("a=%d; b=%d\n", a, b);
}
