#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    result = a / b;
                else {
                    printf("Error! Division by zero.\n");
                    break;
                }
                printf("Result = %.2f\n", result);
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 5);

    return 0;
}
