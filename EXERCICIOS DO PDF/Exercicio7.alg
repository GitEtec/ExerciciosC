algoritmo "semnome"
// Função : Faça um programa que receba o salário base de um funcionário,
//calcule e mostre o seu salário a receber, sabendo-se que o funcionário tem gratificação de R$ 500,00 e paga imposto de 11% sobre o salário base.
// Autor : Deb.Px!
// Data : 10/09/2019
// Seção de Declarações 
var
salario_base,salario_r:real
inicio
// Seção de Comandos 
escreval("====================================================")
escreval("Calculo do salário do funcionario ")
escreval("====================================================")
escreva("Digite o salário base do funcionario R$:")
leia(salario_base)
salario_r <- salario_base+500-(11/100)

escreval("O salário do funcionario a receber é: R$",salario_r)
escreval("====================================================")
fimalgoritmo
