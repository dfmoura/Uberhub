#include <bits/stdc++.h>
using namespace std;


int main(){

    string str, vogal, consoante;
    cin>>str;

    for(int i = 0; i<str.length();i++){
        char c = tolower(str[i]); // converta em minusculo o caracter
        if ((c == 'a') || (c=='e') || (c == 'i') || (c == 'o') || (c == 'u')){
            vogal +=c;
        }else if(c >= 'a' &&  c<= 'z'){
            consoante +=c;
        }
    }
    cout<<"Vogais: "<< vogal << endl;
    cout<<"Consoantes: "<< consoante << endl;
}