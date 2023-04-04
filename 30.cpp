#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n+1;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    string m;
    cin>>m;
    for (const auto& s : v) {
        istringstream iss(s);
        vector<string> words;
        for (string word; iss >> word; ) {
            words.push_back(word);
        }
        if (words.size() >= 2) {
            cout << words.back() << " ";
        }
    }
    cout << endl;
}