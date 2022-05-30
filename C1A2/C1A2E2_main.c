//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 1/25/2022
// C1A2E2_main.c
// Linux Mint 19.3 Tricia
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This program prints a specified number of lines using LEADER_CHAR and
// DIAGONAL_CHAR in a mentioned pattern.
//

#include <stdio.h>
#include <stdlib.h>

#define LEADER_CHAR '^'
#define DIAGONAL_CHAR '@'

int main(void)
{
    int numOfLines;

    printf("Enter the number of lines to be displayed: ");
    scanf("%d", &numOfLines);

    // Print the table
    for (int lineNum = 0; lineNum < numOfLines; lineNum++)
    {
        // Print the row
        for (int leaderIter = 0; leaderIter < lineNum; leaderIter++)
        {
            printf("%c", LEADER_CHAR);
        }
        printf("%c\n", DIAGONAL_CHAR);
    }

    return(EXIT_SUCCESS);
}
