#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X;
    cin >> Y;

    vector<char> a;
    vector<vector<char>> matrix(X, vector<char>(Y));

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {

            cin >> matrix[i][j];
        }
    }

    for (int d = -(Y - 1); d < X; d++) {
        for (int i = X - 1; i >= 0; i--) {
            int j = i - d;
            if (j >= 0 && j < Y) {
                a.push_back(matrix[i][j]);

            }
        }
    }
    reverse(a.begin(),a.end());
    cout << endl;
        for(int i = 0; i < a.size(); i++){
            cout<<a.at(i);}
    cout << endl;

    return 0;
}
