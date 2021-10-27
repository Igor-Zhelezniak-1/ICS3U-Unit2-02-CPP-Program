// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Oct 2021
// This program calculates the area and perimeter of a circle
//    with radius inputted from the user

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a circle
    int radius;
    int area;
    int diameter;

    // input
    std::cout << "If a circle has radius (mm): ";
    std::cin >> radius;

    // process
    area = M_PI * pow(radius, 2);
    diameter = 2 * radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area = " << area << " mm²." << std::endl;
    std::cout << "Diameter = " << diameter << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
