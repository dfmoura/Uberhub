// D - O grande detetive
//CRIAR MATRIZ E DIAGONAL PRINCIPAL --- x e y = impar para conseguir diagonal principal

#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    // Creating the matrix dynamically
    int** matrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Initializing the matrix with values
    int count = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = count;
            count++;
        }
    }

    // Printing the matrix from bottom diagonal to top and storing elements in a vector
    vector<int> elements;
    for(int k = cols-1; k >= 0; k--) {
        for(int i = rows-1, j = k; i >= 0 && j < cols; i--, j++) {
            cout << matrix[i][j] << " ";
            elements.push_back(matrix[i][j]);
        }
    }

    // Printing the elements stored in the vector
    cout << endl << "Elements in the vector:" << endl;
    for(int i = 0; i < elements.size(); i++) {
        cout << elements[i] << " ";
    }

    // Freeing the memory allocated for the matrix
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    cout<<endl;
    return 0;
}
