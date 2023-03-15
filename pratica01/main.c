#include <stdio.h>
#define pi 3.14
void q1(){
    printf("Digite um número inteiro:");
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
}
void q2(){
float x;
printf("Digite um número real");
scanf("%f", &x);

printf("%.2f", x);
}
void q3(){
    int x[3];
printf("Digite 3 números inteiros");
for(int i =0; i<3; i++){
scanf("%d", &x[i]);

}
for(int i =0; i<3; i++){
printf("%d ",x[i]);

}
}
void q4(){
    
float x;
printf("Digite um número real");
scanf("%f", &x);

printf("seu quadrado é: %.2f", (x*x));
}
void q5(){
    float x;
printf("Digite um número real");
scanf("%f", &x);

printf("Sua quinta parte é: %.2f", (x/5));
}
void q6(){
    float graus;
printf("Digite um angulo em graus");
scanf("%f", &graus);

printf("seu valor em radianos é: %.2f", (graus*pi/180));
}
void q7(){
    float radianos;
printf("Digite um angulo em radianos");
scanf("%f", &radianos);

printf("seu valor em graus é: %.2f", (radianos*180/pi));
}
int main(){
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7();
    return 0;
}