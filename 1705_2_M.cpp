#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y,r,c;
    cin >> x>>y>>r>>c;

    
    vector<vector<int>> matrix(x, vector<int>(y));
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            cin >> matrix[i][j];
        }
    }
    
    
    vector<int> rowElements, colElements;
    
    // List all elements of the row
    for(int j=0; j<y; j++) {
        cout << matrix[r][j] << " ";
        rowElements.push_back(matrix[r][j]);
    }
    cout << endl;
    
    // List all elements of the column
    for(int i=0; i<x; i++) {
        cout << matrix[i][c] << " ";
        colElements.push_back(matrix[i][c]);
    }
    cout << endl;
    
    // Insert elements of the row and column into a vector
    vector<int> rowColElements;
    for(int j=0; j<y; j++) {
        if(j != c && matrix[r][j] != matrix[r][c]) {
            rowColElements.push_back(matrix[r][j]);
        }
    }
    for(int i=0; i<x; i++) {
        if(i != r && matrix[i][c] != matrix[r][c]) {
            rowColElements.push_back(matrix[i][c]);
        }
    }
    
    // Print elements of row and column that were inserted into the vector
    for(int i=0; i<rowColElements.size(); i++) {
        cout << rowColElements[i] << " ";
    }
    cout << endl;
    
    return 0;
}
