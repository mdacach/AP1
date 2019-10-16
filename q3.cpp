#include <iostream>

using namespace std;

void print(int n){
    for (int i = 0; i < n; i++)
        cout << "*";
}

int main(){
    int n;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++)
        cin >> vetor[i];
    
    for (int i = 0; i < n; i++){
        print(vetor[i]);
        cout << endl;
    }

}