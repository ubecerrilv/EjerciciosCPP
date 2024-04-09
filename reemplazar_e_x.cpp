#include <iostream>
#include <string>

using namespace std;

int main (){
    string cadena;

    cout << "Ingresa la cadena para reemplazar e por x"<<endl;
    getline(cin, cadena);

    for(int i =0; i<cadena.length();i++){
        if(cadena.at(i)=='e'){
            cadena.replace(i,1,"x");
        }
    }

    cout<<"Cadena reemplazada: "<<cadena<<endl;
}