#include <bits/stdc++.h>
using namespace std;

// 
// a partir de N números inteiros positivos 
// descobri os que sao impares e multiplos tres


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
