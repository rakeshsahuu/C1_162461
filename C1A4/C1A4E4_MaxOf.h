//
// RAKESH KUMAR SAHU and U09339356
// rakesh.sahuu@seagate.com
// CSE40475 : C/C++ ProgI:Fund Prog Concepts
// 162461 and Ray Mitchell
// 02/09/2022
// C1A4E4_MaxOf.h
// Linux Mint 19.3 Tricia
// gcc/ g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
//
// This header file contains logic to calulate max amoung 3 numbers.
//

#ifndef C1A4E4_MAXOF_H
#define C1A4E4_MAXOF_H

#define mMaxOf2(num1, num2) ((num1) > (num2) ? (num1) : (num2)) 
#define mMaxOf3(num1, num2, num3) (mMaxOf2(mMaxOf2((num1), (num2)), (num3)))

inline long double fMaxOf2(long double num1, long double num2)
{
    return num1 > num2 ? num1 : num2;
}

inline long double fMaxOf3(long double num1, long double num2, long double num3)
{
    return fMaxOf2(fMaxOf2(num1, num2), num3);
}

#endif
