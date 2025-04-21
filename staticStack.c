#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct{
    int Item[SIZE]; // array de itens da pilha
    int top; // topo da pilha
} TStack;
TStack stack;

// Definir o topo como -1, indicar que a pilha esta vazia
// p->top --- indica o indice do ultimo numero inserido na pilha

void TStack_Inicia (TStack *p){
    p->top = -1;
}

// Função para verificar se pilha esta vazia
// p->top --- indica o indice do ultimo numero inserido na pilha
int TStack_Vazia (TStack *p){
    if (p->top == -1) {
        return 1; // pilha esta vazia
    } else {
        return 0; // pilha não esta vazia
    }
}
// Função para verificar se pilha esta cheia
int TStack_Cheia (TStack *p){
    if (p->top == SIZE-1){
        return 1;
    } else{
        return 0;
    }
}

// inserir valores na pilha
// parametros (p,x)
void TStack_Insere (TStack *p, int x){ 
    if(TStack_Cheia(p) == 1){
        printf("\n ERRO: Pilha esta cheia.");
    } else{
        p->top++;
        p->Item[p->top] = x;
    }
}
// o valor int indica o tipo da variavel declarada na struct
int TStack_Retira (TStack *p){
    int aux;
    if(TStack_Vazia(p) == 1){
        printf("\n ERRO: Pilha esta vazia");
    } else{
        aux = p->Item[p->top];
        p->top--;
        return aux;
    }
}

int main() {
    TStack *p = (TStack*)malloc(sizeof(TStack)); // Alocar espaço na memoria
    // Inicia a pilha com seu valor original de 100 posições
    TStack_Inicia(p);
    
    // Inserindo valores na pilha
    TStack_Insere(p, 1);
    TStack_Insere(p, 2);
    TStack_Insere(p, 3);
    
    // Variavel auxiliar para retornar valores
    int aux;
    
    // Remover valor da pilha (LIFO)
    aux = TStack_Retira(p);
    printf("\n SAIU: %d", aux);
    
    aux = TStack_Retira(p);
    printf("\n SAIU: %d", aux);
    
    aux = TStack_Retira(p);
    printf("\n SAIU: %d", aux);
    
    // ERRO DE UNDERFLOW - ERRO DE PILHA VAZIA E RETORNA UM VALOR QUALQUER NA MEMORIA
    aux = TStack_Retira(p);
    printf("\n SAIU: %d", aux);
}
















/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define V 5 // defining array of 5 positions

// estrutura de pilha
typedef struct{
    int Item[V]; // array de itens da pilha
    int top; // topo da pilha
} TStack;
TStack stack;
Item[V] = {1, 2, 2, 4, 5};

int Is_Empty() {
    if (stack.top == 0){
        printf("verdadeiro");
        return true;
    }
    else{
        printf("falso");
        return false;
    }
}
int main() {
    if (! Is_Empty()){
        int x = 0;
        x = stack.Item[stack.top];
        stack.top = stack.top - 1;
        
        printf("Esta vazio");
        return x;
    }
    else{
        printf("Error Underflow");
        return 0;
    }
}
*/
