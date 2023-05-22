#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cout << "Enter the number of rows (X): ";
    cin >> X;
    cout << "Enter the number of columns (Y): ";
    cin >> Y;

    vector<vector<string>> matrix(X, vector<string>(Y));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix (Diagonal - Right Bottom to Top):" << endl;
    for (int d = 0; d < X + Y - 1; d++) {
        for (int i = X - 1; i >= 0; i--) {
            int j = Y - d + i - 1;
            if (j >= 0 && j < Y) {
                cout << matrix[i][j] << "";
            }
        }
    }
    cout << endl;

    return 0;
}
