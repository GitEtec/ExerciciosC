algoritmo "semnome"
// Função : Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
// Autor :  Deb.Px!
// Data : 10/09/2019
// Seção de Declarações 
var
n1,n2,elevado1,elevado2:real
inicio
// Seção de Comandos 
escreval("********************************************")
escreval("            Elevando os valores ")
escreval("********************************************")
escreval("Digite o primeiro número: ")
leia(n1)
escreval("Digite o segundo número: ")
leia(n2)
elevado1<- n1^n2
elevado2<- n2^n1
limpatela
escreval("*****************************************************")
escreval(n1," elevado por ",n2," é igual a: ",elevado1)
escreval(n2," elevado por ",n1," é igual a: ",elevado2)
escreval("*****************************************************")
fimalgoritmo
