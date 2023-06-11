#include<iostream>
#include<string>
using namespace std;

int main(){
    string nome, ultNome="", primNome="";
    bool achar=false;
  
    cout << "\nDigite seu nome completo: ";
    getline(cin, nome);
    
    for(int i=0; i < nome.size();i++){
        if(nome[i]!=' '){
            ultNome+=nome[i];
        }else{
            ultNome="";
        }

        if(nome[i]!=' ' && !achar){
            primeiroNome+=nome[i];
        }else{
            achar=true;
        }
    }

    cout << ultimoNome << ", " << primeiroNome;
    
}
