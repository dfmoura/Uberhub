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

    string output;
    bool first_word = true;
    for (int i = 0; i < n; i++) {
        string last_word;
        istringstream iss(lines[i]);
        int count = 0;
        while (iss >> last_word) {
            count++;
        }
        if (count > 2) {
            if (!first_word) {
                output += " ";
            }
            output += last_word;
            first_word = false;
        }
    cout << output;
    }


    return 0;
}
