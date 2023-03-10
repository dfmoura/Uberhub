#include <bits/stdc++.h>
using namespace std;

int main(){

	int N, aux; // declaracao de inteiros
    vector<int> vet; // declaracao de vetores
    cin >> N; // informa quantas posicoes tem o vetor
        for(int i = 0; i < N; i++){ // para cada i = 0, no i < N posições eh realizado a iteracao i++
        cin >> aux; // preenchimento das N posicoes
        vet.push_back(aux); // apresenta ultimo elemento nas N posições
        }
        int soma = 0; //elemento neutro da soma, para nao trazer valores indevidos
        for(int i = 0; i < vet.size(); i++){//para i = 0, no i < que a ultima posicao do vetor, faca a iteracao
            soma  = soma + vet.at(i); //neste caso a soma eh 0 + a proximo valor do iterador i que eh 1 ate chegar ao tamanho do vetor
            cout << i << vet.at(i) << vet.at(i) + 1<< vet.at(i)+2<<vet.at(i)+3<< endl;
        }
        cout<< soma << endl;
}