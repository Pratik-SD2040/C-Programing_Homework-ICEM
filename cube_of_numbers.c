#include <stdio.h>
#include<conio.h>

int main() {
    float i,n,cube=1;
    printf("Enter the number which you wanna get the cube of :");
    scanf("%f",&n);

    for (i=1;i<=n;i++) {
        cube=cube*n;
    }
    printf("cube of %.2f is %.2f",n,cube);

    getch();
    return 0;
}