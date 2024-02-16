/**
 * @file pyramid_pattern.cpp
 * @brief C++ Program to print right half pyramid pattern using for loop.
 */

#include <iostream>

/**
 * @brief Main function to print the right half pyramid pattern.
 * @return 0 on successful execution.
 */
int main()
{
    int rows = 5;

    // First for loop is used to identify number of rows
    for (int i = 1; i <= rows; i++) {

        // Second for loop is used to identify number of
        // columns and here the values will be changed
        // according to the first for loop
        for (int j = 1; j <= i; j++) {

            // Printing the required pattern
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}
