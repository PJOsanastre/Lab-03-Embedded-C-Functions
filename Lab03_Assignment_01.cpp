#include <iostream>
#include<ctype.h>
#include<conio.h>

int CheckChar(char value){// Created funtion
    if (isalnum(value)){
            
        if (value >= 'a' && value <= 'z'){
            printf("Inputed value is a Lower Case");
        }
        if (value >= 'A' && value <= 'Z'){
            printf("Inputed value is a Upper Case");
        }else{
            printf("Inputed value is a numeric!");
        }

    }else{
        printf("Inputed value is not a Alphanumeric!");
    }
}

int main(){

    char val;
    printf("Enter an alphanumeric value: ");
    scanf("%c",&val);
    CheckChar(val); //calling the function to check the characters.
    

return 0;

}