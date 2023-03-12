#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vet{ 1, 2, 3, 4, 5 };
    vet.push_back(6);

  
    // vet inicio 1, 2, 3, 4, 5, 6
  
    for (auto i = vet.begin(); i != vet.end(); ++i)
        {cout << ' ' << *i;}
    cout<<endl;
}