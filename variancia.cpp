#include <iostream>
#include <math.h>
using namespace std;

float variancia(float vetor[], int tamanho){
    float vetaux[tamanho], varaux1 = 0, varaux2 = 0, resp;
    for(int i=0;i<tamanho;i++){
        vetaux[i] = vetor[i]*vetor[i];
        varaux1 += vetor[i]; varaux2 += vetaux[i];
    }
    resp = (varaux2-((varaux1*varaux1)/tamanho))/(tamanho-1);
    return resp;
}

int main(){
    int tamanho;
    cout << "Insira o tamanho da amostragem: ";
    cin >> tamanho;
    float vetor[tamanho];
    cout << "Agora insira cada elemento:" << endl;

    for(int i=0;i<tamanho;i++)cin >> vetor[i];

    cout << "Variância: " << variancia(vetor, tamanho) << endl << "Desvio padrão: " << sqrt(variancia(vetor, tamanho));
}