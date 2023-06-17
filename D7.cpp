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

    cout << "Matrix (Diagonal - Left Bottom to Right Top):" << endl;
    for (int d = 0; d < X + Y - 1; d++) {
        for (int i = 0; i <= d; i++) {
            int j = d - i;
            if (i < X && j < Y) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
