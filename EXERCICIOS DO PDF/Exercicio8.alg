algoritmo "semnome"
// Fun��o :  Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros,
//calcule e mostre o valor do rendimento e valor total depois do rendimento.

// Autor : Deb.Px!
// Data : 10/09/2019
// Se��o de Declara��es 
var
rend,v_tot,dep,taxa:real
inicio
// Se��o de Comandos 
escreval("------------------------------------------")
escreval("Sistema: valor do rendimento e valor total")
escreval("------------------------------------------")
escreva("Digite o valor do deposito R$")
leia(dep)
escreva("Dogote a taxa aplicada no deposito: %")
leia(taxa)
rend <- dep*(taxa/100)
v_tot <- dep+rend
escreval("------------------------------------------")
escreval("O valor total do rendimento: ",rend)
escreval("O valor total: R$",v_tot)
escreval("------------------------------------------")
fimalgoritmo
