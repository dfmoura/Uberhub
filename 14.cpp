#include <bits/stdc++.h>
using namespace std;

// funcao para calcular a soma de 2 inteiros

int soma(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    cin>>x>>y;
    int result = soma(x,y);
    cout<< "A soma de "<< x << " e "<< y << ": "<< result<<endl;

    return 0;

}