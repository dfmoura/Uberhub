#include <bits/stdc++.h>
using namespace std;

int main(){

	int N=10, aux,c; // declaracao de inteiros
    string a,b;
    vector<int> vet; // declaracao de vetores
    //cin >> N; // informa quantas posicoes tem o vetor
        for(int i = 0; i < N; i++){ // para cada i = 0, no i < N posições eh realizado a iteracao i++
        cin >> aux; // preenchimento das N posicoes
        vet.push_back(aux); // salva ultimo elemento nas N posições
        cout<<aux<<endl;
        }
        cout<<vet.at(3)<< " - fica na posicao 3"<<endl;
        cout<<vet.size()<< " o tamanho do vetor "<<endl; // imprime ultimo elemento nas N posições
        cin>>c;
        for(int i = 0; i < N; i++){
            if( vet.at(i) == c){a="SIM";}
        }
        if (a == "SIM"){cout<<"SIM"<<endl;}else{cout<<"NAO"<<endl;}
}
