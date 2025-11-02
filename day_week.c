#include <stdio.h>

int main() {

    int day;
    char *arr[8]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    
    //taking values
    printf("Enter a day :");
    scanf("%d",&day);
    
    //logic
    --day;
    printf("It is %s",arr[day]);
    
return 0;

}