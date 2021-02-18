#include <stdio.h>
main() {
        int a,b,c;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("a=%d; b=%d\n", a, b);
        c = a;
        a = b;
        b = c;
        print("a=%d; b=%d\n", a, b);
}
