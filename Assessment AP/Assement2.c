#include<stdio.h>
int main() {
 
    int num1, num2;
    int result;
    int in;
 
    do {
 
        printf("\n***** Calculator *****\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo Division\n");
        printf("6. Exit\n");
        printf("Select a Number (1-5): ");
        scanf("%d", &in);
 
        // If 'User' Enters 6 - Stop the program.
        if(in == 6) {
            printf("Thank you for trying! Bye! \n");
            break;
        }
 
        // Take two numbers from the user
        printf("Enter Two Numbers: ");
        scanf("%d%d", &num1, &num2);
 
        switch (in)
        {
        case 1:
            printf("Addition of %d + %d = %d \n", num1, num2, num1+num2);
            break;
        case 2:
            printf("Subtraction of %d - %d = %d \n", num1, num2, num1-num2);
            break;
        case 3:
            printf("Product of %d * %d = %d \n", num1, num2, num1*num2);
            break;
        case 4:
            printf("Division of %d / %d = %d \n", num1, num2, num1/num2);
            break;
        case 5:
            printf("Division of %d %% %d = %d \n", num1, num2, num1%num2);
            break;
 
        default:
            printf("Invalid Option, Please select the valid Options\n");
            break;
        }
        
        
    } while(1);
 
    return 0;
}