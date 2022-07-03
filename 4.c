#include <stdio.h>
int main (void) {

	printf ("Booting up COS.\n");
	printf ("Booting up COS..\n");
	printf ("Booting up COS...\n");
	printf ("Booting up COS.\n");
	printf ("Booting up COS..\n");
	printf ("Booting up COS...\n");
	printf ("Booting up COS.\n");
	printf ("Booting up COS..\n");
	printf ("Booting up COS...\n\n");
	printf ("Which user? (Type Number)\n");
	printf ("Ian\n");
	printf ("Guest\n");
	
	int user, program;

	scanf ("%i", &user);

	if ( user == 1 || user == 2 ) {
		printf ("Welcome!\n");

		printf ("	Which program?\n");
		printf ("	1. Math\n");
		printf ("	2. PaintINDEV\n");
		printf ("	3. GamesIndev\n");
		printf ("	4. Other ProgramsINDev\n");
		printf ("	Exit?\n");
		
		scanf ("%i", &program);

		if ( program == 1 ) {
			char operator;
			double firstNumber,secondNumber;
			printf("Type operator (+, -, *,): ");
			scanf(" %c", &operator);
 
			printf("Type two numbers: ");
			scanf("%lf %lf",&firstNumber, &secondNumber);
 
			switch(operator)
			{
			case '+':
			printf("%.1lf + %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber + secondNumber);
			break;
 
			case '-':
			printf("%.1lf - %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber - secondNumber);
			break;
 
			case '*':
			printf("%.1lf * %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber * secondNumber);
			break;
 
			case '/':
			printf("%.1lf / %.1lf = %.1lf\n",firstNumber, secondNumber, firstNumber / secondNumber);
			break;
 
			// operator doesn't match any case constant (+, -, *, /)
			default:
			printf("Error! operator is not correct");
			}
		}
	} else
		printf ("Wrong user.\n");

return 0;
}
