/* Thompson M. Dillon Section 008
   Lab 04 2/01/23 */
// Coding Problems (40 points) 
// Preprocessor Directives
#include<stdio.h>
// Function prototypes 
int calculate_day_of_year(int month, int day, int year, int td);
int leap(int yr);
float find_substance_boiling_point(float temp);
float within_x_percent(float ref, float data, float x);
// Main function 
int main(void){
    int input_day, input_month, input_year, total_days, count_days;
    printf("CALCULATE DAY OF YEAR\n");
    printf("Enter a date: ");
    scanf("%i %i %i", &input_month, &input_day, &input_year);
    total_days = calculate_day_of_year(input_month, input_day, input_year, count_days);
    printf("%i/%i/%i is the %ith day of %i\n", input_month, input_day, input_year, total_days, input_year);
    float temperature; 
    printf("FIND A SUBSTANCE GIVEN ITS BOILING POINT\n");
    printf("Enter a temperature: ");
    scanf("%f", &temperature);
    find_substance_boiling_point(temperature);
    return 0;
}
// Function for Coding Problem 1 
int calculate_day_of_year(int month, int day, int year, int td)
{
    switch(month){
        case 1: td = 0 + day;
            break;
        case 2: td += 31 + day;
            break;
        case 3: td += 31 + 28 + leap(year) + day;
            break;
        case 4: td += 31 + 28 + leap(year) + 31 + day;
            break;
        case 5: td += 31 + 28 + leap(year) + 31 + 30 + day;
            break;
        case 6: td += 31 + 28 + leap(year) + 31 + 30 + 31 + day;
            break;
        case 7: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + day;
            break;
        case 8: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + 31 + day;
            break;
        case 9: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + 31 + 31 + day;
            break;
        case 10: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
            break;
        case 11: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
            break;
        case 12: td += 31 + 28 + leap(year) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
            break;
  }}
// leap function
int leap(int yr)
{
    if (yr % 4 == 0){
        if (yr % 100 == 0){
            if (yr % 400 == 0){
                return 1;
            }else{
                return 0;
            }
        }else{
            return 1;
        }
    }else{
        return 0;
    }
}
// Function for Coding Problem 2
float find_substance_boiling_point(float temp)
{    
    if ((within_x_percent(100, temp, 0.05)) == 1){
        printf("The substance is Water");
    }
    else if ((within_x_percent(357, temp, 0.05)) == 1){
        printf("This substance is Mercury");
    }
    else if ((within_x_percent(1187, temp, 0.05)) == 1){
        printf("This substance is Copper");
    }
    else if ((within_x_percent(2193, temp, 0.05)) == 1){
        printf("This substance is Silver");
    }
    else if ((within_x_percent(2660, temp, 0.05)) == 1){
        printf("This substance is Gold");
    }
    else{
        printf("Substance unknown");
    }
}
float within_x_percent(float ref, float data, float x)
{
    float lowRange, highRange;
    lowRange = ref - (ref * x);
    highRange = ref + (ref * x);
    if (data >= lowRange && data <= highRange){
        return 1;
    }
    else{
        return 0;
    }
}