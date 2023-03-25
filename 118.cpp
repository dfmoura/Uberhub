#include <bits/stdc++.h>
using namespace std;

//verificar se as vogais minusculas de uma string sao palindromos

int main(){

    string str, vogal,a,d;
    cin>>str;

    for(int i = 0; i<str.length();i++){
        char c = tolower(str[i]); // converta em minusculo o caracter
        if ((c == 'a') || (c=='e') || (c == 'i') || (c == 'o') || (c == 'u')){
            vogal +=c;
        }
    }
    d = vogal;
    reverse(d.begin(), d.end());    

    if(d==vogal){cout<<"S"<<endl;}else{cout<<"N"<<endl;}
}