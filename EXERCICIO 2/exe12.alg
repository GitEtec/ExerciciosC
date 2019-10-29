algoritmo "semnome"
// Função : Escreva um algoritmo que leia um valor em segundos e apresente quantas horas e
//quantos minutos esse valor corresponde.
// Autor :Deb.Px
// Data : 21/08/2019
// Seção de Declarações 
var
seg:inteiro
horas,min:real
inicio
// Seção de Comandos
escreval("Digite um valor em segundos e obtenha o mesmo em horas e minutos")
escreva("Digite os segundos: ")
leia(seg)
horas <- (seg/3600)
min <- (seg / 60)
escreval("----------------------------------------------------------------")
escreval(seg," segundos são ",horas," horas")
escreval(seg," segundos são ",min," minutos")
escreval("----------------------------------------------------------------")
fimalgoritmo
