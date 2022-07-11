#include <stdio.h>
int max(int a, int b);
int main(void) {
    int a, b;
    if (scanf("%d%d", &a, &b) != 2) {
        printf("n/a\n");
    }
    int z = max(a, b);
    printf("Max=%d\n", z);
}

int max(int a, int b) {
    int m = a;
    if (b > a) {
        a = b;
    }
}