#include <stdio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: \n\n");
    scanf("%lf %lf", &first, &second);

 

    switch (operator) {
    case '+':
        printf("\nRESULT\n%lf + %lf = %lf\n\n", first, second, first + second);
        break;
    case '-':
        printf("\nRESULT\n%lf - %lf = %lf\n\n", first, second, first - second);
        break;
    case '*':
        printf("\nRESULT\n%lf * %lf = %lf\n\n", first, second, first * second);
        break;
    case '/':
        printf("\nRESULT\n%lf / %lf = %lf\n\n", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct\n\n");
    }

 

    return 0;
}