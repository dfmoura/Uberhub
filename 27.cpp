#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ignore the newline character left by the previous cin

    vector<string> strs;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        strs.push_back(s);
    }

    // do something with the vector of strings
    for (const string& s : strs) {
        cout << s << endl;
    }

    return 0;
}
