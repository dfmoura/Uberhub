#include <bits/stdc++.h>
using namespace std;


// deslocar x posicoes em cada caracter deu 
//uma palavra quando for apresentado uma 
//palavra a ser decodificada

/*
solucao
-declarar string  para indicar dois nomes
-ler getline destas 2 strings
-verificar se Reluew e Markinhos estao em qualquer parte da string caso contrario para para o programa.
-declarar e ler inteiro para utilizar no deslocamento do caracter do codigo
-declarar e ler string para que sera decodificada
-verificar caso seja informada a string para decodificar 
-realizar decodificacao caso contrario informar: Nao eh possivel descriptografar! 
*/

int main(){

    string str1;
    getline(cin,str1);
    if((str1.find("Reluew") == string::npos) && (str1.find("Markinhos") == string::npos)){return 0;}
    int posicao;
    cin>>posicao;
    string str2;
    cin>>str2;

    for(int i=0; i<str2.length();i++){
        char teste = str2[i];
        teste +=posicao;
        str2[i] = teste;
    }
    if(str2 ==""){
        cout<<"Nao eh possivel descriptografar!"<<endl;
    }else{
        cout<< str2<< endl;
    }
    
}