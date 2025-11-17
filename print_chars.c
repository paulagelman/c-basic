/*------------------------------------------------------
* Filename: print_chars.c
* Description: the program print chars 
* Author: Paula Gelman
-------------------------------------------------------*/

#include <stdio.h>
int main() {
    
    int number_floor;
    float number_input;
    float check;
    printf("Enter a positive number\n");
    scanf("%f",&number_input);

    number_floor= number_input;
    check = number_input-number_floor;
    if(check!=0)
    {
        printf("Bad input!");
        return 0;
    }

    if(number_floor%2==0){
        for(int i=0;i<number_floor;i++){
            for(int j=0;j<number_floor;j++){
             printf("*");
            }
          printf("\n");   
        }
    }
    else {
        if(number_floor%3==0){
            for(int i=0;i<number_floor;i++){
                for(int j=0;j<number_floor;j++){
                 printf("^");
                }
            printf("\n");
            }
        }
        else{
            if(number_floor%5==0){
                for(int i=0;i<number_floor;i++){
                    for(int j=0;j<number_floor;j++){
                        printf("%%");
                    }
                printf("\n");
                }
            }
        else{
                for(int i=0;i<number_floor;i++){
                    for(int j=0;j<number_floor;j++){
                     printf("@");
                     }
                   printf("\n");
                  }
            }
            }
        }
    

    return 0;
}
