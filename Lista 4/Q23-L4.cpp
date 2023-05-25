#include <iostream>
using namespace std;
int main(){
    int x[10], i, p, x;
    for(i=0;i<=8;i++){
        cout << "\nPrimeiros 8 numeros: ";
        cin >> x[i];
    }
    do{
        cout << "\nIndice p: "/;
        cin >> p;
    }while(p<0||p>8);
    cout << "\nValor de x: ";
    cin >> x;
    
    for(i=9;i>=p;i--){
        v[i+1]=V[i];
    }
    v[i]=x;
    cout << "\nVetor final: ";
    for(i=0;i<=9;i++){
        cout << v[i] << " ";
    }
}
