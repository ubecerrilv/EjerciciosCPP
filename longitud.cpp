#include <iostream>
#include <string>

using namespace std;

//FUNCION PROTOTIPO
int longitud (string);

int main ()
{
    string cadena;

    cout<<"Ingresa la cadena a obtener su longitud: "<<endl;
    getline(cin, cadena);

    cout << "La longitud de la cadena es: "<<longitud(cadena)<<endl;
}//FIN MAIN

int longitud (string cadena){
    int n = 0;
    for (int i =0; true; i++){
        if(cadena[i]!=NULL){
            n++;
        }else{
            break;
        }
    }
    return n;
}