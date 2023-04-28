
//PROBLEMA E - AS PIRAMIDES DO EGITO

#include <bits/stdc++.h>
using namespace std;

int main() {

    int linhas;
    cin>>linhas;

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= linhas-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "#";
        }
        cout << endl;
    }
}
