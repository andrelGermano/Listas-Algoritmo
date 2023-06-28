#include <iostream>
using namespace std;

void minMax(int *v, int *pMin, int *pMax);


int main(){
    int vetor[10], i, min, max;

    for(i=0; i<10; i++){
        cout << "\n\tDigite o elemento vetor[" << i << "]: ";
        cin >>vetor[i];
    }

    minMax(vetor, &min, &max);

    cout << "\n\tMenor elemento: " << min;
    cout << "\n\tMaior elemento: " << max;

    cout << "\n\tFim de programa";
    system("PAUSE");

}

void minMax(int *v, int *pMin, int *pMax){
    int i, menor, maior;
    menor = maior = v[0];
    for(i=1; i<10; i++){
        if(v[i] < menor){
            menor = v[i];
        }
        if(v[i]>maior){
            maior = v[i];
        }
    }
    *pMin = menor;
    *pMax = maior;

}
