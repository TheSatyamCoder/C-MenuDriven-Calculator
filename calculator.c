#include <stdio.h>

// Function Prototypes (Declared above main)
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
void mod(int a, int b);
void average(float a, float b);

int main() {
    float a, b;       // To store user input numbers
    int choice;       // To store user's operation choice

    while (1) {
        // Displaying menu to the user
        printf("\n------ Calculator Application ------\n");
        printf(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Mod\n 6. Average\n 7. Exit\n");

        // Asking user to select an operation
        printf("Select your Operation (1–7): ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // Clear wrong input from buffer
            printf("❌ Invalid choice. Please enter a number.\n");
            continue;
        }

        // If user chooses to exit
        if (choice == 7) {
            printf("Calculator Closed. Thank you!\n");
            break;
        }

        // Taking first number input
        printf("Enter the first number: ");
        if (scanf("%f", &a) != 1) {
            while (getchar() != '\n');
            printf("❌ Invalid input. Please enter a valid number.\n");
            continue;
        }

        // Taking second number input
        printf("Enter the second number: ");
        if (scanf("%f", &b) != 1) {
            while (getchar() != '\n');
            printf("❌ Invalid input. Please enter a valid number.\n");
            continue;
        }

        // Performing the operation based on user choice
        switch (choice) {
            case 1: add(a, b); break;
            case 2: subtract(a, b); break;
            case 3: multiply(a, b); break;
            case 4: divide(a, b); break;
            case 5: mod((int)a, (int)b); break;
            case 6: average(a, b); break;
            default:
                printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

// ------- Operation Functions -------

// Adds two numbers
void add(float a, float b) {
    printf("Addition = %.2f\n", a + b);
}

// Subtracts second number from first
void subtract(float a, float b) {
    printf("Subtraction = %.2f\n", a - b);
}

// Multiplies two numbers
void multiply(float a, float b) {
    printf("Multiplication = %.2f\n", a * b);
}

// Divides first number by second, handles divide by zero
void divide(float a, float b) {
    if (b == 0)
        printf("❌ Cannot divide by 0!\n");
    else
        printf("Division = %.2f\n", a / b);
}

// Finds modulus (remainder), works only on integers
void mod(int a, int b) {
    if (b == 0)
        printf("❌ Cannot perform modulus by 0!\n");
    else
        printf("Modulus = %d\n", a % b);
}

// Calculates average of two numbers
void average(float a, float b) {
    printf("Average = %.2f\n", (a + b) / 2);
}
