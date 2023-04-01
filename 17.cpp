#include <bits/stdc++.h>
using namespace std;

// funcao para somar vetor dinamico

int somaVetorDinamico(vector<int> vec){
    int soma = 0;
    for (int i = 0;i<vec.size();i++){
        soma += vec[i];
    }
    return soma;
}


int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0;i<n;i++){
        cin>>vec[i];
    }
    int resultado = somaVetorDinamico(vec);
    cout<<resultado<<endl;
    return 0;
}

