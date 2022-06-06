//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/09/2022
// C1A4E4_main.cpp
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints the maximum value amoung the 3 values entered by user,
// in a specified format.
//

#include <iostream>
#include <cstdlib>
#include "C1A4E4_MaxOf.h"

using namespace std;

int main()
{
    long double num1, num2, num3;

    // User message
    cout << "Enter three space-separated decimal values: ";

    // Read the 3 inputs
    cin >> num1 >> num2 >> num3;

    // Print in the specified format
    cout <<
        "mMaxOf3(" <<
        num1 <<
        ", " <<
        num2 <<
        ", " <<
        num3 <<
        ") returned " <<
        mMaxOf3(num1, num2, num3) <<
        "\n";
    cout <<
        "fMaxOf3(" <<
        num1 <<
        ", " <<
        num2 <<
        ", " <<
        num3 <<
        ") returned " <<
        fMaxOf3(num1, num2, num3) <<
        "\n";

    return EXIT_SUCCESS;
}
