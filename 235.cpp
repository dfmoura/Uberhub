#include <bits/stdc++.h>
using namespace std;


//neps-235

/*::::::solucao:::::::
inserir os dados em uma string
percorrer cada VERIFICACAO se caracter corresponde ao esperado
caso seja converta de acordo com uma condicao determinada
caso nao seja preserve o caracter em questao
imprima a nova string
*/

int main(){

    string str, vogal,a,d;
    cin>>str;

    for(int i = 0; i<str.length();i++){
        char c = (str[i]);
        if ((c == 'A') || (c=='B') || (c == 'C')){
            c = '2';}
        else if((c == 'D') || (c=='E') || (c == 'F')){
        c = '3';}
        else if((c == 'G') || (c=='H') || (c == 'I')){
        c = '4';}
        else if((c == 'J') || (c=='K') || (c == 'L')){
        c = '5';}
        else if((c == 'M') || (c=='N') || (c == 'O')){
        c = '6';}        
        else if((c == 'P') || (c=='Q') || (c == 'R')||(c == 'S')){
        c = '7';}
        else if((c == 'T') || (c=='U') || (c == 'V')){
        c = '8';}
        else if((c == 'W') || (c=='X') || (c == 'Y')||(c == 'Z')){
        c = '9';}                
        cout<<c;
    }cout<<endl;
    
    
}
    
