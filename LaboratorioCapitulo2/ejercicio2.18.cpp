#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout<<"ingresar numero 1:: ";
    cin>>num1;
    cout<< "ingresar numero 2:: ";
    cin>>num2;
    if (num1>num2){
        cout<<"Este número es mayor:: "<<num1;
    }else if (num2>num1){
        cout<<"Este número es mayor:: "<<num2;
    }else if (num2==num1){
        cout<<"Ambos números son iguales.";
    }
    
    return 0;
}