#include <iostream>
using namespace std;

void hm(int mnts, int *h, int *m);

int main(){
    int mnts, h, m;

    cout << "\nDigite os minutos: ";
    cin >> mnts;

    hm(mnts, &h, &m);

    cout << endl << h << " horas e " << m << " minutos";
    cout << "\nConfirmacao: " << (60*h)+m;
}

void hm(int mnts, int *h, int *m){
    *h=mnts/60;
    *m=mnts-(*h*60);
}
