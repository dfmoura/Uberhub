#include <bits/stdc++.h>
using namespace std;

/*Tira a media da juncao dos elementos de uma linha e uma coluna de uma matrix*/

int main() {
    int x, y;
    cin >> x >> y; // lê o tamanho da matriz
    
    // cria a matriz com x linha e y colunas
    vector<vector<int>> matrix(x, vector<int>(y, 0));
    
    // imprime a matriz
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}