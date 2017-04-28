# include <stdio.h>
# include <stdlib.h>
# include <math.h>//Contiene la funcion sqrt

int srmd();
int ecuac();

int elegir;
int resul = '0';//Se indica el valor a la variable
int valor1 = '0';
int valor2 = '0';

int main (void) 
{
    printf ("1)Operaciones basicas\n2)Ecuaciones: 2do grado (coeficientes)\n3)Salir");
    printf ("\n\n>");
    scanf ("%s", &elegir);
       
    if (elegir == '1')
       srmd();
    if (elegir == '2')
       ecuac();
    if (elegir == '3')
       exit(0);
    system("cls");
    main(); 
}

int srmd(void) 
{
    system ("cls");
    printf ("1)Sumar\n2)Restar\n3)Multiplicar\n4)Dividir");
    printf ("\n\n>");
    scanf ("%s", &elegir);
    
    system ("cls");
       
    printf("Escribe el valor 1:\n\n\n>");           
    scanf("%d", &valor1);
    printf("Escribe el valor 2:\n\n\n>");          
    scanf("%d", &valor2);
                           
    if (elegir == '1'){
       resul = valor1 + valor2;
       printf("%d + %d = %d\n\n", valor1, valor2, resul);
    }
    if (elegir == '2'){
       resul = valor1 - valor2;
       printf("%d - %d = %d\n\n", valor1, valor2, resul);
    }
    if (elegir == '3'){
       resul = valor1 * valor2;
       printf("%d * %d = %d\n\n", valor1, valor2, resul);
    }
    if (elegir == '4'){
       resul = valor1 / valor2;
       printf("%d / %d = %d\n\n", valor1, valor2, resul);
    }
                
    system("pause");                      
}
                           
                           
int ecuac(void)
{//operaciones para resolver ecuacion de segundo grado
    double a, b, c, d, x1, x2;
       
    system ("cls");
       
    printf ("Introducir los valores de a, b y c separados con un espacio");
    printf ("\n\n>");
    scanf ("%lf %lf %lf", &a, &b, &c);
       
    de = b * b - 4 * a * c;
       
    if (d < 0)
       printf("No se puede resolver, las raices son complejas\n"); //la  ecuacion debe dar 0, sino no funciona (Xcuadrado(A) - 2X(B) -3(C) =0  funciona porque x=3)
    //calculando
    de = sqrt(d);
    x1 = (-b +d) / (2 * a);
    x2 = (-b -d) / (2 * a);
    
    printf ("x1= %g\nx2= %g\n\n", x1, x2);
       
    system("pause"); 
}
