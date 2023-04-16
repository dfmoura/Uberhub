#include <bits/stdc++.h>
using namespace std;

    //declarar o vetor inteiro
    //declarar variavel que representa o numero de posicoes do vetor
    //declarar variavel que preencherá as posicoes do vetor
    //realizar uma repeticao para cada posicao de N posicao abrir uma entrada de elemento
    //salvar o elemento da ultima posicao
    //criar uma variavel de busca
    //dar entrada em variavel de busca
    //criar variavel que ira receber resultado de busca em vetor
    //utilizar formula que ira buscar elemento no vetor
    //criar verificacao se existe ou nao elemento no vetor

int main(){

	int N=10, aux,c;
    string a,b;
    vector<int> vet;
        for(int i = 0; i < N; i++){
        cin >> aux;
        vet.push_back(aux);
        }
        cin>>c;
        for(int i = 0; i < N; i++){
            if( vet.at(i) == c){a="SIM";}
        }
        if (a == "SIM"){cout<<"SIM"<<endl;}else{cout<<"NAO"<<endl;}
}