algoritmo "semnome"
// Fun��o :Fa�a um algoritmo para calcular o volume de uma esfera de raio R, em que R � um valor fornecido pelo usu�rio.
// Autor :  Deb.Px
// Data : 23/08/2019
// Se��o de Declara��es 
var
r : inteiro
volume:real
inicio
// Se��o de Comandos 
escreval("Sistema para o calculo de volume de esfera.")
escreval("----------------------------------------------------------------")

escreva("Digite o valor do raio: ")
leia(r)
volume <- (4*pi*r^3)/3
escreval("----------------------------------------------------------------")
escreval("O volume da esfera: ",volume)

fimalgoritmo
