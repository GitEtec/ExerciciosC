algoritmo "semnome"
// Função :Faça um programa que receba o salário de um funcionário e percentual de aumento,
// calcule e e mostre o valor do aumento e novo salário.
// Autor : Deb.Px!
// Data : 24/08/2019
// Seção de Declarações 
var
salario,per,newsal : real
inicio
// Seção de Comandos 
escreval("*------------------------------------*")
escreval("Aumento com percentual")
escreval("*------------------------------------*")
escreva("Digite o salario do funcionario(a) R$")
leia(salario)
escreva("Digite o percentual de aumento %")
leia(per)
newsal <- (salario *(per / 100)+salario)
escreval("*-------------------------------------------*")
escreval("O novo salario do funcionario(a) é R$",newsal)
escreval("*-------------------------------------------*")

fimalgoritmo
