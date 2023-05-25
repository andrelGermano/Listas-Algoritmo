#include <iostream>
using namespace std;
int main(){
    int x[10], i, iIni, iFi, maior = 0, menor = 1000;
    for(i=0;i<=9;i++){
        cout << "\nX[" << i+1 << "]: ";
        cin >> x[i];
        if(x[i]<=0){
            i=10;
        }
    }
    cout << "\nIndice inicial: ";
    cin >> iIni;
    cout << "\nIndice final: ";
    cin >> iFi;
    cout << "\nVetor a partir do indice inicial até o indice final: ";
    for(i=iIni-1;i<=iFi-1;i++){
        cout << x[i] << " ";
        if(x[i]<menor){
            menor = x[i];
        }
        if(x[i]>maior){
            maior = x[i];
        }
    }
    cout << "\nO maior elemento é " << maior << " e o menor elemento é " << menor << "; e a média deles é igual a " << (maior+menor)/2;  
}
