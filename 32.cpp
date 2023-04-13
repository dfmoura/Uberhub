#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n+1;
    //cin.ignore(); // ignore the newline character after n
    
    vector<string> words;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        words.push_back(line);
    }
    string m;
    cin >> m;
    for (int i = 0; i < n; i++) {
        int space_pos = words[i].find_last_of(" "); // find the last space character
        if (space_pos != string::npos && space_pos < words[i].size() - 1) {
            // only print the last word if there are at least two words in the string
            // and the last character of the string is not a space
            cout << words[i].substr(space_pos + 1) << " ";
        }
    }
    
    cout << endl;
    

    if (!words.empty()) {
        // remove any trailing whitespace from the last string
        int last_index = words.size() - 1;
        int last_char_pos = words[last_index].size() - 1;
        while (last_char_pos >= 0 && isspace(words[last_index][last_char_pos])) {
            last_char_pos--;
        }
        words[last_index].erase(last_char_pos + 1);
    }

    // print the vector contents for debugging purposes
    for (const string& word : words) {
        cout << word << endl;
    }
    

    return 0;
}
