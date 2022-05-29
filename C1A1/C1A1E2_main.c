//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 1/18/2022
// C1A1E2_main.c
// Linux Mint 19.3 Tricia
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program takes the user input for the feet (i.e. a decimal value
// representing an arbitrary number) and then displays the equivalent in meters,
// miles, nautical miles, cubits, fathoms, and furlongs.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double distanceInFeet;

    printf("Please enter the distance (in feet): ");
    scanf("%lg", &distanceInFeet);

    printf("\n%g feet\n"
           "= %g meters\n"
           "= %g miles\n"
           "= %g nautical miles\n"
           "= %g cubits\n"
           "= %g fathoms\n"
           "= %g furlongs\n"
           , distanceInFeet, distanceInFeet * 0.3048
           , distanceInFeet * 0.000189394, distanceInFeet / 6076
           , distanceInFeet * 0.666667, distanceInFeet / 6
           , distanceInFeet / 660);

    return(EXIT_SUCCESS);
}
