algoritmo "semnome"
// Fun��o :Fa�a um programa que receba tr�s notas e seus respectivos pesos,
// calcule e mostre a m�dia ponderada dessa notas.
// Autor : Debs!
// Data : 24/08/2019
// Se��o de Declara��es 
var
nota1, nota2, nota3,mp:real
p1, p2, p3,somap:inteiro

inicio
// Se��o de Comandos
escreval("***************************************")
escreval("Calculo a m�dia ponderada.")
escreval("***************************************")
escreva("Digite a 1� nota: ")
leia(nota1)
escreva("Digite o peso da 1� nota: ")
leia(p1)
escreva("Digite a 2� nota: ")
leia(nota2)
escreva("Digite o peso da 2� nota: ")
leia(p2)
escreva("Digite a 3� nota: ")
leia(nota3)
escreva("Digite o peso da 3� nota: ")
leia(p3)
somap <-(p1+p2+p3)
mp <- ((nota1*p1)+(nota2*p2)+(nota3*p3))/somap
escreval("***************************************")
escreval("A m�dia ponderada do aluno(a) �: ",mp)
escreval("***************************************")

fimalgoritmo
