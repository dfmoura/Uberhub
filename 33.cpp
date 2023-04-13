#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    n=n+1;
    cin.ignore(); // ignore the newline character after reading n

    vector<string> vec;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        vec.push_back(s);
    }

    
    int count = 0;
    for (int i = 0; i < vec.size(); i++) {
        // count the number of words in the current string
        int words = 0;
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == ' ') {
                words++;
            }
        }
        // print the last word of the current string if there are at least 2 words
        if (words >= 1) {
            count++;
            // find the index of the last space in the current string
            int pos = vec[i].find_last_of(' ');
            // print the substring after the last space
            cout << vec[i].substr(pos+1) << " ";
        }
    }
    // remove the trailing space if any
    if (count >= 1) {
        cout << endl;
    }

    // check the last string of the vector for trailing spaces
    int last_idx = vec.size()-1;
    int last_space = vec[last_idx].find_last_not_of(' ');
    if (last_space != vec[last_idx].size()-1) {
        // the last string has trailing spaces, remove them
        vec[last_idx] = vec[last_idx].substr(0, last_space+1);
    }

    // print the updated last string of the vector
    cout << vec[last_idx] << endl;

    return 0;
}
