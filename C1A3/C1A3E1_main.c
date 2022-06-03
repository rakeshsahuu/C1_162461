//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/02/2022
// C1A3E1_main.c
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints a table of factorials from 1! through n!
// Solutions,
// 1. Developer can use the "double" and "%e" format specifier to
// ensure all factorial results are correct.
// 2. One more approach, is to use array of unsigned long to hold 
// the factorial results, then carefully print the factorial results
// using the array elements

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numOfEntries;
    int multiplier;
    long factResult = 1;

    printf("Enter an integer value greater than 0: ");
    scanf("%d", &numOfEntries);

    // Print the table
    printf(
        "%2s %19s\n"
        "-----------------------\n"
        , "nbr", "nbr!");
    for (multiplier = 1; multiplier <= numOfEntries; multiplier++)
    {
        factResult *= multiplier;
        printf("%2d %19ld\n", multiplier, factResult);
    }

    return(EXIT_SUCCESS);
}
