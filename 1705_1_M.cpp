#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, w, z;
    cin >> x >> y >> w >> z; // Read in the size of the matrix and row + column to sum
    
    // Create the matrix with x rows and y columns
    vector<vector<int>> matrix(x, vector<int>(y, 0));
    
    // Read in the matrix elements
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> matrix[i][j];
        }
    }
    
    
    // Calculate the sum and average of the specified row and column
    int row_sum = 0, col_sum = 0;
    for (int i = 0; i < x; i++) {
        row_sum += matrix[w][i];
    }
    for (int j = 0; j < y; j++) {
        col_sum += matrix[j][z];
    }
    
    double avg = (((double) row_sum)+((double) col_sum)) / (double)(y+x);
    
    // Output the sums and averages
    cout << fixed << setprecision(2);
    cout << "Sum of row " << w << ": " << row_sum << endl;
    cout << "Sum of column " << z << ": " << col_sum << endl;
    cout << fixed << setprecision(2) << "Average of row/column: " << avg << endl;
    
    return 0;
}
