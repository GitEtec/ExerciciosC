algoritmo "semnome"
// Fun��o :15- O custo ao consumidor de um carro novo � a soma do pre�o de f�brica
//com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.
//Fa�a um programa que receba o pre�o de f�brica de um ve�culo,
//o percentual de lucro do distribuidor e o percentual de imposto, calcule e mostre:
//a) o valor corresponde aos impostos;
//b) o valor corresponde aos impostos;
//c) o pre�o final do ve�culo.
// Autor : Deb.Px!
// Data : 24/08/2019
// Se��o de Declara��es 
var
preco_fab,perc_lucro,imposto,preco_final,v_lucro,v_impo,preco_imp:real
inicio
// Se��o de Comandos
escreval("*-------------------------------------------*")
escreval("   O custo ao consumidor de um carro novo")
escreval("*-------------------------------------------*")
escreva("Digite o pre�o de f�brica do ve�culo R$")
leia(preco_fab)
escreva("Digite o percentual de lucro do distribuidor %")
leia(perc_lucro)
escreva("Digite o percentual dos impostos %")
leia(imposto)
v_impo <- preco_fab * perc_lucro /100
v_lucro <- preco_fab * imposto /100
preco_final <- preco_fab + v_impo + v_lucro
escreval("*-------------------------------------------*")
escreval("Lucro distribuidor %",v_lucro)
escreval("Imposto",v_impo)
escreval("Pre�o Final: R$",preco_final)
escreval("*-------------------------------------------*")
fimalgoritmo
