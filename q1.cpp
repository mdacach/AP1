#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int V[n];

    // Recebendo os valores
    for (int i = 0; i < n; i++)
        cin >> V[i];

    // Mostrando os valores
    for (int i = 0; i < n; i++)
        cout << "V[" << i << "] = " << V[i] << endl;
    
}