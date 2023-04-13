#include <bits/stdc++.h>
using namespace std;

// de N números inteiros positivos 
// verificar os que sao impar e multiplo tres


int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 2 == 1) {
            cout << i << endl;
        }
    }
    cout << endl;
    return 0;
}