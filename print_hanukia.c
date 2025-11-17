/*------------------------------------------------------
* Filename: print_hanukia.c
* Description: the program prints Hanukia
* Author: Paula Gelman
-------------------------------------------------------*/

#include <stdio.h>

int main() {

    int choice;
    printf("Enter a number (0-8): ");
    scanf("%d", &choice);

    char *candles[] = {
        "         \n",            
        " #    \n",           
        " #    #   \n",            
        " #    #    #  \n",            
        " #    #    #    # \n",            
        " #    #    #    #    #\n",            
        " #    #    #    #    #    #\n",          
        " #    #    #    #    #    #    #\n",        
        " #    #    #    #    #    #    #    #\n"       
    };
    printf("%s",candles[choice]);
    
    printf("###  ###  ###  ###  ###  ###  ###  ###\n");
    printf("###  ###  ###  ###  ###  ###  ###  ###\n");
    printf("###  ###  ###  ###  ###  ###  ###  ###\n");
    printf("###  ###  ###  ###  ###  ###  ###  ###\n");
    printf("######################################\n");
    printf("                   | |                \n");
    printf("                   | |                \n");
    printf("                   | |                \n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    return 0;
}
