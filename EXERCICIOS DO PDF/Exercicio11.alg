algoritmo "semnome"
// Função : 11- Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.
// Autor : Deb.Px!!
// Data : 24/08/2019
// Seção de Declarações 
var
n1:inteiro
quadr,cubo,raiz,raizcub:real
inicio
// Seção de Comandos
escreval("*-------------------------------------------------------------------*")
escreval("Sistema que calcula o número: Quadrado/Cubo/Raiz Quadrada/Raiz cúbica")
escreval("*-------------------------------------------------------------------*")
escreva("Número de valor maior que zero: ")
leia(n1)
limpatela
quadr <- n1^2
cubo <- n1^3
raiz <- RaizQ(n1)
raizcub <- n1^(1/3)
escreval("**********************")
escreval("Número Digitado: ",n1)
escreval("Ao Quadrado: ",quadr)
escreval("Ao Cubo: ",cubo)
escreval("Raiz Quadrada: ",raiz)
escreval("Raiz Cubica: ",raizcub)
escreval("**********************")


fimalgoritmo
