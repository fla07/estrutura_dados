#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#define MAX 10

struct Pilha{
    int elementos [MAX];
    int topo;

    Pilha(){
        topo=-1;
    }

    void empilha(int x){
        topo++;
        elementos[topo]=x;
        //elementos[++topo];
    }
    int desempilha(){
        int t=elementos[topo];
        topo--;
        return t;
    }
    int elementodotopo(){
        return elementos[topo];
    }
    bool pilhacheia(){
        return(topo==MAX-1);
    }
    bool pilhavazia(){
        return topo==-1;
    }
};

#endif // PILHA_H_INCLUDED
