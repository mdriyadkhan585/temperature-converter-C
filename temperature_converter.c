#include <stdio.h>

// Function prototypes
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("====================================\n");
    printf("      Temperature Converter\n");
    printf("====================================\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("====================================\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter temperature in Celsius: ");
            scanf("%f", &temperature);
            convertedTemperature = celsiusToFahrenheit(temperature);
            printf("\n%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, convertedTemperature);
            break;
        case 2:
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemperature = fahrenheitToCelsius(temperature);
            printf("\n%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, convertedTemperature);
            break;
        default:
            printf("\nInvalid choice. Please enter 1 or 2.\n");
            break;
    }

    printf("\n====================================\n");

    return 0;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
