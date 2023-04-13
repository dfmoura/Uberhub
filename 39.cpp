#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // consume the newline after n

    vector<string> lines;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        lines.push_back(line);
    }

    string output = "";
    for (int i = 0; i < n; i++) {
        string last_word;
        istringstream iss(lines[i]);
        while (iss >> last_word) {}
        if (i == n - 1) {
            output += last_word;
        } else {
            output += " " + last_word;
        }
    }

    cout << output.substr(1);
    cout<<endl;
    return 0;
}
