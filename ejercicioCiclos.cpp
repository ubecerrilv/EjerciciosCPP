#include <iostream>

using namespace std;

int main()
{
    for(int i=1, j=1; j<21; i++)
    {
        if (i%3==0)
        {
            cout << j << ". "<< i<< endl;
            j++;
        }
    }
}//FIN MAIN