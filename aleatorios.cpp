#include <iostream>

using namespace std;

int main ()
{
    int aleatorio;
    const int MAXIMO = 10;

    srand(time(NULL));

    cout <<"Generación de números aleatorios"<<endl;
    for (int i =0; i<10; i++)
    {
        aleatorio = 1+ rand()%MAXIMO;
        cout << "* "<<aleatorio<<endl;
    }
    return 0;
}