/*------------------------------------------------------
* Filename: calc_price.c
* Description: the program calculate the price of an order
* Author: Paula Gelman
-------------------------------------------------------*/

#include <stdio.h>
#define DELIVERY_FEE 5.5
#define COST_PER_KG 11
#define COST_PER_SQURE_CM 0.3
#define COST_PER_SQURE_WEIGHT 0.1



int main() {


    int length;
    int width;
    int weight_gram;

    printf("Enter length of the order:\n"); 
    scanf("%d",&length);

    printf("Enter width of the order:\n"); 
    scanf("%d",&width);

    printf("Enter weight of the order(in gram):\n"); 
    scanf("%d",&weight_gram);



    float size_of_order=(float)(width*length)/10;
    float weight_kg=(float)weight_gram/1000;
    float price_of_order= DELIVERY_FEE +  weight_kg*COST_PER_KG + 
                        size_of_order*COST_PER_SQURE_CM +  
                        (size_of_order/weight_kg)*COST_PER_SQURE_WEIGHT;

    
    printf("The size of the order is %.2f\n",size_of_order); 
    printf("The weight of the order is %.3f\n",weight_kg); 
    printf("The price of the order is %.2f\n",price_of_order); 

    return 0;
}

