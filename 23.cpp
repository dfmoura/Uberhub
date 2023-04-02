#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Input size of the vector
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Input elements of the vector
    }

    int max_val = v[0], max_pos = 0, count = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] > max_val) {
            max_val = v[i]; // Update maximum value
            max_pos = i; // Update last position of maximum value
            count = 1; // Reset count to 1
        } else if (v[i] == max_val) {
            count++; // Increment count of maximum value
        }
    }

    cout << "The greatest value is " << max_val << endl;
    cout << "The last position of the greatest value is " << max_pos + count -1 << endl;
    cout << "The greatest value appears " << count << " times" << endl;

    return 0;
}
