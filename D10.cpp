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

    cout << "Matrix (Diagonal - Last Row, Bottom Left to Top Right):" << endl;
    for (int d = Y - 1; d >= 0; d--) {
        int i = X - 1;
        int j = d;
        while (i >= 0 && j >= 0) {
            cout << matrix[i][j] << " ";
            i--;
            j--;
        }
    }
    cout << endl;

    return 0;
}
