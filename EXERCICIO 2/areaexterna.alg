algoritmo "semnome"
// Fun��o :  Crie um algoritmo que calcule e apresente a �rea externa de uma lata,
// onde � fornecido pelo usu�rio somente o Raio e Altura.
// Autor :    Deb.Px
// Data : 24/08/2019
// Se��o de Declara��es 
var
r, h: inteiro
res: real
inicio
// Se��o de Comandos 
escreval("Bem vindo ao sistema que calcula a �rea externa de um cilindro")
escreval("----------------------------------------------------------------")
escreva("Digite o raio: ")
leia(r)
escreva("Digite a altura: ")
leia(h)
res <- (2*pi*r*(h+r))
escreval("----------------------------------------------------------------")
escreval("A �rea externa da lata �: ",res)
escreval("----------------------------------------------------------------")

fimalgoritmo
