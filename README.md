# C-number-list-program
Step 1: Before the loop

•	The terminal must print your name, your EUID, your e-mail address, the department name, and course number at the start of the program.

•	Outside the loop, create a menu function that will print a menu of options for the user to choose from. These options will include:
1.	Display numbers in list
2.	Add number to list
3.	Remove number from list
4.	Compute average of list of numbers
5.	Compute minimum of list of numbers
6.	Compute maximum of list of numbers
7.	Exit program

•	Create a double vector outside of the loop to store the numbers outside of the loop.

•	Create an int variable named “input” to store the input of the user outside of the loop.

Step 2: The loop

•	Create a while loop that will continue to loop while the input variable is not equal to 7.

  *	As per the menu of options, 7 being the “Exit program option.”

Step 3: The input

•	Use the menu function created before to print the menu of options to the user.

•	Ask the user for an input using “cin >> input;”.

  *	To determine if the value inputted is 1 through 7, use the following if statement.
    * if(cin.fail() || input<1 || input > 7)
    * Checks to see if the input was a number, and if the input is between 1 and 7.

•	At the end of the loop, clear the input using cin.clear() and cin.ignore()

Step 4: The operations

•	Using a switch statement, make 6 cases for each of the 6 operations.

•	Case 1 is for option 1, displaying the list of numbers.

  * Use a for loop to loop through the list of numbers and print them out with a space in between.

  *	Use endl after the for loop.

  * Break out of the case.

•	Case 2 is for option 2, adding numbers to the list.

  * Prompt the user for a number that they want to input.

  * Add the input to the end of the vector using the push_back function.

  * Print out that the input was added to the list.

  * Break out of the case.

•	Case 3 is for option 3, removing numbers from the list.

  * If the size of the vector is 0, print to the terminal that the list is empty and break out of the case.

  * Using a for loop, go through the entire list and if the list at i equals the input, then erase the element at the position i in the vector.

  * Print to the terminal that the number was removed from the list and break out of the case.

  * If the input was not found in the list, then remove the last element in the vector by using the pop_back function and print the specific number that was removed from the list.

  * Break out of the function.

•	Case 4 is for option 4, computing the average.

  * Create a temporary double variable to store the sum of the entire list of numbers.

  * If the size of the list is 0, tell the user that the list is empty, and the program is unable to compute the average.

    * Break out of the case.

  * Use a for loop to go through the entire vector and add up all the values of the numbers to the temporary variable.

  * Calculate the average by dividing the temporary variable by the size of the vector.

  * Print out the average of the list along with the size.

    * Example calculation: the list contains 2 numbers, “2” and “8”. The algorithm should print out the average as “5”.

•	Case 5 is for option 5, computing the minimum.

  * If the size of the list is 0, respond that the minimum can’t be computed because the list is empty.

    * Break out of the case.

  * Create a temporary double variable that is set to the first value of the list.

  * Use a for loop to go through the list and see if the value at “i” is less than the temporary variable.

    * If it is, set the temporary variable to that value.

  * Print out the temporary variable as the minimum.

  * Break out of the case.

•	Case 6 is for option 6, computing the maximum.

  * Use the same steps as case 5, but instead checking if “i” is less than the temporary variable, check if it is more.

  * Print out the temporary variable as the maximum.

  * Break out of the case.

After breaking out of the loop, print “Exiting program…” and return 0;



