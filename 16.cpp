#include <bits/stdc++.h>
using namespace std;

// funcao para somar vetores

int somaVetor(vector<int> vec){
    int soma = 0;
    for (int i = 0;i<vec.size();i++){
        soma += vec[i];
    }
    return soma;
}

int main()
{
    vector<int> vec = {1,2,3,4,5};
    int resultado = somaVetor(vec);
    cout<<"A soma do vetor eh: "<<resultado<<endl;
    return 0;
}

