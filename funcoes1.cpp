#include <bits/stdc++.h>
using namespace std;

double areaCirculo(double raio){
    double pi = 3.14159;
    double area = pi * raio * raio;
    return area;
}

void mostraMensagemArea(double raio){
    cout << "A=" << areaCirculo(raio) << endl;
}


int main(){


    double x;
    cin>>x;
    double area = areaCirculo(x);
    cout << area << endl;

    mostraMensagemArea(x);
}