/// @file ReversePalindromePrime.cpp
/// @author Jordan Scherf <5005736913@student.csn.edu>
/// @date 03/20/2021
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief This lab demonstates The use of Value returning Functions.
/// Determines whether it is a palindrone, a prime, and reverses it.
/// @note Time Taken to Develop Program is about 7 hours
/// between days 03/14 and 03/20

#include <iostream>

#include <cmath>

#include <iomanip>

using namespace std;

int reverse(int firstNum);  // Prototype Function to get the reversed number

bool is_palindrome(int firstNum);  // Prototype to check if
// the reversed number is palindrone

bool is_prime(int firstNum);  // Pototype to check if its a prime

int main() {
    int firstNum = 0, secondNum = 0, hold;
    // firstNum is the lowest number, secondNum
    // is the Highest, hold is to set them up right
    cout << "Enter two positive integers:";
    cin >> firstNum >> secondNum;

    if (firstNum >
        secondNum) {  // This always makes the firstNum variable the lowest
        hold = firstNum;
        firstNum = secondNum;
        secondNum = hold;
    }

    // This is the bulk of the code and checks
    // each number for a palidrone and prime truth
    while (firstNum <= secondNum) {
        if (((is_palindrome(firstNum)) == true) && (is_prime(firstNum) == true)
            && (firstNum > 1)) {
            cout << " " << firstNum;
            firstNum++;
        } else {
            firstNum++;  // it will always increease by 1 for every iteration
        }

    }

    cout << '\n';
    return 0;
}

bool is_prime(int
              firstNum) {  // This function checks to see if the number is prime
    bool flag = true;  // this is to give a bool return

    for (int i = 2; i <= firstNum / 2; i++) {
        if (firstNum % i == 0) {
            flag = false;
        }
    }

    return flag;
}
int reverse(int firstNum) {  // This funciont reverses the
    // number for the palindrone function to check
    int remainder = 0, reversedNumber = 0;

    // remainder is to get a number out then adds it to the reversed number
    while (firstNum != 0) {

        remainder = firstNum % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        firstNum /= 10;
    }

    return reversedNumber;
}

bool is_palindrome(int firstNum) {  // This function checks
    // the if the number is a palindrone

    bool z;

    // z is just to return a bool variable
    if (firstNum == reverse(firstNum)) {
        z = true;
    } else {
        z = false;
    }

    return z;
}
