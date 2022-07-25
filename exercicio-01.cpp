#include <iostream>
using namespace std;

int main(){
    int INDICE = 13;
    int SOMA = 0;
    int k = 0;

    do{
        k = k + 1;
        SOMA = SOMA + k;
    }while(k<INDICE);

    cout << SOMA; // RESPOSTA SERÁ 91
}