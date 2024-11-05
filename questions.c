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

// Size of int is 4
// Size of float is 4
// Size of char is 1
// Size of double is 8


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

