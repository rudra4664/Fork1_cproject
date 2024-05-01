#include <stdio.h>

int main() {
    int num1, num2, num3, biggest;

    // Input three numbers from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume num1 is the biggest initially
    biggest = num1;

    // Compare with num2
    if (num2 > biggest) {
        biggest = num2;
    }

    // Compare with num3
    if (num3 > biggest) {
        biggest = num3;
    }

    // Print the biggest number
    printf("The biggest number is: %d\n", biggest);

    return 0;
}
