#include <iostream>
#include <string>
using namespace std;

int main(){
    string primFrase, segFrase;
    int i;
    bool maiuscula = false, minuscula = false, achou = false;
    char primLetra;

    cout << "1a Frase: ";
    getline(cin, primFrase);
    system("cls");
    segFrase = primFrase;

    for(i=0;i<primFrase.size();i++) {
        if(primFrase[i] != ' '){
			achou = true;
            primLetra = primFrase[i];
            break;
        }
    }

    if(achou){
        if(primLetra>=97&&primLetra<=122){
            minuscula = true;
        }else if(primLetra>=65&&primLetra<=90) {
            maiuscula = true;
        }

        for (i=0;i<segFrase.size();i++){
            if(minuscula)
            	segFrase[i] = toupper(segFrase[i]);
            if(maiuscula)
                segFrase[i] = tolower(segFrase[i]);
        }
        
	    cout << "\n1a frase: " << primFrase;
	    cout << "\n2a frase: " << segFrase;
    }else{
        cout << "\nNao ha letras na frase";
    }
}
