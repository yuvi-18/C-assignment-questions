
// Q1 Develop a program about fundamental Data types C Programming. (Le., int, float and char types).
// #include <stdio.h>


// int main() {
//     int integerVar = 10;
//     printf("Integer Value: %d\n", integerVar);

//     float floatVar = 3.14;
//     printf("Float Value: %.2f\n", floatVar);

//     char charVar = 'A';
//     printf("Character Value: %c\n", charVar);

//     int sumInt = integerVar + 5;
//     printf("Sum of Integer Value and 5: %d\n", sumInt);

//     float productFloat = floatVar * 2.0;
//     printf("Product of Float Value and 2.0: %.2f\n", productFloat);

//     char nextChar = charVar + 1;
//     printf("Next Character after '%c': %c\n", charVar, nextChar);

//     return 0;
// }




// Q2 Write a C program that calculates the Simple Interest and Compound Interest. The Principal, Amount, Rate of Interest 
// and Time are entered through the keyboard.



// #include <stdio.h>
// #include <math.h>

// int main() {
//     // Declare variables
//     float principal, rate, time, amount, simpleInterest, compoundInterest;

//     // Get user input for Principal, Rate, Time, and Amount
//     printf("Enter the Principal amount: ");
//     scanf("%f", &principal);

//     printf("Enter the Rate of Interest (in percentage): ");
//     scanf("%f", &rate);

//     printf("Enter the Time (in years): ");
//     scanf("%f", &time);

//     // Calculate Simple Interest
//     simpleInterest = (principal * rate * time) / 100;

//     // Calculate Compound Interest using the formula: A = P(1 + r/n)^(nt)
//     // For simplicity, we assume the interest is compounded annually (n = 1)
//     amount = principal * pow((1 + rate / 100), time);
//     compoundInterest = amount - principal;

//     // Output the results
//     printf("\nSimple Interest: %.2f\n", simpleInterest);
//     printf("Compound Interest: %.2f\n", compoundInterest);

//     return 0;
// }




// Q3 Write a C program to demonstrate various type conversions.

// #include <stdio.h>

// int main() {
//     // Implicit Type Conversion (Automatic Conversion)
//     int integerVar = 10;
//     float floatVar = 5.5;
    
//     // Implicit conversion (int to float)
//     float result1 = integerVar + floatVar;
//     printf("Implicit Conversion (int + float = float): %.2f\n", result1);

//     // Explicit Type Conversion (Type Casting)
//     // Cast float to int
//     int result4 = (int) floatVar;  // Explicitly cast float to int (decimal part is discarded)
//     printf("Explicit Conversion (float to int): %d\n", result4);

//     return 0;
// }



// Q4 write a program that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
// Between:-

// 90-100% - Print "A"

// 80-90% - Print "B

// 60-80% - Print 'C'

// Below 60% - Print 'D'




// #include <stdio.h>

// int main() {
//     // Declare variables for marks and the percentage
//     float marks[5], total = 0, percentage;
//     char grade;

//     // Accept marks for five subjects
//     printf("Enter the marks for 5 subjects:\n");

//     for (int i = 0; i < 5; i++) {
//         printf("Enter marks for subject %d: ", i + 1);
//         scanf("%f", &marks[i]);
//         total += marks[i];  // Add each subject's marks to total
//     }

//     // Calculate percentage
//     percentage = (total / 500) * 100;

//     // Display the percentage
//     printf("\nTotal Marks: %.2f / 500\n", total);
//     printf("Percentage: %.2f%%\n", percentage);

//     // Determine the grade based on percentage
//     if (percentage >= 90) {
//         grade = 'A';
//     } else if (percentage >= 80) {
//         grade = 'B';
//     } else if (percentage >= 60) {
//         grade = 'C';
//     } else {
//         grade = 'D';
//     }

//     // Print the grade
//     printf("Grade: %c\n", grade);

//     return 0;
// }




// Q5 Write a C program that swaps values of two variables using a third variable.


// #include <stdio.h>

// int main() {
//     // Declare two variables to store values
//     int a, b, temp;

//     // Get input values from the user
//     printf("Enter value for a: ");
//     scanf("%d", &a);

//     printf("Enter value for b: ");
//     scanf("%d", &b);

//     // Display values before swapping
//     printf("\nBefore swapping:\n");
//     printf("a = %d, b = %d\n", a, b);

//     // Swap the values using a third variable (temp)
//     temp = a;
//     a = b;
//     b = temp;

//     // Display values after swapping
//     printf("\nAfter swapping:\n");
//     printf("a = %d, b = %d\n", a, b);

//     return 0;
// }



// Q6 Write a C program to find the greatest of three numbers.


// #include <stdio.h>

// int main() {
//     // Declare three variables to store the numbers
//     int num1, num2, num3;

//     // Get input values from the user
//     printf("Enter three numbers:\n");
//     printf("Enter number 1: ");
//     scanf("%d", &num1);
//     printf("Enter number 2: ");
//     scanf("%d", &num2);
//     printf("Enter number 3: ");
//     scanf("%d", &num3);

//     // Find the greatest number using if-else
//     if (num1 >= num2 && num1 >= num3) {
//         printf("\nThe greatest number is: %d\n", num1);
//     } else if (num2 >= num1 && num2 >= num3) {
//         printf("\nThe greatest number is: %d\n", num2);
//     } else {
//         printf("\nThe greatest number is: %d\n", num3);
//     }

//     return 0;
// }



// Q7 Write a C program that tells whether a given year is a leap year or not

// #include <stdio.h>

// int main() {
//     int year;

//     // Get input year from the user
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     // Check if the year is a leap year
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a Leap Year.\n", year);
//     } else {
//         printf("%d is not a Leap Year.\n", year);
//     }

//     return 0;
// }



// Q8 Write a C program to find the factorial of a given number.


// #include <stdio.h>

// int main() {
//     int n, fact = 1;

//     // Get input from user
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Calculate factorial
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }

//     // Output the result
//     printf("Factorial of %d is %d\n", n, fact);

//     return 0;
// }



/*
Q9  Write a C program to print sum of even and odd numbers from 1 to N numbers


#include <stdio.h>

int main() {
    int N, evenSum = 0, oddSum = 0;

    // Get input for N
    printf("Enter a number N: ");
    scanf("%d", &N);

    // Loop through numbers from 1 to N and calculate the sum of even and odd numbers
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            evenSum += i;  // Add to evenSum if the number is even
        } else {
            oddSum += i;   // Add to oddSum if the number is odd
        }
    }

    // Output the results
    printf("Sum of even numbers from 1 to %d: %d\n", N, evenSum);
    printf("Sum of odd numbers from 1 to %d: %d\n", N, oddSum);

    return 0;
}

*/


// Q10 Write a C program to print the Fibonacci series.



// #include <stdio.h>

// int main() {
//     int terms, first = 0, second = 1, next;

//     // Get input from the user for number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &terms);

//     // Print the first two terms of the Fibonacci series
//     printf("Fibonacci Series: ");

//     // Handle the case when terms is less than or equal to 0
//     if (terms <= 0) {
//         printf("Please enter a positive integer greater than 0.\n");
//     } else if (terms == 1) {
//         printf("%d\n", first);  // Only print the first term
//     } else {
//         // Print the first two terms
//         printf("%d %d ", first, second);

//         // Calculate and print the next terms in the series
//         for (int i = 3; i <= terms; i++) {
//             next = first + second;
//             printf("%d ", next);

//             // Update first and second for the next iteration
//             first = second;
//             second = next;
//         }
//         printf("\n");
//     }

//     return 0;
// }





// Q11 Write a C program to check whether the entered number is prime or not.


// #include <stdio.h>

// int main() {
//     int number, i, isPrime = 1;

//     // Get input from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Check if the number is less than or equal to 1, as prime numbers are greater than 1
//     if (number <= 1) {
//         isPrime = 0;
//     } else {
//         // Check if the number is divisible by any number from 2 to sqrt(number)
//         for (i = 2; i * i <= number; i++) {
//             if (number % i == 0) {
//                 isPrime = 0;  // Number is not prime if it is divisible by i
//                 break;
//             }
//         }
//     }

//     // Output result
//     if (isPrime) {
//         printf("%d is a prime number.\n", number);
//     } else {
//         printf("%d is not a prime number.\n", number);
//     }

//     return 0;
// }



// Q12 Write a C program to find the sum of digits of the entered number.


// #include <stdio.h>

// int main() {
//     int number, sum = 0;

//     // Get input from the user
//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // If the number is negative, make it positive for simplicity
//     if (number < 0) {
//         number = -number;
//     }

//     // Calculate the sum of digits
//     while (number != 0) {
//         sum += number % 10;  // Add the last digit to sum
//         number /= 10;         // Remove the last digit
//     }

//     // Output the result
//     printf("Sum of digits: %d\n", sum);

//     return 0;
// }




// Q13 Write a C program to find the minimum and maximum element of the array.


// #include <stdio.h>

// int main() {
//     int n;

//     // Get the number of elements in the array
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     // Declare an array of size n
//     int arr[n];

//     // Input array elements
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize min and max variables with the first element of the array
//     int min = arr[0], max = arr[0];

//     // Traverse the array to find min and max
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];  // Update min if current element is smaller
//         }
//         if (arr[i] > max) {
//             max = arr[i];  // Update max if current element is larger
//         }
//     }

//     // Output the results
//     printf("Minimum element in the array: %d\n", min);
//     printf("Maximum element in the array: %d\n", max);

//     return 0;
// }

