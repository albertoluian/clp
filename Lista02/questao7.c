#include <stdio.h>
#include <stdlib.h>

struct lista {
 int valor;
 struct lista* proximo;
};
typedef struct lista Lista;
Lista* inicializa (void)
{
 return NULL;
}
Lista* insere (Lista* l, int i)
{
 Lista* no = (Lista*) malloc(sizeof(Lista));
 no->valor = i;
 no->proximo = l;
 return no;
}
void printarLista(Lista* l){
 Lista* p; 
 for (p = l; p != NULL; p = p->proximo)
 printf("%d ", p->valor);
}

Lista* adicionardez(Lista* l){
    int i = 0;
    printf("Digite 10 numeros\n");
    for(i=0; i<10; i++){
    int aux;
    scanf("%d", &aux);
    l = insere(l, aux); 
    }
    return l;
}
Lista* pop (Lista* l) {
 Lista* ant = NULL;
 Lista* inicio = l;
 Lista* p = l;
 while (p->proximo != NULL) {
 ant = p;
 p = p->proximo;
 }
 l = inicio;
 ant->proximo = NULL;
 
 free(p);
 return l;
}
Lista* removerdez(Lista *l){
    int i;
    for(i=0; i<10;i++){
        pop(l);
        printf("\n");
        printarLista(l);
        
    }
    return l;
}
int main(){
    Lista *l = inicializa();
    l = adicionardez(l);
    printarLista(l);
    l = removerdez(l);
    return 0;
}
