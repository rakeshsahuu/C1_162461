//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/08/2022
// C1A4E3_PrintLines.cpp
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// Function to print characters in specified format given a character,
// number of times in a line and number of lines

#include <iostream>

using namespace std;

void PrintLines(int charValue, int charCount, int lineCount)
{
    // Print the "lineCount" lines of characters
    for (int linesIter = 0; linesIter < lineCount; linesIter++)
    {
        // Print the "charCount" charcters in a line
        for (int charIter = 0; charIter < charCount; charIter++)
        {
            cout << (char)charValue;
        }
        cout << "\n";
    }
}
