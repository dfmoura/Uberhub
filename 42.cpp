#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i <= n; i++) {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    string m;
    cin>>m;
    for (auto it = v.begin(); it != v.end(); it++) {
        istringstream iss(*it);
        vector<string> palavra;
        for (string palavras; iss >> palavras; ) {
            palavra.push_back(palavras);
        }
        if (palavra.size() >= 2) {
            cout << palavra.back();
            if (next(it) != v.end()) {
                cout << " ";
            }
        } 
    }
    cout << endl;
}
