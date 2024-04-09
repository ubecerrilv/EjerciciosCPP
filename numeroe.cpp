#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int factorial(int num){
    if (num != 0){
        long int anterior = num - 1;
        while(anterior>1){
            num *=anterior;
            anterior--;
        }

        return num;
    }else{
        return 1;
    }
}

int main (){
    double num1=0, num2=1;
    int fac=1;
    const double ERROR = 10e-15;

    cout <<"PROGRAMA PARA APROXIMAR EL NÚMERO DE EULER"<<endl;

    cout<< "Aproximación        Diferencia\n"
        << "------------        ----------"<<endl;

    while(abs(num1-num2)>=ERROR){
        num1=num2;
        num2 += (1.0/factorial(fac));

        fac++;
        cout << setw(14) << fixed << setprecision(13) << num1 << "    ";
        cout << setw(14) << fixed << setprecision(13) << abs(num1-num2) << endl;
    }//FIN WHILE
    return 0;
}

