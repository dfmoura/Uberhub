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

    cout << "Matrix (Last Row to First Row, Left Diagonal to Right Diagonal):" << endl;
    for (int d = -(Y - 1); d < X; d++) {
        for (int i = X - 1; i >= 0; i--) {
            int j = i - d;
            if (j >= 0 && j < Y) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
