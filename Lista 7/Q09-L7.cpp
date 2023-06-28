#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);

int main(){
    int n, i, j, menor;

    cout << "\nDigite o valor de n: ";
    cin >> n;

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

    menor=inverteVetor(v1, v2, n);
    for(j=0;j<2;j++){ 
        cout << "\nVetor " << j+1 << "... ";
        for(i=0;i<n;i++){
            if(j==0)
                cout << v1[i] << " ";
            else
                cout << v2[i] << " ";
        }
    }
    cout << "\nO menor elemento de v1 eh " << menor;
    
}
int inverteVetor(int *v1, int *v2, int n){
    int i=0, menor=v1[0];
    do{
        if(menor>v1[i])
            menor=v1[i];
        v2[i]=v1[n-1];
        n--;
        i++;
    }while(n>=0);
    return menor;
}
