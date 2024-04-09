#include <climits>
#include <iostream>
using namespace std;

int main ()
{
    cout << "Límite positivo: "
         << INT_MAX
         <<  "\n"
         << "Límite negativo: "
         << INT_MIN
         << '\n';

    cout << "Tamaño de Float: "<< sizeof(float)
         << "\nTamaño de Double: " << sizeof(double)
         << "\nTamaño de Long Double: "<< sizeof(long double)
         << '\n';

    cout << "Tamaño de Short Int: "<< sizeof(short int)
         << "\nTamaño de Int: " << sizeof(int)
         << "\nTamaño de Long Int: "<< sizeof(long int)
         << '\n';
    return 0;
}//Fin main