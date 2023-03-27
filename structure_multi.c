#include<stdio.h>

/* Declaring Structure */
struct multi
{
    float number;
};

int main()
{
    /* Declaring structure variable using struct complex */
    struct multi num1, num2, mul;
    printf("Enter the first number:\n");
    scanf("%f", &num1.number);
    printf("Enter the Second number:\n");
    scanf("%f", &num2.number);
    

    mul.number = (num1.number * num2.number);

    printf("PRODUCT = %0.2f", mul.number);

    return 0;
}