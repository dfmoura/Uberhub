#include <bits/stdc++.h>
using namespace std;

//Declarar vetor estatico
//inserir 
//varrer vetor e nar quantas posicoes entradas da verificacao
//mostrar onde esta cada elemento do vetor



int main(){
    int vetor[10], vetor2[10];
    int i=0,qtd=0,j=0;
    for(int i=0; i<10; i++){
        cin>>vetor[i];
    }
    int busca;
    cin>>busca;
    
    for(int i=0; i<10; i++){
        if(vetor[i]==busca){
            qtd++;
            vetor2[j]=i;
            j++;
        }
    }
    if( qtd > 0 ){
        cout<<qtd<<endl;
        for(int i =0;i<qtd;i++){
            cout<<vetor2[i]<<" ";
        }
    }
    else{
        cout<<"Mias x";
    }
    
     
}