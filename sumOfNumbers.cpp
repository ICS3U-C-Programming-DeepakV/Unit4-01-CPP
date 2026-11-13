// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Nov. 13, 2026
// This program is focused on tracking loops
#include <iostream>
#include <string>

int main() {
    int totalNum = 0;
    int counterLoop = 0;
    std::string userNumStr;
// asking the user to input the number of loops they want
    std::cout << "Enter the number of loops you want: ";
    std::cin >> userNumStr;
// trying to convert the user's input into a string
    try {
        int userNum = std::stoi(userNumStr);
// if the user's input is converted to a string,
// this code will check if it's below 0
        if (userNum < 0) {
            std::cout << "Integer can not be a negative number.";
// else it will just start a loop and
// track the loop the amount of times the user's number
        } else {
            while (counterLoop < userNum) {
                counterLoop += 1;
                totalNum = totalNum + counterLoop;
                std::cout << "Tracking \n"
                << counterLoop << " times through a loop.\n";
            }
            std::cout << "The sum of numbers from 0 /n"
            << userNum << " is " << totalNum << "\n";
        }
// If none work, it will declare the user's
// input has not a valid integer
    } catch(std::invalid_argument) {
        std::cout << "";
    }
}
