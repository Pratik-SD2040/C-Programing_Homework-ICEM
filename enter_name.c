#include<stdio.h>

int main(){
    char name[6];
    int i;

    printf("Enter your name :");

    for(i=0;i<6;i++){
        scanf("%c",&name[i]);
    }
    printf("Your name is :");
    for(i=0;i<6;i++){
        printf("%c",name[i]);
    }

return 0;
}