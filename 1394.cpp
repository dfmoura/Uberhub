#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Este programa tem objetivo de verificar se uma palavra ou frase eh um palindromo"<<endl;
    cout<<"Palindromos sao palavras que ao reverter a escrita continuam identicas"
    cout<<"Getileza digitar a frase sem espacos"
    cout<<"Exemplo: Subi no Onibus --- Digitar: Subinoonibus"
    string str, str1;
    getline(cin,str);
    str1=str;
    reverse(str1.begin(), str1.end());    
    if(str == str1){
        cout<< "eh palindromo"<<endl;
    }else{
        cout<<"nao eh palindromo"<<endl;
    }

}