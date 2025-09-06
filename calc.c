#include <stdio.h>
#include <float.h>

int main(){
    char op;
    double a, b, res;

    //read operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    //read the two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    //define all four operations
    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Error! Incorrect Operator Value\n");
        res = -DBL_MAX;
    }
    if(res!=-DBL_MAX)
        printf("%.2lf", res);
    
    return 0;
}