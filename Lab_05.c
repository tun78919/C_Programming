/* Thompson M. Dillon Section 008
   Lab 05 2/21/23
Coding Problems (40 points) */
// Preprocessor directives
#include <stdio.h>
// Function prototypes
int divisible_by_nine(int n, int sum);
int estimate_pi(int i);
// Main function
int main(void){
    int n, sum = 0, remainder = 0;
    printf("IS IT DIVISIBLE BY 9\n");
    printf("Enter an integer: ");
    scanf("%i", &n);
    if (divisible_by_nine(n, sum) == 0){
        printf("%i is divisible by 9\n", n);
    }
    else{
        printf("%i is not divisible by 9\n", n);
    }
    int iterations;
    printf("ESTIMATE PI\n");
    printf("Enter number of iterations: ");
    scanf("%i", &iterations);
    estimate_pi(iterations);
    return 0;
}
// Function for Coding Problem 1
int divisible_by_nine(int n, int sum)
{
    int result;
    do {
        sum += (n % 10);
        n /= 10;
    }
    while (n != 0);
    result = sum % 9;
    if (result == 0){
        return 0;
    }
    else{
        return 1;
    }
}
// Function for Coding Problem 2
int estimate_pi(int i)
{
    int denominator = 1, sign = 1; 
    float pi = 0.0;
    do {
        pi += 4 * ((1.0 / denominator) * sign);
        denominator += 2;
        sign *= -1;
    }
    while (denominator <= i);
    printf("Estimated PI is %f", pi);
}