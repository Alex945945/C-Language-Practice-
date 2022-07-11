#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d", a + b);
    printf(" %d", a - b);
    printf(" %d", a * b);
    if (b == 0) {
        printf(" n/a\n");
    } else {
        printf(" %d", a / b);
    }
    printf("\n");
    return 0;
}