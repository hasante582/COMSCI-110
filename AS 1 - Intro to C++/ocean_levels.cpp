/*
Module 1 / Chapter 2

Assignment 1A Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years

Test Run example: Testing 2, 3 and 4 years outlook result.
*/

#include <iostream>
using namespace std;

int main(){

    float ocean_yearly_rising_level = 1.5;
    int oceans_age = [5, 7, 10]

    // first calculate the total of rise for each year
    // then deduct the current level from it to get the results

    // for solve it by using an array to store the list of years
    // then we loop, calculate, deduct and print the results
    for(int 0; i < 3; i++){

        float total_oceans_level_by_age = ocean_rising_level * oceans_age[i];

        float number_of_mm_higher_than_current_level = total_oceans_level_by_age - ocean_yearly_rising_level;

        cout << "In {n} years the ocean's level will be {n} millemeters higher than it is today", oceans_age[i],  number_of_mm_higher_than_current_level <<endl;
    }

}