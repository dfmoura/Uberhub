#include <bits/stdc++.h>
using namespace std;

int main(){

    int vetor[5],i;
    
    vetor[0]=10;
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    for(int i=0; i < 5; i++){
        cout<<vetor[i]<<endl;
    }

    for(int i=0; i < sizeof(vetor)/4; i++){
        cout<<vetor[i]<<endl;
    }



}