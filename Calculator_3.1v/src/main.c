#include <stdio.h>
#include <math.h>
int main()
{
	float number1 , number2;
	char op;
	char vote;
    double base, force, result, number, squareRoot;

     printf("Calculator 3.1v Windows version by Computer Eymen\n");

     do{
     
     printf("choose a transaction sign:\n+ = addition\n - = subtraction \n x = multiplication\n : = division\n % = finding remainder\n p = Power and Exponent\n r = square squareRoot\n ==> ");
     scanf(" %c",&op);


       switch(op){

       case '+':
       	printf("Enter the first number: ");
     while(scanf(" %f",&number1)!= 1){
        printf("Invalid! Enter the number: ");
        while(getchar() != '\n');
     }

      printf("Enter the second number: ");
      while(scanf(" %f", &number2) != 1) {
    printf("Invalid! Enter the number: ");
    while(getchar() != '\n'); 
     } 

        printf("Result: %.2f\n", number1 + number2);
        break;   
       
       case '-':
       	
       printf("Enter the first number: ");
     while(scanf(" %f",&number1)!= 1){
        printf("Invalid! Enter the number: ");
        while(getchar() != '\n');
     }

      printf("Enter the second number: ");
      while(scanf(" %f", &number2) != 1) {
    printf("Invalid! Enter the number: ");
    while(getchar() != '\n'); 
     } 


        printf("Result: %.2f\n", number1 - number2);
       	break;

       case 'x':
       	 
         printf("Enter the first number: ");
     while(scanf(" %f",&number1)!= 1){
        printf("Invalid! Enter the number: ");
        while(getchar() != '\n');
     }

      printf("Enter the second number: ");
      while(scanf(" %f", &number2) != 1) {
    printf("Invalid! Enter the number: ");
    while(getchar() != '\n'); 
     } 


        printf("Result: %.2f\n", number1 * number2);
       	break;

       case ':':
       	
        printf("Enter the first number: ");
     while(scanf(" %f",&number1)!= 1){
        printf("Invalid! Enter the number: ");
        while(getchar() != '\n');
     }

      printf("Enter the second number: ");
      while(scanf(" %f", &number2) != 1) {
    printf("Invalid! Enter the number: ");
    while(getchar() != '\n'); 
     } 


        if((int)number2 != 0)
       	printf("Result: %.2f\n",number1 / number2);
       	 else
       	 	printf("Error: Div by zero");
       	 break;

       case '%':
       	 
    printf("Enter the first number: ");
     while(scanf(" %f",&number1)!= 1){
        printf("Invalid! Enter the number: ");
        while(getchar() != '\n');
     }

      printf("Enter the second number: ");
      while(scanf(" %f", &number2) != 1) {
    printf("Invalid! Enter the number: ");
    while(getchar() != '\n'); 
     } 



        if((int)number2 != 0)
       	printf("Result: %.2f\n",(int)number1 % (int)number2);
       	 else
       	 	printf("Error:Mod by zero");
       	 break;

       	case 'p':

       		printf("Enter the base value: ");
            while(scanf("%lf", &base) != 1){
            	printf("Invalid! Enter the number: ");
            	while(getchar() != '\n');
            }
            printf("Enter the force value: ");
            while(scanf("%lf", &force) != 1){
            	printf("Invalid! Enter the number: ");
            	while(getchar() != '\n');
            } 

            result = pow(base,force);
            printf("%.2lf ^ %.2lf = %.2lf", base , force , result);
            break;
            
            case 'r':

            printf("Enter the number whose square root will be calculated: ");
            while(scanf("%lf",&number) != 1){
            	printf("Invalid! Enter the number: ");
            	while(getchar() != '\n');
            }
             squareRoot = sqrt(number);

             printf("Square root of number %.2lf = %.2lf", number, squareRoot);
             break;
             

             default:
             	printf("Error: Invalid operator.\n");
                break;
        }

        // Ask the user if they want to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &vote);

    } while (vote == 'y' || vote == 'Y'); // Repeat loop if answer is 'y' or 'Y'

    // Final message and wait for user to press enter before closing
    printf("Press Enter to close.");
    getchar();
    getchar();

    return 0;



}	