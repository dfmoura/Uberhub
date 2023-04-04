#include <bits/stdc++.h>
using namespace std;

/*a partir de N entradas de string dentro de um vetor, pegar a ultima palavra de cada vetor 
(quando o vetor tiver 
mais de uma string) e agrupala para formar uma frase.*/


int main() {
    int n; 
    cin >> n; //ler a quantidade de n vetores
    n = n+1;

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        getline(cin,v[i]); // ler os n vetores
    }
    
    // imprimir as strings para cada vetor
    for (int i = 0; i < n; i++) {
            cout << v[i] << endl;
    }
        

}