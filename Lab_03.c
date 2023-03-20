/* Thompson M. Dillon Section 008
   Lab 03 1/30/23 */
// Coding Problems (40 points) 

// Preprocessor directives
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
#define e 2.718281827
// Function prototypes
float monthlycarPayment(float m_interest_rate, float numb_payments, float a_rate, float princ, float car_cost, float d_payment); 
float gospersFormula(float a, float b, float int_n); 
// Main function
int main(){
    float cost_of_car, down_payment, annual_rate, number_of_payments, principal = 0, payment, monthly_interest_rate;
    printf("CALCULATE LOAN PAYMENT\n");
    printf("Enter cost of car: ");
    scanf("%f", &cost_of_car);
    printf("Enter down payment: ");
    scanf("%f", &down_payment);
    printf("Enter annual interest rate: ");
    scanf("%f", &annual_rate);
    printf("Enter number of payments: ");
    scanf("%f", &number_of_payments);
    payment = monthlycarPayment(monthly_interest_rate, number_of_payments, annual_rate, principal, cost_of_car, down_payment);
    printf("Your monthly payment is: $%.2f\n", payment);

    float integer_n, solution;
    printf("Enter an integer: ");
    scanf("%f", &integer_n);
    solution = gospersFormula(PI, e, integer_n);
    printf("%.0f! equals approximately %.4f\n", integer_n, solution);
    return 0;
}
// Function for Coding Problem 1
float monthlycarPayment(float m_interest_rate, float numb_payments, float a_rate, float princ, float car_cost, float d_payment)
{
    float result;
    m_interest_rate = (a_rate / 12.0);
    princ = (car_cost - d_payment);
    result = -1.0 * (princ * ((m_interest_rate * powf(1.0 + m_interest_rate, numb_payments)) / (1.0 - powf(1.0 + m_interest_rate, numb_payments))));
    return result; 
}
// Function for Coding Problem 2
float gospersFormula(float a, float b, float int_n)
{
    float result;
    result = powf(int_n / b, int_n) * sqrt((2.0 * int_n + 1.0/3.0) * a);
    return result;
}
/*Test values:  include your results as part of your submission (copy and paste output from your IDE) 
   
n:      My Results:
1       1! equals approximately 0.9960
2       2! equals approximately 1.9974
3       3! equals approximately 5.9961
4       4! equals approximately 23.9909
5       5! equals approximately 119.9701
6       6! equals approximately 719.8732
7       7! equals approximately 5039.3394
8       8! equals approximately 40315.9102

The values in the second and third columns are approximations computed by the formulas above, the first is the 
version of the calculation you are making (short form), the third is an improved formula which is quite accurate 
and the fourth column is the actual value of n!  Your values may not match the given values exactly due to 
variations in the implementation of some of the functions used but the differences should be relatively small. 
 
Payments:  assume principal = $30,000; rates 0.03, 0.045, 0.05, 0.06, 0.075, 0.09; number of payments = 60.  
Complete the table with the payment amounts for the various annual rates 
Rate (%)  $ payment 
0.03  539.06 
0.045  559.29 
0.06  579.98 
0.075  601.14 
0.09  622.75 
Pick your own rate (check dealer ads online or try 0.)  Check result with a calculator 
 
Pick a car you like and look up the price (online dealer ads are a good source). Compute a table like the one 
above (you can use these results to test your code) with various assumptions about interest rates and loan 
durations.  In your submission, make a table like the one above containing your results.  Show at least three 
combinations of interest rate and loan length for your chosen car. 
  
If you are curious, experiment with different repayment periods (the required 60 is a 5-year payback period, a 
common choice.  You might try a 3 year (36 payments) or 7 year (84 payments) payback which are also 
common terms.  You might also compute the total payment (payment amount * number of payments for each 
case and compare these to the cost of the car ($30,000).  You may find the numbers informative.   

I picked a 2023 Nissa Altima VC-T SR and found the information I needed to calculate the monthly payment on Kelly Blue Book.
The listed price was $35,633 at 3.19% APR for 60 months with $4,000 down.

First Calculation: Price = $35,633, APR = 3.19%, Number of Payments = 60, Down Payment = $4,000
Result: Your monthly payment is: $571.07

Second Calculation: Price = $35,633, APR = 5.00%, Number of Payments = 72, Down Payment = $4,000
Result: Your monthly payment is: $509.44
  
Third Calculation: Price = $35,633, APR = 2.50%, Number of Payments = 48, Down Payment = $4,000
Result: Your monthly payment is: $693.22

*/
