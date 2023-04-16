#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y,row, col;
    cin >> x >> y >> row >> col;


    int matrix[x][y];

    // Input elements of matrix
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> matrix[i][j];
        }
    }

    // List elements of a certain row and column
    for (int j = 0; j < y; j++) {
        cout << matrix[row][j] << " ";
    }
    cout << endl;


    for (int i = 0; i < x; i++) {
        cout << matrix[i][col] << " ";
    }
    cout << endl;

    // Insert elements of certain row and column into a vector
    vector<int> elements;
    for (int j = 0; j < y; j++) {
        elements.push_back(matrix[row][j]);
    }
    for (int i = 0; i < x; i++) {
        elements.push_back(matrix[i][col]);
    }

    // Remove repeated elements
    sort(elements.begin(), elements.end());
    elements.erase(unique(elements.begin(), elements.end()), elements.end());

    // List the resulting vector
    for (int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }
    cout << endl;

    // Calculate the average of the resulting vector
    double sum = 0;
    for (int i = 0; i < elements.size(); i++) {
        sum += elements[i];
    }
    double average = sum / elements.size();
    cout << "Average of non-repeated elements: " << fixed << setprecision(2) << average << endl;

    return 0;
}
