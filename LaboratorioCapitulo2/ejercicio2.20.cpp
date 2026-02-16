#include <iostream>
using namespace std;
int main() {
    int radio;
    cout<<"Escribir el radio:: ";
    cin>>radio;
    cout<<"Diametro:: "<<2*radio<<", Circuferencia:: "<<2*radio*3.1416<<", Área:: "<<3.1416*(radio*radio);
}