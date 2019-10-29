algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2019
// Seção de Declarações 
var
valor:inteiro
metro,dec,mil: real
inicio
// Seção de Comandos 
escreva("Digite o valor em centimentro: ")
leia(valor)
metro <- valor/100
dec <- valor / 10
mil <- valor * 10

escreval("Metro: ",metro)
escreval("Decimetro: ",dec)
escreval("Milimetro: ",mil)

fimalgoritmo
