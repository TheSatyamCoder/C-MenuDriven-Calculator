#include <stdio.h>

// Function Prototypes. 
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
void mod(int a, int b);
void average(float a, float b);

int main() {
    float a, b;
    int choice;

    while (1) {
        printf("\n------ Calculator Application ------\n");
        printf(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Mod\n 6. Average\n 7. Exit\n");
        printf("Select your Operation (1–7): ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // clear invalid input
            printf("❌ Invalid choice. Please enter a number.\n");
            continue;
        }

        if (choice == 7) {
            printf("Calculator Closed. Thank you!\n");
            break;
        }

        printf("Enter the first number: ");
        if (scanf("%f", &a) != 1) {
            while (getchar() != '\n');
            printf("❌ Invalid input.\n");
            continue;
        }

        printf("Enter the second number: ");
        if (scanf("%f", &b) != 1) {
            while (getchar() != '\n');
            printf("❌ Invalid input.\n");
            continue;
        }

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

// Function Definitions. 
void add(float a, float b) { printf("Addition = %.2f\n", a + b); }
void subtract(float a, float b) { printf("Subtraction = %.2f\n", a - b); }
void multiply(float a, float b) { printf("Multiplication = %.2f\n", a * b); }
void divide(float a, float b) {
    if (b == 0) printf("❌ Cannot divide by 0!\n");
    else printf("Division = %.2f\n", a / b);
}
void mod(int a, int b) {
    if (b == 0) printf("❌ Cannot perform modulus by 0!\n");
    else printf("Modulus = %d\n", a % b);
}
void average(float a, float b) { printf("Average = %.2f\n", (a + b) / 2); }
