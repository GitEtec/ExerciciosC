algoritmo "semnome"
// Fun��o : Fa�a um programa que receba o sal�rio base de um funcion�rio,
//calcule e mostre o seu sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de R$ 500,00 e paga imposto de 11% sobre o sal�rio base.
// Autor : Deb.Px!
// Data : 10/09/2019
// Se��o de Declara��es 
var
salario_base,salario_r:real
inicio
// Se��o de Comandos 
escreval("====================================================")
escreval("Calculo do sal�rio do funcionario ")
escreval("====================================================")
escreva("Digite o sal�rio base do funcionario R$:")
leia(salario_base)
salario_r <- salario_base+500-(11/100)

escreval("O sal�rio do funcionario a receber �: R$",salario_r)
escreval("====================================================")
fimalgoritmo
