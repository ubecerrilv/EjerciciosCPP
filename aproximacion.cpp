#include<iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int numero;
    long double aproxAnt, aproxNue;
    bool continua = true;

    cout << "Ingresa el número a aproximar la raíz: ";
    cin >> numero;
    cout << "Ingresa la primera aproximación de la raíz: ";
    cin >> aproxAnt;

    while (continua)
    {
        aproxNue=((numero/aproxAnt)+aproxAnt)/2.0;

        cout<< setiosflags(ios::showpoint) 
            << setprecision(10) 
            << aproxNue 
            <<endl;

        continua = abs(aproxAnt-aproxNue)>1.0e-15;
        aproxAnt=aproxNue;
    }

}//FIN MAIN