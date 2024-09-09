#include<iostream>

using namespace std;

int numAle(int, int);

int main()
{
    int semilla,cant;

    cout << "Ingresa la semilla: "<<endl;
    cin >>semilla;

    cout << "Ingresa cuantos números aleatorios quieres: "<< endl;
    cin >>cant;

    numAle(semilla,cant);
    return 0;
}

int numAle(int semilla, int cant)
{
    for(int i = 0;i<cant; i++)
    {
        semilla*=10e4;
    }
}