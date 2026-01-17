// Simple Calculator
// Language: C
// Author: Mayank
// Description: Menu-driven calculator program


#include<stdio.h>

int main() {
    int n=0;
    int a,b;

    while(1){
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

        printf("Enter your choice 1-5: \n");
        scanf("%d",&n);



        if(n==1){
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf(" %d + %d = %d\n\n",a,b,a+b);
        } 
        
        else if(n==2){
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf(" %d - %d = %d\n\n",a,b,a-b);
        }
        else if(n==3){
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            printf(" %d * %d = %d\n\n",a,b,a*b);
        }
        else if(n==4){
            printf("Enter first number: \n");
            scanf("%d",&a);
            printf("Enter second number: \n");
            scanf("%d",&b);
            if(b==0){
                printf("Division by zero is not allowed.\n\n");
            }
            else{
                printf(" %d / %d = %d\n\n",a,b,a/b);
            }  
        }
        else if(n==5){
            printf("Exited Successfully.\n");
            return 0;
        }
        else{
            printf("Invalid input please enter 1-5 : \n");
            continue;
        }
  

    }
    return 0 ;
}