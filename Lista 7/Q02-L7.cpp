#include <iostream>
using namespace std;

bool parOuImpar(int num);

int main(){
    int x;
    bool resultado;

    cout << "\n Digite um numero: ";
    cin >> x;

    resultado = parOuImpar(x);

    if(resultado){
        cout << "\n O numero digitado eh  par";
    }else{
        cout << "\n O numero digitado eh  impar";
    }

    cout << "\n\n\t";
    system("pause");
}

bool parOuImpar(int num){
    if(num%2==0){
        return true;
    }else{
        return false;
    }
}
