#include <iostream>
using namespace std;

typedef struct{
    double** m;
    int nLinhas;
    int nColunas;
}Matriz;

void inicializaMatriz(Matriz &X, int ls, int cs, const double elem){
    X.nLinhas = ls;
    X.nColunas = cs;
    for(int i=0; i < ls; i++){
        for(int j=0; j < cs; j++){
            cin
            X.m[i][j] = elem;
        }
    }
}

void apagaMatriz(Matriz &X){

}

Matriz transposta(Matriz &X){
    return X;
}

Matriz multiplica_por_cte(Matriz &X, double k){
    return X;
}

void imprimeMatriz(Matriz &X){
    for(int i=0; i < X.nLinhas; i++){
        for(int j=0; j < X.nColunas; j++){
            cout << X.m[i][j] << "\t";
        }
        cout << "\n";
    }
}