#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED


struct Node
{
  int info;
  Node *prox;
};


struct Pilha
{
    Node *topo;

    Pilha()
    {
        topo=NULL;
    }

    bool pilha_vazia()
    {
        return topo == NULL;
    }

    bool empilha(int x)
    {
        bool t = false;
        Node *aux = new Node;
        if(aux != NULL)
        {
            t = true;
            aux -> info = x;
            aux -> prox = topo;
            topo = aux;
        }
        return t;
    }

    int elemento_topo()
    {
        return topo -> info;
        /*count<<topo -> info;
          count<<topo -> prox -> info;
      */
    }
    //tenta fazer aux apontar para x e caso não consiga, retorna falso.
    int desempilha()
    {
        //int t = elemento_topo;
        int t = topo -> info;
          Node *aux = topo;
          topo = topo -> prox;
          delete aux;
          return t;
    }

    Node *getTopo()//devolve o endereço para um tipo Node
    {
        return topo;
    }
};

#endif // PILHA_H_INCLUDED
