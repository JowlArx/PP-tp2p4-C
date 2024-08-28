#include <stdio.h>
#include <conio.h>

int main(void) {
// Ingresa dos numeros a y b mas un operador y realiza la operacion, JowlArxDEV
	int a, b;
	char op;
	
	printf("Ingrese dos numeros y un operador:\n");
	scanf("%d %d", &a, &b);
	op = getch();
	
	if (op == '+') {
		printf("%d + %d es igual a: %d", a, b, a + b);
	} else if (op == '-') {
		printf("%d - %d es igual a: %d", a, b, a - b);
	} else if (op == '*') {
		printf("%d * %d es igual a: %d", a, b, a * b);
	} else if (op == '/') {
		if (b != 0)
			printf("%d / %d es igual a: %d", a, b, a / b);
		else
			printf("error");
	} else {
		printf("opción no válida");
	}
	
	return 0;
}

