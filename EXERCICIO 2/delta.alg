algoritmo "semnome"
// Fun��o : Construa um algoritmo para calcular e apresentar X1 e X2 da equa��o do 2� grau,
//sendo que os valores de A, B e C s�o fornecidos pelo usu�rio.?
// Autor : Deb.Px
// Data : 23/08/2019
// Se��o de Declara��es 
var
 x1,x2,a,b,c,delta:real
inicio
// Se��o de Comandos 
escreval("Bem vindo ao sistema que calcula o x1 e x2 da equa��o do 2� grau")
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
escreval("O delta � ",delta)
escreval("x1 � : ",x1)
escreval("x2 � : ",x2)
escreval("----------------------------------------------------------------")
fimalgoritmo
