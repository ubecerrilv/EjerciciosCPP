#include<iostream>
using namespace std;

int main ()
{
    int numero;

    cout << "Ingrese el número a invertir: ";
    cin >> numero;

    do
    {
        cout << numero%10;
        numero /= 10;
    }while(numero !=0);
}//FIN MAIN