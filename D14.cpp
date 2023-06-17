#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cout << "Enter the number of rows (X): ";
    cin >> X;
    cout << "Enter the number of columns (Y): ";
    cin >> Y;

    vector<vector<string>> matrix(X, vector<string>(Y));
    vector<string> B;

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix (First Row to Last Row, Right Diagonal to Left Diagonal):" << endl;
    for (int d = Y - 1; d >= 0; d--) {
        for (int i = 0; i < X; i++) {
            int j = d - i;
            if (j >= 0 && j < Y) {
                cout << matrix[i][j] << " ";
                if (i == X - 1) {
                    B.push_back(matrix[i][j]);
                }
            }
        }
    }
    cout << endl;

    cout << "Vector B (Reverse): ";
    for (int i = B.size() - 1; i >= 0; i--) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
