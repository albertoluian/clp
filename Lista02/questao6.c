#include <stdio.h>
int main(){
   int idades[10], i, maior=0, dezoito=0, cinco=0;
   float media =0.0;
   printf("Digite 10 idades\n");
   for(i = 0; i<10; i++){
       scanf("%d", &idades[i]);
       if(idades[i]>maior)
       maior = idades[i];
       if(idades[i]>18)
       dezoito++;
       else if(idades[i]<5)
       cinco++;
       media+=idades[i]/10.0;
   }
   printf("media = %.2f, maiores que 18: %d, menores que 5: %d, maior idade lida: %d", media, dezoito, cinco, maior);
   return 0;
}
