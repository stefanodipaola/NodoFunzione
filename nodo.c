# include  <stdio.h>
# include  <stdlib.h>
# include  "nodo.h"

void stampa(NodoPtr head){
    
    NodoPtr temp;
    temp = head;
    
    
   if(temp!=NULL){
	while (temp!=NULL) {
        printf ("%d \n" ,temp ->v);
        temp= temp -> next ;
    }
    }else{
		printf("NULL \n");
	}
	
}

void inserisciTesta (NodoPtr *head, int v) {
    NodoPtr newNodo = malloc (sizeof(Nodo));
    newNodo-> v= v;
    newNodo-> next = *head;
}

void inserisciCoda(NodoPtr *head, int v)
{
    if (*head == NULL) {
        inserisciTesta(head,v);
        return;
    }

    NodoPtr newNodo = malloc(sizeof(Nodo));
    newNodo->v = v;
    newNodo->next = NULL;

    NodoPtr temp = *head;

   
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNodo;
}

void inserisciDopo(NodoPtr head, int v, int a)
{
    while (head!=NULL && head->v!=a) {
        head = head->next;
    }

    if (head == NULL) return;

    NodoPtr newNodo = malloc(sizeof(Nodo));
    newNodo->v=v;
    newNodo->next = head->next;

    head->next = newNodo;
}

void clear(NodoPtr *head){
    
    NodoPtr temp;
    temp = *head;

    while (temp != NULL) {
        temp = temp->next;
        
        printf("Memoria liberata %d \n", temp->v);
        free(temp);
    }
}

