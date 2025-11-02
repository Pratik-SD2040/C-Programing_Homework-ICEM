#include <stdio.h>

int main() {

    int year;
    
    //taking values
    printf("Enter an year :");
    scanf("%d",&year);
    
    //logic
    if(year%4==0){
        printf("%d is a leap year",year);
    }else{
        printf("%d is not a leap year");
    }

return 0;
}