/*------------------------------------------------------
* Filename: calc_age.c
* Description: the program calculate the age of the user
* Author: Paula Gelman
-------------------------------------------------------*/
#include <stdio.h>
#define DAYS_IN_YEAR 365
#define DAYS_IN_MONTH 30
#define MONTH_IN_YEAR 12


int main() {
    int curr_year;
    int curr_month;
    int curr_day;

    int birth_year;
    int birth_month; 
    int birth_day;

    printf("Enter current date:\n");  
     scanf("%d/%d/%d",&curr_day,&curr_month,&curr_year);
    printf("Enter birthday:\n");  
    scanf("%d/%d/%d",&birth_day,&birth_month,&birth_year);
    
    int age_days=DAYS_IN_YEAR*(curr_year-birth_year) + DAYS_IN_MONTH*(curr_month-birth_month) 
                +(curr_day-birth_day);
    float age_month= (float)age_days/ DAYS_IN_MONTH ;
    float age_year = (float)age_days/DAYS_IN_YEAR;

    printf("Age in days %d\n",age_days);  
    printf("Age in months %f\n",age_month);  
    printf("Age in yaers %f\n",age_year);  

    return 0;
}
