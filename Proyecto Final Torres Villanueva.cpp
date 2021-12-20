//Realiza la suma de dos numeros
//Realiza la resta de dos numeros
//Realiza la multiplicacion de dos numeros
//Realiza la division de dos numeros
//Numeros se separan por una coma
#include<conio.h>
#include<stdio.h>
float a, b, c, d, e, f, g, h, S, R, M, D;
main()
{	
	printf("\nDale valor a los numeros a y b para sumar\n");
	scanf("%f, %f", &a, &b);
	S=a+b;
	printf("\nEl resultado de la suma es=%.2f\n", S);
	printf("\nDale valor a los numeros c y d para restar\n");
	scanf("%f, %f", &c, &d);
	R=c-d;
	printf("\nEl resultado de la resta es=%.2f\n", R);
	printf("\nDale valor a los numeros e y f para multiplicar\n");
	scanf("%f, %f", &e, &f);
	M=e*f;
	printf("\nEl resultado de la multiplicacion es=%.2f\n", M);
	printf("\nDale valor a los numeros g y h para dividir\n");
	scanf("%f, %f", &g, &h);
	D=g/h;
	printf("\nEl resultado de la division es=%.2f\n", D);
	getch();
}
