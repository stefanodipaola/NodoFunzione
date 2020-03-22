#include <stdio.h>
#include <stdlib.h>
# include  "nodo.h"

int main(){

  NodoPtr head=NULL;
    stampa(head);

    inserisciCoda(&head,2);
    
    stampa(head);

    inserisciDopo(head,3,5);
   
    stampa(head);

    inserisciTesta(&head,7);
    
    stampa(head);

    inserisciDopo(head,6,10);
    
    stampa(head);

    inserisciCoda(&head,24);
    
    stampa(head);

    clear(&head);

 return 0;
}
