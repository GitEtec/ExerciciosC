algoritmo "semnome"
// Função :15- O custo ao consumidor de um carro novo é a soma do preço de fábrica
//com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
//Faça um programa que receba o preço de fábrica de um veículo,
//o percentual de lucro do distribuidor e o percentual de imposto, calcule e mostre:
//a) o valor corresponde aos impostos;
//b) o valor corresponde aos impostos;
//c) o preço final do veículo.
// Autor : Deb.Px!
// Data : 24/08/2019
// Seção de Declarações 
var
preco_fab,perc_lucro,imposto,preco_final,v_lucro,v_impo,preco_imp:real
inicio
// Seção de Comandos
escreval("*-------------------------------------------*")
escreval("   O custo ao consumidor de um carro novo")
escreval("*-------------------------------------------*")
escreva("Digite o preço de fábrica do veículo R$")
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
escreval("Preço Final: R$",preco_final)
escreval("*-------------------------------------------*")
fimalgoritmo
