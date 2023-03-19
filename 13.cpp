#include <bits/stdc++.h>
using namespace std;

int main(){
    //declarar um vetor estatico
    int estatico[5];
    //percorrer as 5 posicoes com um for
    //e inserir elementos em cada uma das 5 posicoes abertas
    for(int i = 0; i < 5;i++){
        cin>>estatico[i];
    }
    //declarar variavel de busca, quantidade encontrada da busca,
    //novo vetor para utilizar o numero de posicoes de i e
    //variavel para novo vetor
    int busca,qtd=0,j=0;
    int estatico2[5];
    //inserir que numero buscar no vetor
    cin>>busca;
    //ao percorrer com um for o vetor estatico e para cada
    //busca encontrada somar 1
    for(int i=0; i<10;i++){
        if(estatico[i]==busca){
            qtd++;
            estatico2[j]=i;
            j++;
        }
    }
    //imprimir posicoes encontradas no vetor a partir da busca
    if (qtd > 0){
        cout<<qtd<<endl;
        for(int i=0;i<qtd;i++){
            cout<<estatico2[i]<<" ";
        }cout<<endl;
    }else{cout<<"not found!!!!!"<<endl;}
}