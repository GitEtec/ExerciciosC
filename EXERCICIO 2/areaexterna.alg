algoritmo "semnome"
// Função :  Crie um algoritmo que calcule e apresente a área externa de uma lata,
// onde é fornecido pelo usuário somente o Raio e Altura.
// Autor :    Deb.Px
// Data : 24/08/2019
// Seção de Declarações 
var
r, h: inteiro
res: real
inicio
// Seção de Comandos 
escreval("Bem vindo ao sistema que calcula a área externa de um cilindro")
escreval("----------------------------------------------------------------")
escreva("Digite o raio: ")
leia(r)
escreva("Digite a altura: ")
leia(h)
res <- (2*pi*r*(h+r))
escreval("----------------------------------------------------------------")
escreval("A área externa da lata é: ",res)
escreval("----------------------------------------------------------------")

fimalgoritmo
