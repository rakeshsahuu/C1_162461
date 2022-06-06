//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/08/2022
// C1A4E3_main.cpp
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints characters in specified format.
//

#include <iostream>
#include <cstdlib>

using namespace std;

void PrintLines(int charValue = 'Z', int charCount = 1, int lineCount = 1);

int main()
{
    const int COUNT = 2;

    for (int countIter = 0; countIter < COUNT; countIter++)
    {
        char charValue;
        int charCount, lineCount;

        // User message
        cout <<
            "Enter all 3 of the following on the same line, "
            "in order and space-separated:\n"
            "a. the character to display.\n"
            "b. the number of times to display the character on each line.\n"
            "c. the number of lines to display.\n";

        // Read the 3 inputs
        cin >> charValue >> charCount >> lineCount;

        // Print the characters in the specified format
        PrintLines(charValue, charCount, lineCount);
        PrintLines(charValue, charCount);
        PrintLines(charValue);
        PrintLines();
    }

    return EXIT_SUCCESS;
}
