#include<iostream>

using namespace std;

template <class T>
void fraccionaria (T num)
{
    cout<<endl<<"La parte fraccionaria es: "<< num-(int)num<<endl;
}

double numero;

int main()
{
    cout << "Ingresa el número al obtener su parte fraccionaria: ";
    cin >> numero;
    fraccionaria(numero);
}//FIN MAIN