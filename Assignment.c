#include <stdio.h>

int main(){

    double num1;
    double num2;
    double sum;
    double difference;


    printf("Enter the first number: \n");
    scanf("%lf", &num1);
    
    printf("Enter the second number: \n");
    scanf("%lf", &num2);

    
    sum=num1+num2;
    difference=num1-num2;

    printf("Addition result is: %.2lf \n", sum);

    printf("\nSubtraction result is: %.2lf  \n", difference);

    printf("\nSummation result and difference result are %.2lf and %.2lf respectively", sum, difference);

    return 0;

}
