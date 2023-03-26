#include <stdio.h>
#include <math.h>
//1. Leia quatro notas, calcule a média aritmética e imprima o resultado.
void questao1(){
    float notas[4], media = 0;
    for (int i = 0; i < 4; i++){
        printf("Digite a nota %d\n", (i+1));
        scanf("%f", &notas[i]);
        media += notas[i]/4;
    }
    printf("Media = %.2f\n", media);
}
// 2. Leia um vetor real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
void questao2(){
    float valorReal, cotacaoDolar;
    printf("Digite o valor em reais a ser convertido\n");
    scanf("%f", &valorReal);
    printf("Digite o valor da cotacao do dolar\n");
    scanf("%f", &cotacaoDolar);

    printf("Valor em dolar: $%.2f\n", (valorReal/cotacaoDolar));
}
// 3. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
void questao3(){
    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    printf("Antecessor: %d, sucessor: %d\n", (numero-1), (numero+1));
}
//4. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.
void questao4(){
    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    printf("Soma do sucessor de seu triplo com o antecessor de seu dobro: %d\n", ((3*numero + 1) + 2*numero -1));
}
//5. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
void questao5(){
    float lado;
    printf("Digite o lado do quadrado\n");
    scanf("%f", &lado);
    printf("Area do quadrado de lado %.2f: %.2f\n", lado, (lado*lado));
}
// 10. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.
void questao10(){
    char op;
    float resultado, n1, n2;
    int erro = 0;
    printf("Digite os numeros\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    getchar();
    printf("Digite a operacao\n");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
    {
        resultado = n1 + n2;
        break;
    }
    case '-':
    {
        resultado = n1 - n2;
        break;
    }
    case '*':
    {
        resultado = n1 * n2;
        break;
    }
    case '/':
    {
        resultado = n1 / n2;
        break;
    }
    default:{
    printf("Operacao invalida\n");
    erro = 1;
        break;
    }
    }
    if(erro == 0)
    printf("%.2f %c %.2f = %.2f\n", n1, op, n2, resultado);    
}
//11.Construir um algoritmo para calcular e apresentar a soma de vários valores inteiros e positivos, fornecidos pelo teclado, o último valor deve ser -1 (flag) e não deve ser considerado.
void questao11(){
    printf("Digite os valores a serem somados\n");
    int soma = 0;
    while (1)
    {
        int valor;
        scanf("%d", &valor);
        if(valor>0)
        soma += valor;
        else if(valor == -1)
        break;
    }
    printf("Resultado = %d\n", soma);
    
}
// 12.Escreva um algoritmo estruturado que gere os números de 1000 a 1999 e escreva somente os números que são divisíveis por 11 e cujo resto é 5.
void questao12(){
    for (int i = 1000; i <= 1999; i++)
    {
       if(i%11 == 0 || i%11 == 5)
       printf("%d\n", i);
    }
    
}
// 13.Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).

void questao13(){
    printf("Digite os valores para a media\n");
    int soma = 0, count = 0;
    while (1)
    {
        int valor;
        scanf("%d", &valor);
        if(valor%2 == 0){
        if(valor == 0){
        if(count !=0)
        printf("Media = %d", (soma/count));
        else 
        printf("0");
        break;
        }
        soma += valor;
        count++;
        }
        else 
        break;
    }
    
}
// 14.Escreva um algoritmo que leia os três lados de um triângulo (A, B, C) e que determine e
// imprima uma mensagem informando o seu tipo, conforme a tabela abaixo:
// a) Triângulo Equilátero = 3 lados iguais
// b) Triângulo Isósceles = 2 lados iguais
// c) Triângulo Escaleno = 3 lados diferentes
void questao14(){
    int lados[3];
    for (int i = 0; i < 3; i++){
        printf("Digite o %d lado\n", (i+1));
        scanf("%f", &lados[i]);
    }
    if(lados[0] == lados[1] && lados[1] == lados[2])
    printf("Equilatero\n");
    else if(lados[0] != lados[1] && lados[1] != lados[2] && lados[2] != lados[0])
    printf("Escaleno\n");
    else
    printf("Isosceles\n");
}
// 15.Desenvolva um programa usando a estrutura “For” que mostre na tela a seguinte
// contagem: “0 5 10 15 20 25 30 35 40 Acabou!”
void questao15(){
    for(int i = 0; i<=40; i++){
        if(i%5 == 0){
        
        printf("%d ", i);
        if(i == 40)
        printf("acabou\n");
        }
        
    }
}
int main(){

    questao1();
    questao2();
    questao3();
    questao4();
    questao5();
    questao10();
    questao11();
    questao12();
    questao13();
    questao14();
    questao15();
    return 0;
}

