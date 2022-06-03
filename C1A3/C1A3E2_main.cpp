//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/02/2022
// C1A3E2_main.cpp
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints reverses the hexadecimal input.
//

#include <iostream>

using namespace std;

int main()
{
    const int BASE = 16;
    int inValue;
    bool isNegative;

    cout << "Enter any hexadecimal integer value: ";
    cin >> hex >> inValue;

    cout << "\"";

    // Identify sign of number
    if (inValue < 0)
    {
        isNegative = true;
    }
    else
    {
        isNegative = false;
    }

    // Make the value positive if its a negative value
    if (isNegative)
    {
        cout << "-";
        inValue = -inValue;
    }

    cout << hex << inValue << "\" in reverse is \"";

    // Output reverse number
    do
    {
        cout << inValue % BASE;
        inValue /= BASE;
    } while (inValue != 0);

    //If entered number was negative number then here add the negative sign now
    if (isNegative)
    {
        cout << "-";
    }
    cout << "\"\n";

    return(EXIT_SUCCESS);
}
