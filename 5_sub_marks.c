#include<stdio.h>

int main(){
    float subject[5],total;
    int i;

    for(i=0;i<5;i++){
        printf("Enter marks of subject %d :",i+1);
        scanf("%f",&subject[i]);
    }
    for(i=0;i<5;i++){
        total+=subject[i];
    }
    printf("Total marks= %.2f",total);

    return 0;

}