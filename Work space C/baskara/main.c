#include <stdio.h>
#include <math.h>
//Fazer um programa para ler os tr�s coeficientes de uma equa��o do segundo grau. Usando a f�rmula
//de Baskara, calcular e mostrar os valores das ra�zes x1 e x2 da equa��o com quatro casas decimais,
//conforme exemplo. Se a equa��o n�o possuir ra�zes reais, mostrar uma mensagem.

int main()
{
   double a, b, c, x1, x2, delta;

   printf("Digite os elementos da equacao: \n");
   printf("Coeficiente (a):");
   scanf("%lf", &a);
   printf("Coeficiente (b):");
   scanf("%lf", &b);
   printf("Coeficiente (c):");
   scanf("%lf", &c);
   printf("\n");

   delta = b * b - 4 * a * c;

   if (a == 0 || delta < 0)
   {   printf("Esta equacao nao possui raizes reais.\n");
   }
   else
   {
       x1 = (- b + sqrt(delta)) / (2 * a);
       x2 = (- b - sqrt(delta)) / (2 * a);
       printf("%.4lf\n", x1);
       printf("%.4lf\n", x2);
   }
   system("pause");

   return 0;
}
