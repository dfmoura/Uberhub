#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words(n);
    for (int i = 0; i <= n; i++) {
        
        getline(cin, words[i]);
        cin.ignore();
    }

    for (int i = 0; i < n; i++) {
        if (words[i].find(' ') != string::npos) {
            int pos = words[i].rfind(' ');
            cout << words[i].substr(pos + 1) << " ";
        }
    }

    // check the last string in the vector for trailing space
    int lastIdx = n - 1;
    if (words[lastIdx][words[lastIdx].size() - 1] == ' ') {
        words[lastIdx].pop_back();
    }

    cout << endl; // end the line after printing the last words

    return 0;
}
