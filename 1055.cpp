#include <bits/stdc++.h>
using namespace std;

// funcao para calcular o produto de 2 inteiros

int produto(int a, int b){
    return a * b;
}

int main(){
    int x, y;
    cin>>x>>y;
    int result = produto(x,y);
    cout<< "PROD = "<< result<<endl;

    return 0;

}