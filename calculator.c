    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        // input numbers and operators
        int num1, num2;
        char operator;

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the operator: ");
        scanf(" %c", &operator); // Added a space before %c to consume the newline character
        printf("Enter the second number: ");
        scanf("%d", &num2);

        // result variables
        int result;
        int IS_OK = 0;  // 0 means false, 1 means true

        switch (operator) {
            case '+':
                result = num1 + num2; break;
            case '-':
                result = num1 - num2; break;
            case '*':
                result = num1 * num2; break;
            case '/':
                result = num1 / num2; break;
            default: 
                IS_OK = 1;  // 1 means failed
                break;
        }

        switch (IS_OK) {
            case 0:
                printf("The result is: %d\n", result); break;
            case 1:
                printf("Operation failed.\n"); break;
        }

        return 0;
    }
