#include <iostream>
using namespace std;

int main() {
    // Ocho instrucciones de salida
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout<<endl;
    cout<<endl;
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0)
            cout << "* * * * * * *" << endl;
        else
            cout << " * * * * * * *" << endl;
    }
    
    return 0;
}