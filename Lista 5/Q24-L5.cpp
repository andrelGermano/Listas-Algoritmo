#include <iostream>
#include <string>
using namespace std;

int main(){
	string frase;
	int i, x;
	
	cout << "\nFrase: ";
	getline(cin,frase);
	cout << "\nX: ";
	cin >> x;
	system("cls");
	cout << "\nFrase + X: ";
	for(i=0;i<frase.size();i++){
		if(frase[i]!=' '){
		frase[i]=toupper(frase[i]);
		frase[i]+=x;
		}
		cout << frase[i];
	}
}
