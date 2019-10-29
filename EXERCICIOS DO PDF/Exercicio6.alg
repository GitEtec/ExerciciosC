algoritmo "semnome"
// Função : Faça um programa que receba o salário base de funcionário,
//calcule e mostre o salário a receber, sabendo-se que o funcionário
// tem gratificação de 10% sobre o salário base e paga o imposto de 15% sobre este salário.
// Autor : Deb.Px!!
// Data : 24/08/2019
// Seção de Declarações 
var
sb,s_tot:real
inicio
// Seção de Comandos
escreval("*--------------------------------------------------*")
escreval("Calculo para Gratificação e Imposto sobre o salario")
escreval("*--------------------------------------------------*")
escreva("Salário base R$")
leia(sb)
s_tot <- (sb + (sb * 0.10)) - (sb * 0.15)


escreval("*-------------------------------------------*")
escreval("Salario ficou R$",s_tot)

escreval("*-------------------------------------------*")
fimalgoritmo
