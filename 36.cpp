#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vec;
    string input;

    while (getline(cin, input)) {
        vec.push_back(input);
    }

    for (int i = 0; i < vec.size(); i++) {
        stringstream ss(vec[i]);
        string word;
        while (ss >> word) {} // discard previous words
        if (i == vec.size() - 1) { // last vector
            cout << word;
        } else {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
