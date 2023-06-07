0x08-Recursions

Tasks
#0. A function that prints a string recursively
   Prototype:void _puts_recursions(char *s) 
    Approach:
    1. Establish a base case for using '\0'
    2. Print character from string
    3. recursively call _puts_recursions passing string as parameter and increment the string by 1 for each recursive call till base case
