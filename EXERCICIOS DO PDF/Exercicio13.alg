algoritmo "semnome"
// Fun��o :12- Fa�a um programa que receba dois n�meros maiores que zero, calcule e mostre um elevado ao outro
// Autor : Deb.Px!!
// Data : 24/08/2019
// Se��o de Declara��es 
var
n1,n2:inteiro
eleva1,eleva2:real
inicio
// Se��o de Comandos 
escreval("*-----------------------------------------------*")
escreval("Sistema que eleva um ao outro")
escreval("*-----------------------------------------------*")
escreva("Digite um n�mero maior que zero: ")
leia(n1)
escreva("Digite outro valor maior que zero: ")
leia(n2)
eleva1 <- (n1^n2)
eleva2 <- (n2^n1)
escreval("*-----------------------------------------------*")
escreval("O valor ",n1," elevado ao valor ",n2," � ",eleva1)
escreval("O valor ",n2," elevado ao valor ",n1," � ",eleva2)
escreval("*-----------------------------------------------*")
fimalgoritmo
