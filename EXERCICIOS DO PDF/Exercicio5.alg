algoritmo "semnome"
// Fun��o :Fa�a um programa que receba o sal�rio de um funcion�rio e percentual de aumento,
// calcule e e mostre o valor do aumento e novo sal�rio.
// Autor : Deb.Px!
// Data : 24/08/2019
// Se��o de Declara��es 
var
salario,per,newsal : real
inicio
// Se��o de Comandos 
escreval("*------------------------------------*")
escreval("Aumento com percentual")
escreval("*------------------------------------*")
escreva("Digite o salario do funcionario(a) R$")
leia(salario)
escreva("Digite o percentual de aumento %")
leia(per)
newsal <- (salario *(per / 100)+salario)
escreval("*-------------------------------------------*")
escreval("O novo salario do funcionario(a) � R$",newsal)
escreval("*-------------------------------------------*")

fimalgoritmo
