#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<string> > vectors(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vectors[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> vectors[i][j];
        }
    }

    vector<string> last_strings(n);
    for (int i = 0; i < n; i++) {
        last_strings[i] = vectors[i].back();
    }

    // print the last strings
    for (int i = 0; i < n; i++) {
        cout << "Vector " << i+1 << " last string: " << last_strings[i] << endl;
    }

    return 0;
}
