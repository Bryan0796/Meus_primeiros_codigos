#include <stdio.h>
//Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
//e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.

int main (){

   int n, i;

   printf("Quantos numeros voce vai digitar?");
   scanf("%i", &n);

   int vet[n];

   for (i = 0; i < n; i++){
      printf("Digite um numero:");
      scanf("%i", &vet[i]);
   }

   printf("Negativos:\n");
   for (i = 0; i < n; i++){
      if (vet[i] < 0){
         printf("%i\n", vet[i]);
      }
   }
   system("pause");
   return 0;

}
