/*------------------------------------------------------
* Filename: num_sum.c
* Description: the program check if the sum of the first and last
numbers are equal to the sum of all other numbers
* Author: Paula Gelman
-------------------------------------------------------*/

#include <stdio.h>

int main() {

    int number=0;
    int sum_of_others=0;
    char check;

    printf("Enter numbers\n");
    scanf("%d",&number);/*first number add*/
    int sum_first_last=number;
    while(number!='\n')
    {
        scanf("% c",&number);
        sum_of_others+=number;
        check = getchar(); 
        if (check == '\n') { /*If it's a newline */ 
            break;

    }

    sum_of_others-=number;/*removing the last number*/
    sum_first_last+=number;

    if(sum_of_others==sum_first_last)
        printf("The sum is equal");
    else
        printf("The sum is not equal");


    return 0;
}
}
