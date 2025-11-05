#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void main() {

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    int rand_num, count = 0;

    srand(time(NULL));

    for(;;) {
        rand_num = 1+ rand() % 1000000;
        SetConsoleTextAttribute(h, 2);
        printf("%3d ", rand_num);

        count++;
    }

}
