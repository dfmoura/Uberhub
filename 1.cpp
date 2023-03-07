// executar o compilador: g++ -o nomeARquivo nomeArquivo.cpp
// depois: ./nomeArquivo

// Revisao basica 
//    Comandos de entrada e saída;​
// scanf() -> cin​
// printf() -> cout

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    cout << "O valor de x eh: "<< x << endl;
    for(int i = 0; i < x;i++){
        cout << i << " ";
    }
// Estruturas condicionais


    if (x == 10){
        cout<< "X vale 10\n" << endl;
    }else if(x > 10){
        cout<<"X eh maior que 10\n"<< endl;
    }else{
        cout<<"X eh menor que 10\n"<<endl;
    }
// Estruturas de repetição
    for(int i = 0; i<10; i++){
        cout<<i<<endl;
    }
}