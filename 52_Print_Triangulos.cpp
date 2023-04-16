#include <bits/stdc++.h>
using namespace std;

int main() {

    int linhas;
    cin >> linhas;

//imprimir metade direita do triangulo com sequencia de mesmo caracteres por linha...

    for(int i = 1; i <= linhas; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout <<endl;
    }

//imprimir metade direita do triangulo com sequencia numerica por linha...

    for(int i = 1; i <= linhas; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }

// imprimir metade direita do tringulo com sequencia de mesma letra do alfabetica, por linha...
    
    //o numero tem que pertencer ao alfabelto....
    if (linhas < 1 || linhas > 26) {
    cout << "errado"<<endl;}

    // converter entrada linha para letra do alfabeto.
    char alfabeto1 = 'A' + linhas - 1;        
    char alfabeto = 'A';

    for(int i = 1; i <= (alfabeto1-'A'+1); ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << alfabeto;
        }
        ++alfabeto;
        cout << endl;
    }

// imprimir metade direita do tringulo invertida com sequencia de mesmo caracter por linha...
    for(int i = linhas; i >= 1; --i) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

// imprimir metade direita do tringulo invertida com sequencia numerica por linha...
    for(int i = linhas; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j;
        }
        cout << endl;
    }


// imprimir os dois lado do triangulo com mesmo caracter....
    int espaco;
    for(int i = 1, k = 0; i <= linhas; ++i, k = 0) {
            for(espaco = 1; espaco <= linhas-i; ++espaco) {
                cout <<"  ";
            }
            while(k != 2*i-1) {
                cout << " *";
                ++k;
            }
            cout << endl;
    }    


// impressao de tringulo, meio com sequencia de impares, lados respectivos com sequencia de contagem finalizando no meio


    int count = 0, count1 = 0, k = 0;

    for(int i = 1; i <= linhas; ++i) {
        for(int espaco = 1; espaco <= linhas-i; ++espaco) {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1) {
            if (count <= linhas-1) {
                cout << i+k << " ";
                ++count;
            }
            else {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }


// impressao 'concavo' do espaco de triangulo

    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= linhas-i; k++) {
            cout << " ";
        }
        for (int l = 1; l <= linhas-i; l++) {
            cout << " ";
        }
        for (int m = 1; m <= i; m++) {
            cout << "*";
        }
        cout << endl;
    }

// impressao de triangulo invertido com espaco
    for(int i = linhas; i >= 1; --i) {
        for(int espaco = 0; espaco < linhas-i; ++espaco)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

// impressao de pascal's triagulo

    int coef = 1;
    for(int i = 0; i < linhas; i++) {
        for(int espaco = 1; espaco <= linhas-i; espaco++)
            cout <<"  ";

        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }


// impressao de floid's triangulo

    int numero = 1;
    for(int i = 1; i <= linhas; i++) {
        for(int j = 1; j <= i; ++j) {
            cout << numero << " ";
            ++numero;
        }
        cout << endl;
    }



// impressao de triangulo normal 
    for (int i = 1; i <= linhas; i++) {
        for (int j = 1; j <= linhas-i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }





}
