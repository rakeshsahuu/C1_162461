//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/02/2022
// C1A3E3_main.cpp
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// Below code displays entered number in word.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    const int RADIX = 16;
    int inValue, dividentNum, divisorNum = 1;
    bool isNegative;

    // Get the user integer
    cout << "Enter a hexadecimal integer value: ";
    cin >> hex >> inValue;
    cout << "\"";

    // Check sign of integer
    if (inValue < 0)
    {
        isNegative = true;
        inValue = -inValue;
        cout << "-";
    }
    else
    {
        isNegative = false;
    }

    // Output initial wording
    cout << hex << inValue << "\" in words is \"";
    if (isNegative)
    {
        cout << "minus ";
    }

    // Calculate divisor
    for (dividentNum = inValue; dividentNum > RADIX - 1; dividentNum /= RADIX)
    {
        divisorNum *=  RADIX;
    }

    // Print number in words
    dividentNum = inValue;
    do
    {
        int msdNum = dividentNum / divisorNum;
        dividentNum -= msdNum * divisorNum;
        divisorNum /= RADIX;

        switch (msdNum)
        {
            case 0:
                cout << "zero";
                break;

            case 1:
                cout << "one";
                break;

            case 2:
                cout << "two";
                break;

            case 3:
                cout << "three";
                break;

            case 4:
                cout << "four";
                break;

            case 5:
                cout << "five";
                break;

            case 6:
                cout << "six";
                break;

            case 7:
                cout << "seven";
                break;

            case 8:
                cout << "eight";
                break;

            case 9:
                cout << "nine";
                break;

            case 10:
                cout << "A";
                break;

            case 11:
                cout << "B";
                break;

            case 12:
                cout << "C";
                break;

            case 13:
                cout << "D";
                break;

            case 14:
                cout << "E";
                break;

            case 15:
                cout << "F";
                break;
        }

        // Display space between words
        if (divisorNum > 0)
        {
            cout << " ";
        }
    } while (divisorNum);

    cout << "\"\n";

    return EXIT_SUCCESS;
}
