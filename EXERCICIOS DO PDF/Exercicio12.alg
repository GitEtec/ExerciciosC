algoritmo "semnome"
// Fun��o : Fa�a um programa que receba dois n�meros maiores que zero, calcule e mostre um elevado ao outro.
// Autor :  Deb.Px!
// Data : 10/09/2019
// Se��o de Declara��es 
var
n1,n2,elevado1,elevado2:real
inicio
// Se��o de Comandos 
escreval("********************************************")
escreval("            Elevando os valores ")
escreval("********************************************")
escreval("Digite o primeiro n�mero: ")
leia(n1)
escreval("Digite o segundo n�mero: ")
leia(n2)
elevado1<- n1^n2
elevado2<- n2^n1
limpatela
escreval("*****************************************************")
escreval(n1," elevado por ",n2," � igual a: ",elevado1)
escreval(n2," elevado por ",n1," � igual a: ",elevado2)
escreval("*****************************************************")
fimalgoritmo
