#include <iostream>
#include <string>
using namespace std;

int main(){
    string cadena;

    cout << "Ingresa la cadena a invertir"<<endl;
    getline(cin, cadena);

    cout << "Cadena original:" << cadena << endl;
    cout << "Cadena invertida: ";

    for (int i = cadena.length()-1; i>=0; i--){
        cout <<cadena.at(i);
    }

    cout<<endl;
}