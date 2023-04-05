#include <stdio.h>
int main(){
   int i;
   float produtos[10], maior=0.0, menor;
   printf("Digite o preco de 8 produtos\n");
   for(i = 0; i<8; i++){
       scanf("%f", &produtos[i]);
       if(i == 0)
       menor = produtos[i];
       if(produtos[i]>maior)
       maior = produtos[i];
       else if(produtos[i]<menor)
       menor = produtos[i];
   }
   printf("menor = %.2f, maior = %.2f", menor, maior);
   return 0;
}
