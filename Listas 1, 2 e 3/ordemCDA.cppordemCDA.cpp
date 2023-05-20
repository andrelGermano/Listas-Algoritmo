#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	char ordem;
	
	do{
		cout << "Digite os valores de A, B e C, respectivamente: ";
		cin >> A >> B >> C;
		cout << "Qual ordem voce quer?(c-crescente, d-decrescente e a-aleatorio)";
		cin >> ordem;
		if(ordem=='d'){
			if(A>B&&B>C){
				cout << A << " " << B << " " << C << endl;
			}else if(A>C&&C>B){
				cout << A << " " << C << " " << B << endl;
			}else if (B>C&&C>A){
				cout << B << " " << C << " " << A << endl;
			}else if (B>A&&A>C){
				cout << B << " " << A << " " << C << endl;
			}else if (C>B&&B>A){
				cout << B << " " << C << " " << A << endl;
			}else if (C>A&&A>B){
				cout << B << " " << C << " " << A << endl;
			}
		}else if(ordem=='c'){
			if(A>B&&B>C){
				cout << C << " " << B << " " << A << endl;
			}else if(A>C&&C>B){
				cout << B << " " << C << " " << A << endl;
			}else if (B>C&&C>A){
				cout << A << " " << C << " " << B << endl;
			}else if (B>A&&A>C){
				cout << C << " " << A << " " << B << endl;
			}else if (C>B&&B>A){
				cout << A << " " << C << " " << C << endl;
			}else if (C>A&&A>B){
				cout << B << " " << C << " " << C << endl;
			}
		}else if(ordem=='a'){
			if(A>B&&B>C){
				cout << B << " " << C << " " << A << endl;
			}else if(A>C&&C>B){
				cout << B << " " << A << " " << C << endl;
			}else if (B>C&&C>A){
				cout << C << " " << A << " " << B << endl;
			}else if (B>A&&A>C){
				cout << A << " " << C << " " << B << endl;
			}else if (C>B&&B>A){
				cout << A << " " << B << " " << C << endl;
			}else if (C>A&&A>B){
				cout << A << " " << B << " " << C << endl;
			}
		}
	}while((A!=0)&&(B!=0)&&(C!=0));
}
