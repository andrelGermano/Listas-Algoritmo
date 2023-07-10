#include <iostream>
using namespace std;

void mm(int v[], int *min, int *max, int n);

int main(){
    int n, min, max, i;

    cout << "\nValor de n: ";
    cin >> n;
    int v[n-1];

    for(i=0;i<n;i++){
        cout << "\nV[" << i+1 << "]: ";
        cin >> v[i];
    }

    mm(v, &min, &max, n);

    cout << "\nMaior elemento: " << max << ", e menor elemento: " << min;

}

void mm(int v[], int *min, int *max, int n){
    int i;
    *max=*min=v[0];
    for(i=0;i<n;i++){
        if(*max<v[i])
            *max=v[i];
        if(*min>v[i])
            *min=v[i];
    }
}
