//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 1/24/2022
// C1A2E3_main.cpp
// Linux Mint 19.3 Tricia
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints a specified number of lines using LEADER_CHAR and
// DIAGONAL_CHAR in a mentioned pattern.
//

#include <iostream>

using namespace std;

int main()
{
    const char LEADER_CHAR = '^';
    const char DIAGONAL_CHAR = '$';
    int numOfLines;

    cout << "Enter the number of lines to be displayed: ";
    cin >> numOfLines;

    // Print the table
    for (int lineNum = 0; lineNum < numOfLines; lineNum++)
    {
        // Print the row
        for (int leaderIter = 0; leaderIter < lineNum; leaderIter++)
        {
            cout << LEADER_CHAR;
        }
        cout << DIAGONAL_CHAR << "\n";
    }

    return(EXIT_SUCCESS);
}
