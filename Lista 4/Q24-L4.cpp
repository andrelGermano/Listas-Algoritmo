#include<iostream>
using namespace std;
int main(){
    const int tam = 10;
    int B[tam], C[tam], i, j, cont, k=0;

    for(i=0; i<tam; i++){
        cout << "\tDigite o elemento B[" << i << "]: ";
        cin >> B[i];
    }
    cout << "\n\tB: ";
    for(i=0; i<tam; i++){
        cout << B[i] << " ";
    }
    for(i=0; i<tam; i++){
        cont = 0;
        for(j=0; j<tam; j++){
            if(B[i]==B[j]){
                cont++;
            }
        }
        if(cont==1){
            C[k++] = B[i];
            B[i] = -1;
        }
    }
    cout << "\n\tB (final): ";
    for(i=0; i<tam; i++){
        cout << B[i] << " ";
    }
    cout << "\n\tC: ";
    for(i=0; i<k; i++){
        cout << C[i] << " ";
    }
    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}
