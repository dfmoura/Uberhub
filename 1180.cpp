#include <bits/stdc++.h>
using namespace std;

/* Faça um programa que leia um valor N. Este N será o tamanho 
de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre 
o menor elemento deste vetor
 e a sua posição dentro do vetor, mostrando esta informação.*/

int main(){

    vector<int> vet;
    int N,aux, i=0;
    cin>>N;
    for(int i = 0; i < N;i++){
        cin>>aux;
        vet.push_back(aux);
    }
    int menor_val = vet[0];
    int posicao = 0;
    for (int i=1; i< vet.size();i++){
        if(vet[i]< menor_val){
            menor_val = vet[i];
            posicao = i;
        }
    }
    cout << "Menor valor: " << menor_val << endl;
    cout << "Posicao: " << posicao << endl;
}    