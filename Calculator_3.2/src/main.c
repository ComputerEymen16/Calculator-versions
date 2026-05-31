#include <stdio.h>

#include <math.h>

int main(){
	float num1, num2, num3, num4, num5;
    char Cont;
    char op;
    double base , forge, result, number, square_Root,power;
    int arithmetic;

    printf("By Computer Eymen\n");

    do{
    	printf(" op: \n + = Addition\n - = Subtraction\n x = Multiplication\n : = Division\n %% = Remainder\n p = exponent\n s = Square root\n a = arithmetic mean calculation\n==> ");
        scanf(" %c", &op);

        switch(op){
        case '+':
        	printf("Num1: ");
        	while(scanf(" %f",&num1) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("Num2: ");
        	while(scanf(" %f", &num2) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("result: %f",num1 + num2);
        	break;

        case '-':

        	printf("Num1: ");
        	while(scanf(" %f",&num1) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("Num2: ");
        	while(scanf(" %f",&num2) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}
             
             printf("result: %f ", num1 - num2);
             break;

         case 'x':

         	printf("Num1: ");
        	while(scanf(" %f",&num1) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("Num2: ");
        	while(scanf(" %f",&num2) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}
             
             printf("result: %f ", num1 * num2);
             break;

         case ':':
         	printf("Num1: ");
        	while(scanf(" %f",&num1) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("Num2: ");
        	while(scanf(" %f",&num2) != 1 || num2 == 0){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}
             
             printf("result: %f ", num1 / num2);
             break;

         case '%':

         	printf("Num1: ");
        	while(scanf(" %f",&num1) != 1){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}

        	printf("Num2: ");
        	while(scanf(" %f",&num2) != 1 || num2 == 0){
        		printf("Invaldid: ");
        		while(getchar() != '\n');
        	}
             
             printf("result: %f", (int)num1 % (int)num2);
             break;

         case 'p':
         	printf("Enter the base value: ");
            while(scanf(" %lf", &base) != 1){
			printf("Invaldid: ");
			while(getchar() != '\n');
			}
			printf("Enter the power value: ");
			while(scanf(" %lf",&forge) != 1){
			printf("Invaldid: ");
			while(getchar() != '\n');
			}

			result = pow(base, forge);
			printf("%.2lf ^ %.2lf = %.2lf", base, forge, result);
			break;

		case 's':
			printf("Enter the number whose square root will be calculated: ");
			while(scanf(" %lf",&number) != 1){
			printf("Sir, please enter a valid number: ");
		while(getchar() != '\n');
		}

		square_Root = sqrt(number);

		printf("The square root of %.2lf = %.2lf", number, square_Root);
		break;

	case 'a':
		

printf(" numbers to enter (2-5): ");
while(scanf(" %d",&arithmetic) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

switch(arithmetic){

case 2:
printf("Num1: ");
while(scanf(" %f",&num1) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num2: ");
while(scanf(" %f",&num2) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Result: %f", (num1 + num2) / 2);
break;

case 3:
printf("Num1: ");
while(scanf(" %f",&num1) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num2: ");
while(scanf(" %f",&num2) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Num3: ");
while(scanf(" %f",&num3) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Result: %f",(num1 + num2 + num3) / 3);
break;

case 4:
printf("Num1: ");
while(scanf(" %f",&num1) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num2: ");
while(scanf(" %f",&num2) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num3: ");
while(scanf(" %f",&num3) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num4: ");
while(scanf(" %f",&num4) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Result: %f",(num1 + num2 + num3 + num4) / 4);
break;

case 5:

printf("Num1: ");
while(scanf(" %f",&num1) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Num2: ");
while(scanf(" %f",&num2) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Num3: ");
while(scanf(" %f",&num3) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Num4: ");
while(scanf(" %f",&num4) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}
printf("Num5: ");
while(scanf(" %f",&num5) != 1){
printf("Invaldid: ");
while(getchar() != '\n');
}

printf("Result: %f", (num1 + num2 + num3 + num4 + num5) / 5);
break;

}
}
printf("\n continue (y/n): ");
scanf(" %c", &Cont);

} while (Cont == 'y' || Cont == 'Y'); // Returns to the beginning if 'y' or 'y' is pressed

printf("\nThe program is closing... !\n"); 
printf("Close on the Enter...");
getchar(); 
getchar(); 
return 0;
}
    

