/*------------------------------------------------------
* Filename: coke_and_role.c
* Description: 
* Author: Paula Gelman & Gershon Levi
-------------------------------------------------------*/
#include <stdio.h>


#define RANDOM_CHAR 't'

#define  COCA_COLA 5.2
#define  DIET_COLA 7.2
#define  ORANGEADE 3.4
#define  SCHWEPPES 4.5
#define  GRAPE_JUICE 3.5
#define  MINERAL_WATER 2.5


#define TEN_AGOROT 0.1
#define HALF_NIS 0.5
#define ONE_NIS 1
#define TWO_NIS 2
#define FIVE_NIS 5
#define TEN_NIS 10




int main(){

    char choise=RANDOM_CHAR;
    float price;
    float total;
    int amount_10_agorot;
    int amount_50_agorot;
    int amount_1_NIS;
    int amount_2_NIS;
    int amount_5_NIS;
    int amount_10_NIS;

    
    while(choise!='e' && choise!='E'){

    printf("Please select the drink you would like to order:\n");
    printf("press 'C' for Coca-Cola\n");
    printf("press 'D' for Diet-Cola\n");
    printf("press 'O' for Orangeade\n");
    printf(" press 'S' for Schweppes\n");
    printf("press 'G' for Grape juice\n");
    printf("press 'W' for Mineral water\n");
    scanf(" %c",&choise);


    switch(choise){


        case 'E':
        case 'e':
        printf("Good bye!");
        return 0;

        case 'C':
        case 'c':
        printf("The price of the drink is %.2f NIS\n",COCA_COLA);
        price=COCA_COLA;
        break;

        case 'D':
        case 'd':
        printf("The price of the drink is %.2f NIS\n",DIET_COLA);
        price=DIET_COLA;
        break;

        case 'O':
        case 'o':
        printf("The price of the drink is %.2f NIS\n",ORANGEADE);
        price=ORANGEADE;
        break;   

        case 'S':
        case 's':
        printf("The price of the drink is %.2f NIS\n",SCHWEPPES);
        price=SCHWEPPES;
        break;   

        case 'G':
        case 'g':
        printf("The price of the drink is %.2f NIS\n",GRAPE_JUICE);
        price=GRAPE_JUICE;
        break;  

        case 'W':
        case 'w':
        printf("The price of the drink is %.2f NIS\n",MINERAL_WATER);
        price=MINERAL_WATER;
        break;  

        default:
        printf("No such drink, try again!\n");
        continue;

    
    }
    
    printf("Enter amount of 0.1 NIS:");
    scanf("%d",&amount_10_agorot);

    printf("Enter amount of 0.5 NIS:");
    scanf("%d",&amount_50_agorot);

    printf("Enter amount of 1 NIS:");
    scanf("%d",&amount_1_NIS);

    printf("Enter amount of 2 NIS:");
    scanf("%d",&amount_2_NIS);

    printf("Enter amount of 5 NIS:");
    scanf("%d",&amount_5_NIS);

    printf("Enter amount of 10 NIS:");
    scanf("%d",&amount_10_NIS);
    
    total= amount_10_agorot*TEN_AGOROT + amount_50_agorot*HALF_NIS +
        amount_1_NIS*ONE_NIS + amount_2_NIS*TWO_NIS + amount_5_NIS*FIVE_NIS 
         + amount_10_NIS*TEN_NIS ;

    printf("The machine received payment of %f NIS\n",total);

    if(choise=='c' || choise=='C'){
        if(amount_10_agorot == 1 && amount_2_NIS==3 
        && amount_5_NIS ==3 && amount_10_NIS==7 ){
            printf("Hello agent\n");
        
        }

    }

    total-=price;

    amount_10_NIS=total/TEN_NIS;
    total-=TEN_NIS*amount_10_NIS;

    amount_5_NIS=total/FIVE_NIS;
    total-=FIVE_NIS*amount_5_NIS;

    amount_2_NIS=total/TWO_NIS;
    total-=TWO_NIS*amount_2_NIS;

    amount_1_NIS=total/ONE_NIS;
    total-=ONE_NIS*amount_1_NIS;

    amount_50_agorot=total/HALF_NIS;
    total-=HALF_NIS*amount_50_agorot;

    amount_10_agorot=total/TEN_AGOROT;
    total-=TEN_AGOROT*amount_10_agorot;


    printf("Machine returned %d coins of 0.1 NIS\n",amount_10_agorot);
    printf("Machine returned %d coins of 0.5 NIS\n",amount_50_agorot);
    printf("Machine returned %d coins of 1 NIS\n", amount_1_NIS);
    printf("Machine returned %d coins of 2 NIS\n",amount_2_NIS);
    printf("Machine returned %d coins of 5 NIS\n",amount_5_NIS);
    printf("Machine returned %d coins of 10 NIS\n",amount_10_NIS);
 
    

    }




    return 0;
}
