algoritmo "semnome"
// Função :Faça um programa que receba três notas e seus respectivos pesos,
// calcule e mostre a média ponderada dessa notas.
// Autor : Debs!
// Data : 24/08/2019
// Seção de Declarações 
var
nota1, nota2, nota3,mp:real
p1, p2, p3,somap:inteiro

inicio
// Seção de Comandos
escreval("***************************************")
escreval("Calculo a média ponderada.")
escreval("***************************************")
escreva("Digite a 1º nota: ")
leia(nota1)
escreva("Digite o peso da 1º nota: ")
leia(p1)
escreva("Digite a 2º nota: ")
leia(nota2)
escreva("Digite o peso da 2º nota: ")
leia(p2)
escreva("Digite a 3º nota: ")
leia(nota3)
escreva("Digite o peso da 3º nota: ")
leia(p3)
somap <-(p1+p2+p3)
mp <- ((nota1*p1)+(nota2*p2)+(nota3*p3))/somap
escreval("***************************************")
escreval("A média ponderada do aluno(a) é: ",mp)
escreval("***************************************")

fimalgoritmo
