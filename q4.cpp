#include <iostream>

using namespace std;

int main(){
    int n, pares;
    cin >> n;
    int tamanhos[n];
    char pes[n];
    for (int i = 0; i < n; i++){
        cin >> tamanhos[i];
        cin >> pes[i];
    }

    // Mostrar os sapatos
    // for (int i = 0; i < n; i++){
    //     cout << tamanhos[i];
    //     cout << pes[i];
    // }

    pares = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if ((tamanhos[i] == tamanhos[j]) and (pes[i] != pes[j])){
                if (tamanhos[i] != 0 and tamanhos[j] != 0){
                    pares++;
                    tamanhos[i] = tamanhos[j] = 0;
                }
            }
        }
    }
    cout << pares;
}