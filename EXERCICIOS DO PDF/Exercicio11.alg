algoritmo "semnome"
// Fun��o : 11- Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
//a) o n�mero digitado ao quadrado;
//b) o n�mero digitado ao cubo;
//c) a raiz quadrada do n�mero digitado;
//d) a raiz c�bica do n�mero digitado.
// Autor : Deb.Px!!
// Data : 24/08/2019
// Se��o de Declara��es 
var
n1:inteiro
quadr,cubo,raiz,raizcub:real
inicio
// Se��o de Comandos
escreval("*-------------------------------------------------------------------*")
escreval("Sistema que calcula o n�mero: Quadrado/Cubo/Raiz Quadrada/Raiz c�bica")
escreval("*-------------------------------------------------------------------*")
escreva("N�mero de valor maior que zero: ")
leia(n1)
limpatela
quadr <- n1^2
cubo <- n1^3
raiz <- RaizQ(n1)
raizcub <- n1^(1/3)
escreval("**********************")
escreval("N�mero Digitado: ",n1)
escreval("Ao Quadrado: ",quadr)
escreval("Ao Cubo: ",cubo)
escreval("Raiz Quadrada: ",raiz)
escreval("Raiz Cubica: ",raizcub)
escreval("**********************")


fimalgoritmo
