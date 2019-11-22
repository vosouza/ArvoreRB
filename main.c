#include <stdio.h>
#include <stdlib.h>

//Dados
typedef enum{
    vermelho, preto
} Cor;


typedef struct no{
    int chave;
    Cor cor;
    struct no* direita;
    struct no* esquerda;
}Arvore;

//Declarações
Arvore* criarRaiz();

int main()
{
    Arvore* raiz = criarRaiz();
    return 0;
}

Arvore* criarRaiz(){
    Arvore* r = (Arvore *)malloc(sizeof(Arvore));
    if(r == NULL) printf("Erro ao alocar memoria");
    r->direita = NULL;
    r->esquerda = NULL;
    r->cor = vermelho;
    return r;
}

Arvore* inserirNo(int ch,Arvore raiz){
    Arvore* no = raiz;
    while(no != null){
            if(ch < no.chave) no = no->esquerda;
            if(ch > no.chave) no = no->direita;
    }
    if(ch == no.chave){
        printf("Chave Duplicada");
    }else{
        if(ch < no.chave) no = no->esquerda;
            if(ch > no.chave) no = no->direita;
    }
}
