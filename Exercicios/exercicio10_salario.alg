algoritmo "semnome"
// Fun��o :
// Autor :
// Data : 21/08/2019
// Se��o de Declara��es 
var
n_dep,d_mes:inteiro
valor_hr,sal_bruto,sal_liqu:real
inicio
// Se��o de Comandos
escreval(" Salario Bruto e Liquido ")
escreva("Digite o n�mero de dependente: ")
leia(n_dep)
escreva("Digite o valor por hora: ")
leia(valor_hr)
escreva("Digite o dias trabalhados no m�s: ")
leia(d_mes)

limpatela
sal_bruto<-(valor_hr*(d_mes*24))
sal_liqu<-(sal_bruto+(n_dep*300))

escreval("N� de dependentes: ",n_dep)
escreval("Salario liquido: R$",sal_liqu)
escreval("Salario Bruto: R$",sal_bruto)
fimalgoritmo
