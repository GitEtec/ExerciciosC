algoritmo "semnome"
// Fun��o :  Elabore um algoritmo que leia uma medida em cent�metros e apresente quantos metros,
// dec�metros e mil�metros h� nesta medida.
// Autor : Deb.Px
// Data : 21/08/2019
// Se��o de Declara��es 
var
valor:inteiro
metro,dec,mil: real
inicio
// Se��o de Comandos 
escreval("Sistema que calcula uma medida cent�metros e apresenta")
escreval("quantos metros,dec�metros e mil�metros.")
escreval("----------------------------------------------------------------")
escreva("Digite o valor em cm: ")
leia(valor)
metro <- valor/100
dec <- valor / 10
mil <- valor * 10
escreval("----------------------------------------------------------------")
escreval("Metro: ",metro)
escreval("Decimetro: ",dec)
escreval("Milimetro: ",mil)
escreval("----------------------------------------------------------------")

fimalgoritmo
