#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n+1;
    cin.ignore(); // Ignore the newline character after n

    vector<string> strings;
    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        strings.push_back(str);
    }

    for (const string& str : strings) {
        stringstream ss(str);
        string last_word;
        while (ss >> last_word); // Read until the last word
        cout << last_word << " ";
    }
    cout << endl;

    return 0;
}
