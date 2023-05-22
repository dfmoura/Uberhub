//CRIAR MATRIZ E DIAGONAL PRINCIPAL --- x e y = impar para conseguir diagonal principal

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Digite o tamanho da matriz (total de: linhas e colunas): ";
    cin >> n;

    int matrix[n][n];
    cout << "Preecher os elementos da matriz:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Os elementos da diagonal principal sao:\n";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}
