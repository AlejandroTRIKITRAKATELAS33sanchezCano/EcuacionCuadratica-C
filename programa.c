// Autor: Sanchez Cano Alejandro
#include <stdio.h>
#include <math.h>

void main(void)
{

    // Variables Que usaré

    double a, b, c, operacion, x1, x2, imaginario;
    a = 0;
    printf("\nHola, bienvenido al programa que te resuelve la tarea de ecuaciones cuadraticas :] \n");

    while (a == 0)
    {
        // Valor de x^2
        printf("Por favor cuantas x^2 hay en su ecuacion \n");
        scanf("%lf", &a);

        if (a == 0)
        {
            printf("\n Si no hay ninguna x^2 entonces no es una ecuacion cuadratica, por favor vuelva a meter un valor diferente de 0 :[");
        }
    }

    // Valor de X
    printf("\n Ingrese cuantas x hay en su ecuacion \n");
    scanf("%lf", &b);

    // Valor de C
    printf("\n Ingrese el valor del termino independiente \n");
    scanf("%lf", &c);

    // Condicion de si tendrá soluciones reales o no
    operacion = (pow(b, 2) - (4 * a * c));

    if (operacion > 0)
    {

        printf("\n Las soluciones de la ecuacion: \n\n");
        printf("%.2lfX^2 + %.2lfX + %.2lf", a, b, c);
        printf("\nSon:\n\n");

        x1 = ((b * -1 + pow(operacion, 0.5)) / 2 * a);
        x2 = ((b * -1 - pow(operacion, 0.5)) / 2 * a);

        printf("X1 = %lf \n\n", x1);
        printf("X2 = %lf \n\n", x2);
    }
    else
    {
        printf("\n Las soluciones de la ecuacion: \n\n");
        printf("%.2lfX^2 + %.2lfX + %.2lf", a, b, c);
        printf("\nNo seran reales\n\n");

        x1 = ((pow(abs(operacion), 0.5)) / 2 * a);
        x2 = (b * -1) / 2 * a;

        printf("X1 = %lf + i%.2lf \n\n", x2, x1);
        printf("X2 = %lf - i%.2lf \n\n", x2, x1);
    }
}