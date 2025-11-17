/*------------------------------------------------------
* Filename: max.c
* Description: the program prints the bigger number
* Author: Paula Gelman
-------------------------------------------------------*/
#include <stdio.h>
int main() {
    int x=7;
    int y=4;
    int z= x*(x>y) + y*(y>=x);/*only one of the conditions will be 1*/
    printf("The bigger number is:%d",z);
    return 0;
}
