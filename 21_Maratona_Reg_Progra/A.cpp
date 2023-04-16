#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    double max_division = 0;
    int max_a, max_b;

    for(int i=0; i<N; i++){
        int a,b;
        cin>>a>>b;
        double division = static_cast<double>(a)/b;
        if (division > max_division){
            max_division = division;
            max_a = a;
            max_b = b;
        }
    }
    cout<< max_division << endl;
    cout << max_a << " " << max_b << endl;

}