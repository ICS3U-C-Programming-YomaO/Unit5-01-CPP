// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program counts from 1000 to 2000
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <iostream>

void fahrenheit() {
    // Display message
    std::cout << "Welcome to the celsius to fahrenheit converter!" << std::endl;

    // Get temperature in Celsius (negative numbers allowed)
    float celsius;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    // Convert Celsius to Fahrenheit
    float fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display the result
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    // Thank you message
    std::cout << "Thank you for using the program" << std::endl;
}

int main() {
    fahrenheit();
}
