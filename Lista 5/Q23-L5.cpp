#include <iostream>
#include <string>
using namespace std;

int main(){
	int i;
	string prim, seg;
	bool diferente=false;;
	
    cout << "\nFrase um: ";
    getline(cin,prim);
    cout << "\nFrase dois: ";
    getline(cin,seg);
    
    for(i=0;i<prim.size();i++){
    	if(prim[i]!=seg[i])
    		diferente=true;
	}
	if(diferente){
		cout << "\nAs frases sao diferentes.";
	}else{
		cout << "\nAs frases sao iguais.";
	}
}
