#include <iostream>
using namespace std;

void inverteVetor(int *v1, int *v2, int n);
void multiplicaEscalar(int *v1, int *v2, int x, int n);


int main(){
    int n, x, i, j;

    cout << "\nDigite o valor de n: ";
    cin >> n;
    cout << "\nDigite o valor de x: ";
    cin >> x;

    int v1[n], v2[n];
    for(j=0;j<2;j++){ 
        cout << "\nVetor " << j+1 << "... ";
        for(i=0;i<n;i++){
            cout << "\nNum [" << i+1 << "]: ";
            if(j==0)
                cin >> v1[i];
            else
                cin >> v2[i];
        }
    }

    inverteVetor(v1, v2, n);
    for(j=0;j<2;j++){ 
        cout << "\nVetor " << j+1 << "... ";
        for(i=0;i<n;i++){
            if(j==0)
                cout << v1[i] << " ";
            else
                cout << v2[i] << " ";
        }
    }
    multiplicaEscalar(v1, v2, x, n);
}

void inverteVetor(int *v1, int *v2, int n){
    int i=0;
    do{
        v2[i]=v1[n-1];
        n--;
        i++;
    }while(n>=0);
}

void multiplicaEscalar(int *v1, int *v2, int x, int n){
    int i;
    cout << "\nVetor v2 modificado: ";
    for(i=0;i<n;i++){
        v2[i]=x*v2[i];
        cout << v2[i] << " ";
    }
}
