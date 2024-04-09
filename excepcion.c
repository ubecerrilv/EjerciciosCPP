#include <iostream>
using namespace std;

int main()
{
    int numerador, denominador;

    try
    {
        cout << "Introduzca el numerador (sólo números enteros): ";
        cin >> numerador;
        cout << "Introduzca el denominador (sólo números enteros): ";
        cin >> denominador;

        if (denominador == 0)
            throw "***Entrada invalida – No se permite un valor del denominador de cero***";
        else
            cout << numerador << '/' << denominador
            << " = " << double(numerador)/double(denominador) << endl;
    }
    catch(char const *e[])
    {
        cout << "inicio"<<endl;
        for (int i = 0; i<(sizeof(e)/sizeof(e[0]));i++)
        {
            cout << "entra"<<e[i];
        }
        cout<<"fin"<<endl;
        exit (1);
    }
    return 0;
}
