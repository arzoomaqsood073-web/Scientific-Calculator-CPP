#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Operators: +, -, *, /, s (sqrt), l (log)\n");
    printf("Enter operator: ");
    // The space before %c tells C to skip the 'Enter' key from previous inputs
    scanf(" %c", &op);

    // Some operations only need one number
    if (op == 's' || op == 'l') {
        printf("Enter number: ");
        scanf("%lf", &num1);
    } else {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    // Calculation logic
    if (op == '+') result = num1 + num2;
    else if (op == '-') result = num1 - num2;
    else if (op == '*') result = num1 * num2;
    else if (op == '/') result = num1 / num2;
    else if (op == 's') result = sqrt(num1);
    else if (op == 'l') result = log10(num1);
    else {
        printf("Invalid operator!\n");
        getch();
        return 1;
    }

    // This line ensures the answer actually prints to the screen
    printf("Result: %.2lf\n", result);

    printf("Press any key to continue . . .");
    getch();
    return 0;
}

