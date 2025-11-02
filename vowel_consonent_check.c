#include <stdio.h>
#include <stdbool.h>

int main() {

    char character,bool_val;
    
    //taking values
    printf("Enter a character :");
    scanf("%c",&character);
    
    //logic
    if((character>='A' && character<='Z') || (character>='a' && character<='z')){
            if(character=='A' | character=='a'){
                printf("%c is a vowel",character);
                bool_val=true;
            }else if(character=='E' | character=='e'){
                printf("%c is a vowel",character);
                bool_val=true;
            }else if(character=='I' | character=='i'){
                printf("%c is a vowel",character);
                bool_val=true;
            }else if(character=='O' | character=='o'){
                printf("%c is a vowel",character);
                bool_val=true;
            }else if(character=='U' | character=='u'){
                printf("%c is a vowel",character);
                bool_val=true;
            }else{
                printf("%c is not a vowel but a consonent");
            }
        
        
        
    }else{
            printf("Entered character is not an alphabet.Kindly recheck your input");
        }
return 0;
}