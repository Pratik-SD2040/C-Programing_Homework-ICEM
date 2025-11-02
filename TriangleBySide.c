#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
        printf("Valid triangle\n");
    else
        printf("Invalid triangle\n");

    return 0;
}
