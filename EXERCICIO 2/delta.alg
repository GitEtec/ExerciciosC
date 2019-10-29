algoritmo "semnome"
// Função : Construa um algoritmo para calcular e apresentar X1 e X2 da equação do 2º grau,
//sendo que os valores de A, B e C são fornecidos pelo usuário.?
// Autor : Deb.Px
// Data : 23/08/2019
// Seção de Declarações 
var
 x1,x2,a,b,c,delta:real
inicio
// Seção de Comandos 
escreval("Bem vindo ao sistema que calcula o x1 e x2 da equação do 2º grau")
escreval("----------------------------------------------------------------")

escreva("Digite a: ")
leia(a)
escreva("Digite b: ")
leia(b)
escreva("Digite c: ")
leia(c)
delta <- ((b^2-4)*a*c)
x1 <- (- b + RaizQ(delta))/(2*a)
x2 <- (-b- RaizQ(delta))/(2*a)
escreval("----------------------------------------------------------------")
escreval("O delta é ",delta)
escreval("x1 é : ",x1)
escreval("x2 é : ",x2)
escreval("----------------------------------------------------------------")
fimalgoritmo
