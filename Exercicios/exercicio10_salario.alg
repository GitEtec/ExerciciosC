algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2019
// Seção de Declarações 
var
n_dep,d_mes:inteiro
valor_hr,sal_bruto,sal_liqu:real
inicio
// Seção de Comandos
escreval(" Salario Bruto e Liquido ")
escreva("Digite o número de dependente: ")
leia(n_dep)
escreva("Digite o valor por hora: ")
leia(valor_hr)
escreva("Digite o dias trabalhados no mês: ")
leia(d_mes)

limpatela
sal_bruto<-(valor_hr*(d_mes*24))
sal_liqu<-(sal_bruto+(n_dep*300))

escreval("Nº de dependentes: ",n_dep)
escreval("Salario liquido: R$",sal_liqu)
escreval("Salario Bruto: R$",sal_bruto)
fimalgoritmo
