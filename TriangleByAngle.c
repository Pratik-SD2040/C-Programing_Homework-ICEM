#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three angles of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0)
        printf("Valid triangle\n");
    else
        printf("Invalid triangle\n");

    return 0;
}
