#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // consume the newline after n

    vector<vector<string>> lines;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        vector<string> words;
        string word;
        while (iss >> word) {
            words.push_back(word);
        }
        lines.push_back(words);
    }

    for (int i = 0; i < n; i++) {
        vector<string> words = lines[i];
        int num_words = words.size();
        for (int j = 0; j < num_words; j++) {
            if (j == num_words - 1 && i == n - 1) {
                cout << words[j];
            } else {
                cout << words[j] << " ";
            }
        }
    }

    return 0;
}
