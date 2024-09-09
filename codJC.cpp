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
    int base = int('A');
    int limite = int('z');
    int actual=0;

    for(int i = 0; i<cad.length();i++){
        //Variable auxiliar para realizar desplazamiento
        actual = int(cad[i]);

        if(cad[i]!=' ' && !ispunct(cad[i])){
            if((actual+desplazamiento)>limite){
                nueva[i] = char(actual-26+desplazamiento);
            }else{
                nueva[i] = char(actual+desplazamiento);
            }
        }
    }
    return nueva;
}//Fin codifica