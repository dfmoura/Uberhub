#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n+1;
    cin.ignore(); // ignore the newline character left in the stream by cin

    vector<string> vec(n);
    for (int i = 0; i < n; i++) {
        getline(cin, vec[i]);
    }

    bool first_word = true;
    for (const string& s : vec) {
        istringstream iss(s);
        string word;
        while (iss >> word) {} // skip all words until the last one
        if (!first_word && word != "") {
            cout << " " << word;
        } else if (word != "") {
            cout << word;
            first_word = false;
        }
    }
    cout << endl;

    return 0;
}
