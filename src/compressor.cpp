#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    int numero;
    vector<int> numeros;
    vector<int> repetidos;

    cin >> numero;

    if(numero >= 0){
        while (numero >= 0){
            numeros.push_back(numero);
            cin >> numero;
        }

        for(int i = 0; i < numeros.size(); i++){
            cout << numeros[i] << " ";
        }

        int cont = 1;
        for(int i = 0; i < numeros.size(); i++){
            if(numeros[i] == numeros[i+1]){
                cont++;
            }
            repetidos.push_back(cont);
            repetidos.push_back(numeros[i]);
        }

        cout << "\n";

        for(int i = 0; i < repetidos.size(); i++){
            cout << repetidos[i] << " ";
        }

    }else{
        return 1;
    }    
}