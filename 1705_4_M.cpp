#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> elements;
    for (int j = 0; j < M; j++) {
        elements.push_back(matrix[X][j]);
    }
    for (int i = 0; i < N; i++) {
        elements.push_back(matrix[i][Y]);
    }
    sort(elements.begin(), elements.end());
    elements.erase(unique(elements.begin(), elements.end()), elements.end());
    double sum = 0;
    for (int i = 0; i < elements.size(); i++) {
        sum += elements[i];
    }
    double average = sum / elements.size();
    cout << fixed << setprecision(2) << average << endl;
    
}