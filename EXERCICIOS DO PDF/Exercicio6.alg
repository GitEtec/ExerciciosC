algoritmo "semnome"
// Fun��o : Fa�a um programa que receba o sal�rio base de funcion�rio,
//calcule e mostre o sal�rio a receber, sabendo-se que o funcion�rio
// tem gratifica��o de 10% sobre o sal�rio base e paga o imposto de 15% sobre este sal�rio.
// Autor : Deb.Px!!
// Data : 24/08/2019
// Se��o de Declara��es 
var
sb,s_tot:real
inicio
// Se��o de Comandos
escreval("*--------------------------------------------------*")
escreval("Calculo para Gratifica��o e Imposto sobre o salario")
escreval("*--------------------------------------------------*")
escreva("Sal�rio base R$")
leia(sb)
s_tot <- (sb + (sb * 0.10)) - (sb * 0.15)


escreval("*-------------------------------------------*")
escreval("Salario ficou R$",s_tot)

escreval("*-------------------------------------------*")
fimalgoritmo
