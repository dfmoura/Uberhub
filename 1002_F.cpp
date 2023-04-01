#include <bits/stdc++.h>
using namespace std;

// funcao para calcular a area do círculo


double areaCirculo(double raio){
    double pi = 3.14159;
    double area = pi * raio * raio;
    return area;
}

void mostraMensagemArea(double raio){
    cout <<fixed<<setprecision(4)<< "A=" << areaCirculo(raio) << endl;
}


int main(){


    double x;
    cin>>x;
    double area = areaCirculo(x);

    mostraMensagemArea(x);
}