#include <bits/stdc++.h>

using namespace std;

int main(){

//  Vetores

    int N, aux;
    vector<int> vet;

    cin>>N;

// Cria um vetor para armazenar em N posições
    for(int i = 0;i < N; i++){
        cin >> aux;
        vet.push_back(aux);
        //Insere “elem”  ao final do vetor
    }

// Calcula a soma total do vetor

    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    cout<< soma << endl;

// Calcula o valor medio do vetor

    double media;
    media = soma / (double) vet.size();
    cout << media << endl;

}