Algoritmo "glicose"
// Algoritmo para ler a glicose da pessoa e dizer a classifica��o dessa glicose.
Var

   glicose : real
   classificacao : caractere

Inicio

   escreva("Valor da glicose: ")
   leia (glicose)
   escreva ("N�vel:")

   escolha glicose
   caso 0 ate 100
      classificacao <- "Normal"
   caso 101 ate 140
      classificacao <- "Elevado"
   outrocaso
      classificacao <- "Diabetes"
   fimescolha

   escreva(classificacao)

Fimalgoritmo