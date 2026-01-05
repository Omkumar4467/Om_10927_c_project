#include <stdio.h>

int main() {
    int choice;
    int num, power, i;
    int result;
    char repeat;

    do {
        // Step 2: Display menu
        printf("\n--- Menu-Driven Scientific Calculator ---\n");
        printf("1. Square of a number\n");
        printf("2. Cube of a number\n");
        printf("3. Power of a number\n");
        printf("Enter your choice (1-3): ");

        // Step 3 & 4: Take user choice
        scanf("%d", &choice);

        // Step 6: Switch-case
        switch (choice) {

            case 1:
                // Square
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num;   // Step 7
                printf("Square of %d is %d\n", num, result);
                break;

            case 2:
                // Cube
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num * num;   // Step 7
                printf("Cube of %d is %d\n", num, result);
                break;

            case 3:
                // Power
                printf("Enter base number: ");
                scanf("%d", &num);
                printf("Enter power: ");
                scanf("%d", &power);

                result = 1;
                for (i = 1; i <= power; i++) {   // Step 8
                    result = result * num;
                }

                printf("%d raised to the power %d is %d\n", num, power, result);
                break;

            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

        // Step 10: Repeat option
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("\nThank you for using the calculator!\n");
    return 0;
}
