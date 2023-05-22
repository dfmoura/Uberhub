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

    cout << "Matrix (Diagonal - Left Top to Right Bottom):" << endl;
    for (int d = 0; d < X + Y - 1; d++) {
        for (int i = max(0, d - Y + 1); i <= min(d, X - 1); i++) {
            int j = d - i;
            cout << matrix[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
