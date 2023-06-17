#include <bits/stdc++.h>
using namespace std;


int main(){

    float a,b,c,temp;
    cin>>a>>b>>c;

    if((b > a)&&(b>c)){
        temp = a;
        a = b;
        b = temp;
    }if(c > a){
        temp = a;
        a = c;
        c = temp;}
    

    if (a >= (b + c)) {cout << "NAO FORMA TRIANGULO" << endl;
    }else{
        if ((a * a) == ((b * b) + (c * c))) {cout << "TRIANGULO RETANGULO" << endl;}
        if ((a * a) > ((b * b) + (c * c))) {cout << "TRIANGULO OBTUSANGULO" << endl;}
        if ((a * a) < ((b * b) + (c * c))) {cout << "TRIANGULO ACUTANGULO" << endl;}
        if ((a == b) && (a == c)) {cout << "TRIANGULO EQUILATERO" << endl;}
        if (((a == b) && (a != c) )||((a == c) && (a != b))||((b == c) && (b != a) )) {cout << "TRIANGULO ISOSCELES" << endl;}
    }

} 
