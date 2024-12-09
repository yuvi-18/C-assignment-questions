//  1. Define the different data types in C and their size.


// char:
// Definition: Stores a single character.
// Size: 1 byte.

// short:
// Definition: Stores a smaller integer.
// Size: 2 bytes.

// int:
// Definition: Stores an integer.
// Size: 4 bytes.

// long:
// Definition: Stores a larger integer.
// Size: 4 bytes (32-bit system) or 8 bytes (64-bit system).

// long long:
// Definition: Stores a very large integer.
// Size: 8 bytes.

// float:
// Definition: Stores single-precision floating-point numbers.
// Size: 4 bytes.

// double:
// Definition: Stores double-precision floating-point numbers.
// Size: 8 bytes.

// long double:
// Definition: Stores extended-precision floating-point numbers.
// Size: 8 bytes or 16 bytes (implementation-dependent).

// void:
// Definition: Represents no value or an empty data type.
// Size: No size (used as a placeholder).

// bool (C99 and later):
// Definition: Stores a boolean value (true or false).
// Size: 1 byte.





// 2. Write a program to print the size of different data types (int, float, char, double). 

// #include <stdio.h>

// int main(){
//     printf("Size of int is %d\n", sizeof(int));
//     printf("Size of float is %d\n", sizeof(float));
//     printf("Size of char is %d\n", sizeof(char));
//     printf("Size of double is %d", sizeof(double));
//     return 0;
// }

// the output will be in byte(s)
// you should not use the %d and %f format specifiers to print the result of sizeof because the result of sizeof is of type size_t, which is an unsigned integer type.





// 3. What is the difference between signed and unsigned data types in C?

// Signed types are useful when you need to store both negative and positive values. For example, temperatures (can be negative) or account balances (can go into debt, i.e., negative).

// Unsigned types are useful when you only need to store non-negative numbers. For example, counting items or array indexes — there’s no such thing as a “negative count” of items, so using unsigned makes sense.





// 4. Write a program to demonstrate the overflow of an unsigned integer.

// #include <stdio.h>

// int main() {
//     unsigned int max_val = 4294967295;  // Maximum value for an unsigned int (2^32 - 1)

//     printf("Before overflow, max_val = %u\n", max_val);

// Before overflow, max_val = 4294967295

//     max_val++;

//     printf("After overflow, max_val = %u\n", max_val);
// After overflow, max_val = 0

//     return 0;
// }





// 5. What are the format specifiers for printing different data types?


// In C, format specifiers are used with functions like printf() and sprintf() to specify the type of data being printed.

// Format Specifiers for Common Data Types:
// %d or %i: Used for signed integers (e.g., int).
// %u: Used for unsigned integers (e.g., unsigned int).
// %c: Used for characters (e.g., char).
// %f: Used for floating-point numbers (e.g., float).






// 6. Write a program to input a char value, convert it into its ASCII value, and print it.

// #include <stdio.h>

// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("Entered character's ASCII value is: %d", ch);
//     return 0;
// }





// 7. Write a program to perform an implicit type conversion from int to float.

// Implicit Type Conversion is done automatically by the compiler when there is a need to convert one data type to another during an operation.

// #include <stdio.h>

// int main(){
//     int a = 5;
//     float b = 5.5;
//     float result = a + b;
//     printf("result: %.2f", result);
//     return 0;
// }




// 8. Write a program that converts a double value to an int using explicit type casting.

// Explicit Type Conversion (also known as type casting) is when we explicitly specify how to convert one data type to another. 

// #include <stdio.h>

// int main(){
//     double num = 3.2342;
//     int i;
//     i = (int)num;
//     printf("Original double value: %.4f\n", num);  
//     printf("converted int value: %d", i);  
//     return 0;
// }




// 9. Explain the concept of type promotion in C.

// type promotion in c refer to when a small data type such as char is used alongside a large data type such as int or float, and the smaller data type is promoted to the larger data type for the operation to proceed.




// 10. Write a program to add an integer and a float, and print the result.

// #include <stdio.h>

// int main() {
//     int num1 = 10;
//     float num2 = 5.5;
//     float result = num1 + num2;    
//     printf("The result is %.2f\n", result);
//     return 0;
// }




// 11. Write a program to check whether the entered number is a valid float value or not.





// 12. Convert a float to int and explain the truncation effect with examples

// When you convert a float (a floating-point number) to an int (an integer), the fractional part of the float is discarded. This process is called truncation.

// #include <stdio.h>

// int main() {
//     float n1 = 5.75;
//     float n2 = -3.14;
//     // Converting float to int using explicit type casting
//     int int1 = (int) n1;
//     int int2 = (int) n2;
//     // Print the results
//     printf("Original float: %.2f, After conversion to int: %d\n", n1, int1);
//     printf("Original float: %.2f, After conversion to int: %d\n", n2, int2);
//     return 0;
// }




// 13. Write a program to demonstrate the difference between float and double in terms of precision.


// #include <stdio.h>

// int main() {
//     float float_num = 123.456789123456789;
//     double double_num = 123.456789123456789;
//     printf("Float value: %.15f\n", float_num);
//     printf("Double value: %.15f\n", double_num);
//     return 0;
// }





// 14. Write a program to accept a hexadecimal number as input and print its decimal equivalent.

// #include <stdio.h>

// int main(){
//     char i;
//     printf("Enter a Hexadecimal: ");
//     scanf("%c", &i);
//     if ((i > 47 && i < 58) || (i > 64 && i < 71)){
//         printf("The Decimal of the entered hexadecimal is %d", i);
//     } else
//     {
//         printf("Enter a valid hexadecimal");
//     }
//     return 0;
// }






// 15. What is the difference between int and long in C?

// int is used when you need regular whole numbers, it typically take about 4 bytes of memory, whereas long is typically used when you need larger numbers, it typically takes 8 bytes of memory (on 64-bit os).





// 16. Write a program to store the result of a division operation between two integers into a float and observe the behavior.

// #include <stdio.h>

// int main(){
//     int a = 5;
//     int b = 11;
//     float result;
//     result = (float) a / b;
//     printf("%f", result);
//     return 0;
// }




// 17. Explain the role of void data type and give an example.

//  the void data type plays a special role because it is used to represent the absence of a value or to indicate that a function does not return any value.


// #include <stdio.h>

// // Function that takes an integer and prints a message (no return value)
// void printMessage(int num) {
//     printf("The number is: %d\n", num);
// }

// int main() {
//     printMessage(10);  // Call the function
//     return 0;
// }


// We call the function, which performs an action but does not provide any value back.





// 18. Write a program that reads a char and prints it as an integer using typecasting.


// #include <stdio.h>

// int main(){
//     char ch = 'b';
//     int a = (int)ch;
//     printf("%d", a);
//     return 0;
// }





// 19. Write a program to demonstrate type conversion during an arithmetic operation. 


// #include <stdio.h>

// int main(){
//     int a = 3;
//     int b = 5;
//     float pro = (float)a * b;
//     printf("%.2f",pro);
//     return 0;
// }





// 20. Explain what happens when an int is assigned a value greater than its limit and demonstrate it through a program.

// When an int is assigned a value greater than it's limit, integer overflow occurs where when a value exceeds the maximum value that the data type can store, it provide a garbage value which is a negative or a very small value.

// #include <stdio.h>

// int main() {
//     int a =  2147483647;
//     printf("Original value of a: %d\n", a);
//     a = a + 1;  // Adding 1 to INT_MAX causes overflow
//     printf("Value of a after overflow: %d\n", a);
//     return 0;
// }





// 21. Write a program to demonstrate the use of arithmetic operators in C.

// #include <stdio.h>

// int main() {
//     int a = 10, b = 3;
//     float x = 5.5, y = 2.0;
//     // Using integer arithmetic operators
//     printf("Addition: %d\n",a + b);
//     printf("Subtraction: %d\n",a - b);
//     printf("Multiplication: %d\n",a * b);
//     printf("Division: %d\n",a / b);
//     printf("Modulus: %d\n",a % b);

//     // Using floating-point arithmetic operators
//     printf("Floating-point Addition: %.2f\n",x + y);
//     printf("Floating-point Division: %.2f\n",x / y);
//     return 0;
// }





// 22. What is the difference between ++i and i++? Demonstrate it with a program

// Both operators are for increasing the value of i but they differ in when they increase the value of i.

// ++i (pre-increment operator)
// Increments the value of i first and then returns the incremented value.

// i++ (post-increment operator)
// Returns the current value of i, and then increments i after the value is used in the expression.

// #include <stdio.h>

// int main() {
//     int i = 5;
//     // Pre-increment
//     printf("%d\n", i); // 5
//     printf("%d\n", ++i);  // 6
//     // Post-increment
//     printf("%d\n", i++); // 6
//     printf("%d\n", i); // 7
//     return 0;
// }





// 23. Write a program to swap two variables using bitwise XOR
// skipped



// #include <stdio.h>

// int main() {
//     int a = 1, b = 2;
//     a = a ^ b;  // Step 1: a now holds the result of a ^ b
//     b = a ^ b;  // Step 2: b now holds the original value of a
//     a = a ^ b;  // Step 3: a now holds the original value of b
//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }



// 24. Write a program to find the maximum of two numbers using the conditional (ternary) operator.


// #include <stdio.h>

// int main(){
//     int a = 8;
//     int b = 54;
//     a > b ? printf("%d", a) : printf("%d", b);
//     return 0;
// }





// 25. Explain the difference between == and = operators with an example.

// == is used as an equality  operator whereas = is an assignment operator.

// #include <stdio.h>

// int main(){
//     int i = 12; // 12
//     int n = 1;
//     if (i == n)
//     {
//         printf("%d", i);
//     }
//     else
//     {
//         printf("%d", n); // 1
//     }
//     return 0;
// }





// 26. Write a program to check whether a number is even or odd using bitwise operators.

// determine whether a number is even or odd using bitwise operators by checking the least significant bit (LSB) of the number. if lsb is 0 then it is even else it is odd.
// This can be efficiently checked using the bitwise AND (&) operator. Specifically, the expression num & 1 will give 0 for even and 1 for odd.

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num & 1) {
//         printf("%d is odd.\n", num);
//     } else {
//         printf("%d is even.\n", num);
//     }
//     return 0;
// }





// 27. Write a program that shifts a number left and right using the bitwise shift operator.


// #include <stdio.h>

// int main() {
//     int num, ls, rs;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Enter the number of positions to shift left: ");
//     scanf("%d", &ls);
//     // printf("Enter the number of positions to shift right: ");
//     // scanf("%d", &rs);

//     // Left Shift
//     int lsResult = num << ls;
//     printf("After left shifting by %d positions: %d\n", ls, lsResult);

//     // Right Shift
//     // int rsResult = num >> rs;
//     // printf("After right shifting by %d positions: %d\n", rs, rsResult);

//     return 0;
// }






// 28. Demonstrate the use of the sizeof operator with different data types.


// #include <stdio.h>

// int main(){
//     printf("Size of int: %zu bytes\n", sizeof(int));
//     printf("Size of float: %zu bytes\n", sizeof(float));
//     printf("Size of double: %zu bytes\n", sizeof(double));
//     printf("Size of char: %zu byte\n", sizeof(char));
//     printf("Size of long: %zu bytes\n", sizeof(long));
//     printf("Size of short: %zu bytes\n", sizeof(short));
//     return 0;
// }






// 29. Write a program to input two numbers and perform all the arithmetic operations on them.


// #include <stdio.h>

// int main() {
//     float num1, num2;
//     printf("Enter the first number: ");
//     scanf("%f", &num1);
//     printf("Enter the second number: ");
//     scanf("%f", &num2);

//     // Addition
//     printf("Addition: %.2f\n",num1 + num2);

//     // Subtraction
//     printf("Subtraction: %.2f\n",num1 - num2);

//     // Multiplication
//     printf("Multiplication: %.2f\n",num1 * num2);

//     // Division (Check if the second number is not zero to avoid division by zero)
//     printf("Division: %.2f\n",num1 / num2);

//     // Modulus
//         printf("Modulus: %d\n",(int)num1 % (int)num2);
//     return 0;
// }





// 30. Write a program to increment and decrement a variable using the ++ and -- operators.

// #include <stdio.h>

// int main(){
//     int i = 10;
//     printf("%d\n", i); // 10
//     printf("%d\n", ++i); // 11
//     printf("%d", --i); // 10
//     return 0;
// }





// 31. What is the precedence of operators in C? Provide examples of how precedence affects expressions

// precedence defines the order in which operators are evaluated in an expression. When an expression contains multiple operators, the operator precedence determines which operators are applied first.
// example of how it affects the program


// #include <stdio.h>

// int main() {
//     int result1 = 5 + 3 * 2;
//     printf("Result: %d\n", result1); // 11

//     int result2 = (5 + 3) * 2;
//     printf("Result: %d\n", result2); // 16

//     return 0;
// }

// Parentheses () have the highest precedence, so 5 + 3 is evaluated first, giving 8. Then 8 * 2 is evaluated, resulting in 16.






// 32. Write a program to compute the value of an arithmetic expression with mixed operators.

// #include <stdio.h>

// int main() {
//     int a, b, c, d;
//     int result;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);
//     printf("Enter the value of c: ");
//     scanf("%d", &c);
//     printf("Enter the value of d: ");
//     scanf("%d", &d);

//     result = a + b * c - d / b + a % d;
//     printf("The result of the expression is: %d\n", result);

//     return 0;
// }

// First, multiplication (*), division (/), and modulus (%) are evaluated.
// Then, addition and subtraction (+, -) are evaluated from left to right.






// 33. Explain the difference between logical &&, ||, and ! operators with examples.


// as follows:- 
// The logical AND (&&) operator returns true (1) if both conditions on either side of it are true. Otherwise, it returns false (0).

// #include <stdio.h>

// int main() {
//     int a = 5, b = 10;
    
//     // Using logical AND (&&)
//     if (a > 0 && b > 0) {
//         printf("Both conditions are true.\n"); // This will be printed
//     } else {
//         printf("One or both conditions are false.\n");
//     }

//     return 0;
// }

// The logical OR (||) operator returns true (1) if either of the conditions is true. If both conditions are false, it returns false (0).

// #include <stdio.h>

// int main() {
//     int a = 5, b = -10;
    
//     // Using logical OR (||)
//     if (a > 0 || b > 0) {
//         printf("At least one condition is true.\n"); // This will be printed
//     } else {
//         printf("Both conditions are false.\n");
//     }

//     return 0;
// }


// Logical not operator returns true (1) if the condition is false, and false (0) if the condition is true.

// #include <stdio.h>

// int main() {
//     int a = 5;
    
//     // Using logical NOT (!)
//     if (!(a < 0)) {
//         printf("The value of a is not negative.\n"); // This will be printed
//     } else {
//         printf("The value of a is negative.\n");
//     }

//     return 0;
// }







// 34. Write a program to find the result of a comparison between two floating-point numbers.

// #include <stdio.h>

// int main() {
//     float num1, num2;
//     printf("Enter the first floating-point number: ");
//     scanf("%f", &num1);
//     printf("Enter the second floating-point number: ");
//     scanf("%f", &num2);

//     // Compare the two numbers
//     if (num1 > num2) {
//         printf("The first number (%.2f) is greater than the second number (%.2f).\n", num1, num2);
//     } else if (num1 < num2) {
//         printf("The first number (%.2f) is less than the second number (%.2f).\n", num1, num2);
//     } else {
//         printf("Both numbers are equal (%.2f).\n", num1);
//     }

//     return 0;
// }






// 35. Demonstrate the use of the modulus operator in finding the remainder

// The modulus operator (%) is used in C to find the remainder when one number is divided by another.
// remainder = dividend % divisor;


// #include <stdio.h>

// int main() {
//     int num1 = 10, num2 = 3, remainder;
//     remainder = num1 % num2;
//     printf("The remainder when %d is divided by %d is: %d\n", num1, num2, remainder);
//     return 0;
// }





// 36. Write a program to perform bitwise AND, OR, XOR operations on two integers.


// #include <stdio.h>

// int main() {
//     int num1, num2;
//     printf("Enter the first integer: ");
//     scanf("%d", &num1);
//     printf("Enter the second integer: ");
//     scanf("%d", &num2);

//     // bitwise AND
//     int and_result = num1 & num2;

//     // bitwise OR
//     int or_result = num1 | num2;

//     // bitwise XOR
//     int xor_result = num1 ^ num2;

//     printf("Bitwise AND: %d\n", num1, num2, and_result);
//     printf("Bitwise OR: %d\n", num1, num2, or_result);
//     printf("Bitwise XOR: %d\n", num1, num2, xor_result);

//     return 0;
// }





// 37. Explain the difference between & (bitwise AND) and && (logical AND) operators with an example.

// Bitwise AND 
// It returns a new value where each bit is set to 1 if both corresponding bits of the operands are 1; otherwise, it is set to 0.

// int a = 5;   // Binary: 0101
// int b = 3;   // Binary: 0011

// int result = a & b;  // Result: 0001 (1 in decimal)
// printf("Bitwise AND result: %d\n", result);


// Logical AND 
// It evaluates two Boolean expressions (i.e., true or false) and returns true if both expressions are true, and false otherwise.

// int a = 1;  // Non-zero value, considered true
// int b = 0;  // Zero value, considered false

// if (a && b) {
//     printf("Both are true.\n");
// } else {
//     printf("At least one is false.\n");
// }






// 38. Write a program to demonstrate the use of the ternary operator for decision-making.

// It is used as a shortcut way to write simpler one liner if else fucntions.

// #include <stdio.h>

// int main() {
//     int num = 2;
//     (num > 0) ? printf("The number is positive.\n") : printf("The number is either 0 or negative.\n");

//     return 0;
// }





// 39. Explain what short-circuiting is in logical operators and demonstrate it with a program.

// short-circuiting in logical operators is refferd to stopping as soon as the result is determined wihtout calculating the remaining operands,it means that if the result of the logical operation can be determined by evaluating just the first operand, then the second operand will not be evaluated.

// In Logical And operator
// If the left operand is false, the entire expression will be false, regardless of the right operand.

// In Logical OR operator 
// If the left operand is true, the entire expression will be true, regardless of the right operand.


// #include <stdio.h>

// int main() {
//     int a = 0, b = 5;

//     // in logical AND (&&)
//     if (a && (b / a)) {  // The second part (b / a) will not be evaluated because a is 0.
//         printf("First condition: True\n");
//     } else {
//         printf("First condition: False\n");
//     }

//     // in logical OR (||)
//     if (a || (b / a)) {  // The second part (b / a) will not be evaluated because a is 0.
//         printf("Second condition: True\n");
//     } else {
//         printf("Second condition: False\n");
//     }

//     return 0;
// }







// 40. Write a program to calculate the result of a complex expression involving all the arithmetic operators.

// #include <stdio.h>

// int main() {
//     int a, b;
//     float result;
//     printf("Enter the first number (a): ");
//     scanf("%d", &a);
//     printf("Enter the second number (b): ");
//     scanf("%d", &b);

//     result = ((a + b) / 2.0) * 3 - (a % b) + (a / (float)b);
//     printf("The result of the complex expression is: %.2f\n", result);

//     return 0;
// }




// 41. Write a program to print numbers from 1 to 100 using a for loop.

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 100; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }





// 42. Write a program to calculate the factorial of a number using a for loop.

// #include <stdio.h>

// int main(){
//     int n = 5;
//     int fac = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fac *= i;
//     }
//     printf("factorial is: %d", fac);
//     return 0;
// }






// 43. Write a program to print the Fibonacci sequence up to a given number of terms using a while loop.


// #include <stdio.h>

// int main(){
//     int n = 10, a = 0, b =1, nextTerm;
//     printf("Fibonacci sequence: %d, %d, ", a,b);

//     int i = 3;

//     while (i <= n)
//     {
//         nextTerm = a + b;
//         printf("%d, ", nextTerm);
//         a = b;
//         b = nextTerm;
//         i++;
//     }
//     return 0;
// }







// 44. Explain the syntax of a do-while loop and write a program to print numbers from 10 to 1.

// The do while loop in c is used to run a program repeatedly under a specified condition, the loop runs until the condition is true. the thing that separates do while loop from other loops is that it atleast runs once as in the do while loop syntax we can see first the code is executed after which the condition is checked.

// #include <stdio.h>

// int main(){
//     int i = 10;
//     do
//     {
//         printf("%d\n", i);
//         i--;
//     } while (i);
    
//     return 0;
// }






// 45. Write a program to check whether a given number is prime using a for loop.

// #include <stdio.h>

// int main() {
//     int number;
//     int isPrime = 1;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     for (int i = 2; i < number; i++) {  
//         if (number % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime) {
//         printf("%d is prime.\n", number);
//     } else {
//         printf("%d is not prime.\n", number);
//     }

//     return 0;
// }






// 46. Write a program to find the sum of digits of a number using a while loop.


// #include <stdio.h>

// int main() {
//     int number, sum = 0, remainder;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number != 0) {
//         remainder = number % 10;  // Get the last digit
//         sum += remainder;         // Add it to sum
//         number /= 10;             // Remove the last digit
//     }

//     // Output the result
//     printf("Sum of digits: %d\n", sum);

//     return 0;
// }






// 47. Write a program to reverse a given number using a while loop.

// #include<stdio.h>

// int main(){
//     int number, reversed = 0,remainder;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     while (number != 0)
//     {
//         remainder = number % 10;
//         reversed = reversed * 10 + remainder;
//         number /= 10;
//     }
//     printf("Reversed number: %d\n", reversed);

//     return 0;
// }






// 48. Write a program to calculate the sum of the first n natural numbers using a for loop.


// #include<stdio.h>

// int main() {
//     int n = 10, sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }
//     printf("Sum of the first %d natural numbers is: %d\n", n, sum);

//     return 0;
// }




// 49. Write a program to print the multiplication table of a given number using a for loop.


// #include<stdio.h>

// int main() {
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     for (int i = 1; i <= 10; i++) {  // Loop from 1 to 10
//         printf("%d x %d = %d\n", number, i, number * i);
//     }

//     return 0;
// }







// 50. Write a program to print all the even numbers between 1 and 50 using a for loop


// #include<stdio.h>

// int main() {
//     for (int i = 2; i <= 50; i += 2) { 
//         printf("%d ", i);
//     }

//     return 0;
// }







// 51. Write a program to find the sum of all odd numbers between 1 and 100 using a while loop.

// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int i = 1;

//     while (i <= 100) {
//         sum += i;
//         i += 2;
//     }

//     printf("The sum of all odd numbers between 1 and 100 is: %d\n", sum);

//     return 0;
// }







// 52. Write a program to print a pyramid pattern of stars using nested for loops.
// try again



// #include <stdio.h>

// int main() {
//     int rows;
//     printf("Enter the number of rows for the pyramid: ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++) {
        
//         for (int j = 1; j <= rows - i; j++) {
//             printf(" ");
//         }

//         for (int k = 1; k <= (2 * i - 1); k++) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }





// 53. Write a program to calculate the power of a number using a for loop.
// do again

// #include <stdio.h>

// int main() {
//     int base, exponent;
//     int result = 1;
//     printf("Enter the base: ");
//     scanf("%d", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);

//     for (int i = 1; i <= exponent; i++) {
//         result *= base;
//     }

//     printf("%d raised to the power of %d is: %d\n", base, exponent, result);

//     return 0;
// }





// 54. Write a program to check whether a number is an Armstrong number using a while loop.

#include <stdio.h>
#include<math.h>

int main(){
    int d1 = 153, digit, sum = 0, count = 0, n = 153;
    while (n >0)
    {
        n = n /10;
        count ++;
    }
    n = 153;
    printf("%d\n", count);

    while (d1 > 0)
    {
        digit = d1 % 10; 
        sum = sum + pow(digit, count);
        d1 = d1/10;
    }
    printf("%d\n", sum);
    if (sum == n)
    {
        printf("aramstrong");
    }
    else
    {
        printf("nhi hai");
    }
    
    return 0;
}

