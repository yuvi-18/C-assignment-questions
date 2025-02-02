#include <stdio.h>

// Function to convert temperature
void convertTemperature() {
    float temp, converted;
    int option;

    printf("\n--- Temperature Conversion ---\n");
    printf("1: Celsius to Fahrenheit\n");
    printf("2: Fahrenheit to Celsius\n");
    printf("3: Celsius to Kelvin\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    switch (option) {
        case 1:
            converted = (temp * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp, converted);
            break;
        case 2:
            converted = (temp - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp, converted);
            break;
        case 3:
            converted = temp + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", temp, converted);
            break;
        default:
            printf("Invalid choice! Returning to main menu.\n");
    }
}

// Function to convert currency
void convertCurrency() {
    float amount, converted;
    int option;

    printf("\n--- Currency Conversion ---\n");
    printf("1: USD to INR\n");
    printf("2: EUR to INR\n");
    printf("3: INR to USD\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    printf("Enter the amount: ");
    scanf("%f", &amount);

    switch (option) {
        case 1:
            converted = amount * 86.0; // Example rate: 1 USD = 82 INR
            printf("%.2f USD = %.2f INR\n", amount, converted);
            break;
        case 2:
            converted = amount * 90.0; // Example rate: 1 EUR = 90 INR
            printf("%.2f EUR = %.2f INR\n", amount, converted);
            break;
        case 3:
            converted = amount / 82.0; // Example rate: 1 INR = 0.0122 USD
            printf("%.2f INR = %.2f USD\n", amount, converted);
            break;
        default:
            printf("Invalid choice! Returning to main menu.\n");
    }
}

// Function to convert mass
void convertMass() {
    float mass, converted;
    int option;

    printf("\n--- Mass Conversion ---\n");
    printf("1: Kilograms to Pounds\n");
    printf("2: Pounds to Kilograms\n");
    printf("3: Kilograms to Grams\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    printf("Enter the mass: ");
    scanf("%f", &mass);




    switch (option) {
        case 1:
            converted = mass * 2.20462;
            printf("%.2f Kilograms = %.2f Pounds\n", mass, converted);
            break;
        case 2:
            converted = mass / 2.20462;
            printf("%.2f Pounds = %.2f Kilograms\n", mass, converted);
            break;
        case 3:
            converted = mass * 1000.0;
            printf("%.2f Kilograms = %.2f Grams\n", mass, converted);
            break;
        default:
            printf("Invalid choice! Returning to main menu.\n");
    }
}

int main() {
    char choice;

    while (1) {
        // Display the menu
        printf("\n--- Unit Converter ---\n");
        printf("Choose an option:\n");
        printf("T: Convert Temperature\n");
        printf("C: Convert Currency\n");
        printf("M: Convert Mass\n");
        printf("Q: Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'T':case 't':
                convertTemperature();
                break;
            case 'C':case 'c':
                convertCurrency();
                break;
            case 'M':case 'm':
                convertMass();
                break;
            case 'Q':case 'q':
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}