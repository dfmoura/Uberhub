#include <bits/stdc++.h>
using namespace std;

//funcao para transformar a primeira letra da string em maiusculo e as demais minusculo

string primeMaiusc(string str){
    stringstream ss(str);
    string resultado ="";
    string palavra;
    
    while(ss>>palavra){
        palavra[0]=toupper(palavra[0]);
        resultado += palavra + " ";
    }
    resultado.pop_back();
    return resultado;
}

int main(){
    string str;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    string primeMaiuscula = primeMaiusc(str);
    cout<<primeMaiuscula <<endl;
    return 0;
}