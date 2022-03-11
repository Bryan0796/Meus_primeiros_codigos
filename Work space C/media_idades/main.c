#include <stdio.h>
//Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
//indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
//e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
//mostrar a mensagem "IMPOSSIVEL CALCULAR".
int main()
{
    int idade, cont, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    cont = 0;
    soma = 0;

    while (idade > 0 ){
       soma = soma + idade;
       cont = cont + 1;
       scanf("%d", &idade);
    }

    if ( cont == 0){
       printf("Impossivel calcular.");
    }
    else {
       media = (double) soma / cont;
       printf("Media = %.2lf", media);
    }

    system("pause");
    return 0;
}
