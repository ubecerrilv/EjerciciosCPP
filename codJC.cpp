#include<iostream>
#include<string>
#include "validaciones.cpp"

using namespace std;
using namespace obtener;

//FUNCION PROTOTIPO
string codifica (string&, int);

int main(){
    string cadena, desplazamiento;
    int des;
    char c;
    double si;

    mostrarMensaje("Introduce la cadena a codificar: ");
    getline(cin,cadena);

    mostrarMensaje("Introduce el desplazamiento: ");
    des = obtenerInt();

    mostrarMensaje(codifica(cadena, des));
}

string codifica (string& cad, int desplazamiento){
    string nueva = cad;
    for(int i = 0; i<cad.length();i++){
        if(cad[i]!=' ') nueva[i] = char(int(cad[i])+3);
    }

    return nueva;
}