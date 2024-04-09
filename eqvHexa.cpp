#include<iostream>
#include<string>

using namespace std;

void hexa(string);

int main (){
    string cadena;

    cout<<"Ingresa la cadena para realizar el proceso: "<<endl;
    getline(cin, cadena);

    cout<<"El equivalente hexadecimal es: "<<endl;
    hexa(cadena);
}//FIN MAIN

void hexa(string cadena){
    for(int i =0; i<cadena.length(); i++){
        cout<<cadena[i]<<": ";
        cout<<"0x"<<hex<<uppercase<<int(cadena[i])<<endl;
    }
}