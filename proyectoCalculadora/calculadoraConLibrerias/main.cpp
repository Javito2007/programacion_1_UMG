#include <iostream>
#include "calculadora.h"

using namespace std;

int main()
{
    calculadora calc1;
    float resultado=0.00;
    resultado=calc1.suma(20,30);
    cout<<"El resultado es:: "<<resultado;
    resultado=calc1.multiplicacion(20,30);
    cout<<"\nEl resultado es:: "<<resultado;
    resultado=calc1.division(20,30);
    cout<<"\nEl resultado es:: "<<resultado;
    resultado=calc1.resta(20,30);
    cout<<"\nEl resultado es:: "<<resultado;
    return 0;
}
