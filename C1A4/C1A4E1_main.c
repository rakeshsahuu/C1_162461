//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/08/2022
// C1A4E1_main.c
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program takes two decimal value inputs and prints
// the minimum & maximum value in specified format

#include <stdio.h>
#include <stdlib.h>

double ComputeMinimum(double num1, double num2);
double ComputeMaximum(double num1, double num2);

int main(void)
{
    double num1, num2;

    // Get the inputs
    printf("Enter two space-separated decimal values on the same line: ");
    scanf("%lf %lf", &num1, &num2);

    // Compute the minimum & maximum and print in specified format
    printf("ComputeMinimum(%g, %g) returned %g\n",
        num1, num2, ComputeMinimum(num1, num2));
    printf("ComputeMaximum(%g, %g) returned %g\n",
        num1, num2, ComputeMaximum(num1, num2));

    return(EXIT_SUCCESS);
}
