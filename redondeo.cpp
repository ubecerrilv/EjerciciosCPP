#include<iostream>
#include<math.h>

using namespace std;

//PROTOTIPO
double redondear (double, int);

int main ()
{
    double num;
    int n;

    cout << "Ingresa el número a redondear: ";
    cin >> num;
    cout << "Ingresa el número de decimales: ";
    cin >> n;

    cout << "El número redondeado es: "<< redondear(num, n)<<endl;
}//FIN MAIN

//DEFINICION DE LA FUNCION
double redondear (double numero, int n)
{
    numero*=pow(10,n);
    numero += .5;
    numero = (int) numero;
    numero/=pow(10,n);

    return numero;
}