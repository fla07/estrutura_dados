#include <iostream>
#include "Pilha_h.h"

using namespace std;

int main()
{
    cout<< "\nPilha em alocacao ligada";
    Pilha p;
    if(!p.empilha(3))(cout<<"\nPilha cheia.");
    if(!p.empilha(5))(cout<<"\nPilha cheia.");
    if(!p.empilha(2))(cout<<"\nPilha cheia.");

    if (p.pilha_vazia())
    {
        cout<<"\nPilha vazia.";
    }
    else
    {
        cout<<"\nElemento do Topo:"<<p.elemento_topo();
        cout<<"\nDesempilhei:"<<p.desempilha();
    }
     // imprimeindo a pilha

     Node *aux = p.getTopo();//auxiliar aponta para onde o topo esta e eibe caso não seja nulo
     while (aux != NULL)
     {
         cout<<aux -> info <<endl;
         aux = aux -> prox;
     }

}
