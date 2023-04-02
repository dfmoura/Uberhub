#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N; // tamanho do vetor
    vector<int> Vi(N);
    for (int i = 0; i < N; i++) {
        cin >> Vi[i]; // digitar os elementos do vetor
    }
    int max_val = Vi[0], max_pos = 0,  count = 1;
    for (int i = 1; i < N; i++) {
        if (Vi[i] > max_val) {
            max_val = Vi[i]; // atualiza valor max
            count = 1; // reinicia contagem valor max
        } else if (Vi[i] == max_val) {
            count++; // incremento de contagem valor max
        }
    }
    for (int i = 0; i < Vi.size();i++){
        if(Vi[i]== max_val){
            max_pos =i;  // atualiza ultima posicao do valor max
        }
    }
    int min_val = Vi[0],min_pos=0, count1 = 1;
    for (int i = 1; i < N; i++) {
        if (Vi[i] < min_val) {
            min_val = Vi[i]; // atualiza valor min
            count1 = 1; // reinicia contagem valor min
        } else if (Vi[i] == min_val) {
            count1++; // incremento de contagem valor min
        }
    }
    for (int i = 0; i < Vi.size();i++){
        if(Vi[i]== min_val){
            min_pos =i;  // atualiza ultima posicao do valor min
        }
    }
    cout << "Maior valor: " << max_val << endl;
    cout << "Ultima posicao do maior valor: " << max_pos<< endl;
    cout << "Quantidade de vezes que apareceu: " << count << endl;
    cout<< endl;
    cout << "Menor valor: " << min_val << endl;
    cout << "Ultima posicao do menor valor: " << min_pos<< endl;
    cout << "Quantidade de vezes que apareceu: " << count1 << endl;
}
