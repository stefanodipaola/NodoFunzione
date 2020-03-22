# ifndef NODO_H
# define  NODO_H

struct nodo {
    int v;
    struct nodo * next;
};
typedef  struct nodo Nodo;
typedef  struct nodo *NodoPtr;

void stampa(NodoPtr head);
void inserisciTesta(NodoPtr *head, int v);
void inserisciCoda(NodoPtr *head, int v);
void inserisciDopo(NodoPtr head, int v, int a);
void clear(NodoPtr *head);

# endif

