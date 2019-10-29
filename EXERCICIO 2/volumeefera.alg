algoritmo "semnome"
// Função :Faça um algoritmo para calcular o volume de uma esfera de raio R, em que R é um valor fornecido pelo usuário.
// Autor :  Deb.Px
// Data : 23/08/2019
// Seção de Declarações 
var
r : inteiro
volume:real
inicio
// Seção de Comandos 
escreval("Sistema para o calculo de volume de esfera.")
escreval("----------------------------------------------------------------")

escreva("Digite o valor do raio: ")
leia(r)
volume <- (4*pi*r^3)/3
escreval("----------------------------------------------------------------")
escreval("O volume da esfera: ",volume)

fimalgoritmo
