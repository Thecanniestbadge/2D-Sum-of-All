// Programmer:		TheCanniestBadge
// Date:			06/28/2023
// Program Name:	2D Sum of All
// Chapter:		    Array
// Description:	This program populates a 2D array with integers ranging from 1 to 100.
// 				It then prints the populated array and calculates the sum of all elements in the array.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations                   
    int arr[10][10];                 // Initialize the 2D array
    int value = 1;                   // Initialize the starting value for population of the array
    // Variable to hold the sum of all the numbers in the array
    int sum = 0;                         

    printf("The contents of a 2-dimensional array, populated with the values 1 to 100...\n");
    // *** FOR LOOP *** 
    // Populates and prints the array using nested for loops
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            // Populate the array with the current value
            arr[row][col] = value;
            // Increment the value for the next element
            value++;
            // Print the current element followed by a tab
            printf("%d\t", arr[row][col]);
            // Adds the current value to the sum
            sum += arr[row][col];
        }
        printf("\n"); // Blank line
    }
    printf("\n"); // Blank line
    // Print the sum of all the numbers in the array
    printf("The sum of all the numbers in the array is %d.\n", sum);
    printf("\n"); // Blank line

    return 0;
} // end main()
