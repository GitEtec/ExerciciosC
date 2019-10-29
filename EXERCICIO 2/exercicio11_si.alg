algoritmo "semnome"
// Função :  Elabore um algoritmo que leia uma medida em centímetros e apresente quantos metros,
// decímetros e milímetros há nesta medida.
// Autor : Deb.Px
// Data : 21/08/2019
// Seção de Declarações 
var
valor:inteiro
metro,dec,mil: real
inicio
// Seção de Comandos 
escreval("Sistema que calcula uma medida centímetros e apresenta")
escreval("quantos metros,decímetros e milímetros.")
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
