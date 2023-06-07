0x08-Recursions

Tasks
0 - A function that prints a string recursively
   
Prototype:void _puts_recursions(char *s) 

   Approach:
Step -1: Establish a base case for using '\0'
Step -2: Print character from string
Step -3: Recursively call _puts_recursions passing string as parameter and increment the string by 1 for each recursive call till base case


1 - A function that prints a string in reverse
    
Prototype: void _print_rev_recursion(char *s);
    
    Approach:
Step -1: Establish a base case by checking if '*s' points to null byte('\0') 
Step -2: Recursively call _print_rev_recursion with s incremented by 1 to move
to next char in string
Step -3: Output characters *s as recursive call returns after getting to base
case 
