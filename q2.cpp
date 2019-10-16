#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++)
        cin >> vetor[i];
    
    for (int i = 0; i < n; i++){
        if (vetor[i] % 2)
            vetor[i] = -1;
        else
            vetor[i] = 1;
    }

    for (int i = 0; i < n; i++)
        cout << "V[" << i << "] = " << vetor[i] << endl;

}