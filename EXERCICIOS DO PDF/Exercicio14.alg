algoritmo "semnome"
//13- Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados.
//a) podegadas;
//b) jardas;
//c) milhas.
//Sabe-se que: 1 p� = 12 polegadas; 1 jarda = 3 p�s e 1 milha = 1.760 jardas.
// Autor :Deb.Px!!
// Data : 24/08/2019
// Se��o de Declara��es 
var
pes,pol,jar,milha:real
inicio
// Se��o de Comandos 
escreval("*--------------------------------------------*")
escreval("Convers�o de pes para: polegadas/jardas/milhas")
escreval("*--------------------------------------------*")
escreva("Digite a medida em p�s: ")
leia(pes)
pol <- pes*12
jar <- pes/3
milha <- pes /5280
escreval("*--------------------------------------------*")
escreval(pes," p�s em polegadas =",pol)
escreval(pes," p�s em jarda = ",jar)
escreval(pes," p�s em milha = ",milha)
escreval("*--------------------------------------------*")
fimalgoritmo
