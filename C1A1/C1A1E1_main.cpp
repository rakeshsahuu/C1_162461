//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 1/16/2022
// C1A1E1_main.cpp
// Linux Mint 19.3 Tricia
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This displays the most appropriate form of each of the 14 expressions
// mentioned in C1A1E1 assignment
//

#include <iostream>

using namespace std;

int main()
{
    cout << "\"ax = ax + bx\" should be \"ax += bx\"\n"
        "\"ax = ax / -bx\" should be \"ax /= -bx\"\n"
        "\"ax = bx / ax\" should be \"ax = bx / ax\"\n"
        "\"ax = -1 * ax\" should be \"ax = -ax\"\n"
        "\"ax = -ax * ax\" should be \"ax *= -ax\"\n"
        "\"ax = -bx * ax\" should be \"ax *= -bx\"\n"
        "\"ax = bx - ax\" should be \"ax = bx - ax\"\n"
        "\"ax = 2 + ax\" should be \"ax += 2\"\n"
        "\"ax = 1 + ax\" should be \"ax++\" or \"++ax\"\n"
        "\"ax = ax - 37\" should be \"ax -= 37\"\n"
        "\"ax = ax - 1\" should be \"ax--\" or \"--ax\"\n"
        "\"ax *= -1\" should be \"ax = -ax\"\n"
        "\"ax /= -1\" should be \"ax = -ax\"\n"
        "\"ax = 0 - ax\" should be \"ax = -ax\"\n";

    return(EXIT_SUCCESS);
}
