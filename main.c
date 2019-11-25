#include <stdio.h>
#include <stdlib.h>

//Dados
typedef enum{
    vermelho, preto
} Cor;


typedef struct no{
    int chave;
    Cor cor;
    struct no* pai;
    struct no* direita;
    struct no* esquerda;
}Arvore;

//Declarações
Arvore* criarRaiz();
Arvore* inserirNo(int ch,Arvore* raiz);

int main()
{
    Arvore* raiz = criarRaiz();
    raiz = inserirNo(50,raiz);
    raiz = inserirNo(40,raiz);
    raiz = inserirNo(30,raiz);

    Arvore *aux = raiz;
    int x;
    while(aux != NULL){
        x = aux->chave;
        printf("%d\n",x);
        aux = aux->esquerda;
    }
    return 0;
}

Arvore* criarRaiz(){
    return NULL;
}

Arvore* inserirNo(int ch,Arvore* raiz){
    Arvore* no = raiz;
    Arvore* pai = NULL;
    Arvore* avo = NULL;
    Arvore* tio = NULL;

    Arvore* novo = (Arvore *)malloc(sizeof(Arvore));
    novo->direita = NULL;
    novo->esquerda = NULL;
    novo->pai = NULL;
    novo->cor = vermelho;
    novo->chave = ch;

    if(no == NULL){
        novo->cor = preto;
        raiz = novo;
    }else{
        while(no != NULL){
            novo->pai = no;
            if(ch < no->chave){
                no = no->esquerda;
            }else if(ch > no->chave){
                no = no->direita;
            }
        }

        pai = novo->pai;
        avo = pai->pai;
        if(avo->esquerda == pai){
            tio = avo->direita;
        }else{
            tio = avo->esquerda;
        }

        if(pai->cor == vermelho){//pai de z é vermelho
            if(tio->cor == vermelho){//caso 1

            }else if(tio->preto){//caso 2


            }
        }else{
            if(ch<no->chave){
                pai->esquerda = novo;
            }else if(ch>no->chave){
                pai->direita = novo;
            }
        }

    }

    return raiz;
}
