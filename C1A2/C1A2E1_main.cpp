//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 1/24/2022
// C1A2E1_main.cpp
// Linux Mint 19.3 Tricia
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This displays the table of uppercase and related lowercase character for
// the specified number of lines.
// If user enters "30" as number of lines, then for the first 26 ASCII
// character-set table looks perfect, but for the remaining 4 row entries
// special symbols are printed with not relation.
//

#include <iostream>

using namespace std;

int main()
{
    char uppercaseA = 'A';
    char lowercaseA = 'a';
    int numOfLines;

    cout << "Enter the number of lines to be displayed: ";
    cin >> numOfLines;
    cout << "\n";

    // Print the table row entries
    for (int rowNum = 0; rowNum < numOfLines; rowNum++)
    {
        cout <<
            "'" << (char)(uppercaseA + rowNum) << "' --> '" <<
            (char)(lowercaseA + rowNum) << "'\n";
    }

    return(EXIT_SUCCESS);
}
