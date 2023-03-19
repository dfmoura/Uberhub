#include <bits/stdc++.h>
using namespace std;

//Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores 
//nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

// 1 - declarar vetor inteiro estatico
// 2 - percorrer as posicoes do vetor x e inserir os elementos y ate completar o vetor
// 3 - gerar condicao que ao percorrer o vetor 
// os numero inteiro <=0 sejam substituidos na respectiva posicao por 1
// caso contrario permanecer como o mesmo elemento
// 4 - imprimir o vetor 

int main(){

    int x[10], i=0, j=0;

    for (int i = 0; i < 10; i++){
        cin>>x[i];
    }
    for (int i=0; i< 10;i++){
        if(x[i]<=0){
            x[i]=1;
        }
    }
    for (i=0;i<10;i++){
        cout<<"X["<<i<<"] = "<<x[i]<<endl;
    }
}
