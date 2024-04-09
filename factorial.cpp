#include<iostream>
#include<cmath>

using namespace std;

int main(){
    //Programa para poder calcular el factorial de un número
    int num;

    cout << "Ingresa el número para calcular su fatorial: ";
    cin >> num;

    if (num != 0){
        long int anterior = num - 1;
        while(anterior>1){
            num *=anterior;
            anterior--;
        }

        cout << "El factorial es: "<<num<<endl;
    }else{
        cout << "El factorial es: 1"<<endl;
    }

    return 0;
}