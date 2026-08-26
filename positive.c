#include <stdio.h>

int main() {
    float a;
    printf("enter he number:");
    scanf("%f", &a);

    if (a > 0) {
        printf("a is positive");
    } else {
        printf("a is negative");
    }

    return 0;
}