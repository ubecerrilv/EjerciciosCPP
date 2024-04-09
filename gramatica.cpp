#include<iostream>
#include<string>

using namespace std;

void corregir (string&);

int main(){
    string texto;

    cout << "Ingresa el texto a corregir: "<<endl;
    getline(cin, texto, '.');

    corregir(texto);

    cout<<"Texto corregido: \n"<<texto<<"."<<endl;
}

void corregir (string& cad){
    //BORRAR ESPACIOS AL INICIO
    while (isspace(cad[0])){
        cad.erase(0,1);
    }

    for(int i =0; i<cad.length(); i++){
        if (i ==0){
            cad[i] = toupper(cad[i]);
        }else if (cad[i]==' ' && cad[i+1]==' '){
            cad.erase(i+1,1);
        }else{
            cad[i] = tolower(cad[i]);
        }
    }
}