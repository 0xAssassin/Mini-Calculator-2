#include <stdio.h>

// Main Function
int main()
{
    char operator;
    float operand1, operand2, result;

    printf("Operators: '+', '-', 'x', '/'\n");
    printf("Enter your operation like this (12 + 37): ");
    scanf("%f %c %f", &operand1, &operator, &operand2);

    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        printf("%.2f + %.2f = %.2f\n", operand1, operand2, result);
        break;
    case '-':
        result = operand1 - operand2;
        printf("%.2f - %.2f = %.2f\n", operand1, operand2, result);
        break;
    case 'x':
    case '*':
        result = operand1 * operand2;
        printf("%.2f x %.2f = %.2f\n", operand1, operand2, result);
        break;
    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
            printf("%.2f / %.2f = %.2f\n", operand1, operand2, result);
        }
        else
        {
            printf("Error: cannot divide by zero!\n");
        }
        break;
    default:
        printf("Something Went Wrong!\n");
        break;
    }

    return 0;
}