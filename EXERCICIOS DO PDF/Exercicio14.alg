algoritmo "semnome"
//13- Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
//a) podegadas;
//b) jardas;
//c) milhas.
//Sabe-se que: 1 pé = 12 polegadas; 1 jarda = 3 pés e 1 milha = 1.760 jardas.
// Autor :Deb.Px!!
// Data : 24/08/2019
// Seção de Declarações 
var
pes,pol,jar,milha:real
inicio
// Seção de Comandos 
escreval("*--------------------------------------------*")
escreval("Conversão de pes para: polegadas/jardas/milhas")
escreval("*--------------------------------------------*")
escreva("Digite a medida em pés: ")
leia(pes)
pol <- pes*12
jar <- pes/3
milha <- pes /5280
escreval("*--------------------------------------------*")
escreval(pes," pés em polegadas =",pol)
escreval(pes," pés em jarda = ",jar)
escreval(pes," pés em milha = ",milha)
escreval("*--------------------------------------------*")
fimalgoritmo
