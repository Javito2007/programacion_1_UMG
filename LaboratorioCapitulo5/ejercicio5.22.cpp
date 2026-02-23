#include <iostream>
using namespace std;

int main() {
    int x, y, a, b, g, i, j;

    cout << "Demostracion de las leyes de De Morgan" << endl;
    cout << "Ingrese valores para probar las expresiones:" << endl;

    cout << "a) Para !(x < 5 && y > 7)" << endl;
    cout << "Ingrese x e y: ";
    cin >> x >> y;
    cout << "Original: " << !(x < 5 && y > 7) << endl;
    cout << "Equivalente (!(x < 5) || !(y > 7)): " << (!(x < 5) || !(y > 7)) << endl;
    cout << endl;

    cout << "b) Para !(a - b <= 0 || g == 5)" << endl;
    cout << "Ingrese a, b y g: ";
    cin >> a >> b >> g;
    cout << "Original: " << !(a - b <= 0 || g == 5) << endl;
    cout << "Equivalente (!(a - b <= 0) && !(g == 5)): " << (!(a - b <= 0) && !(g == 5)) << endl;
    cout << endl;

    cout << "c) Para !(x <= 8 && y > 4)" << endl;
    cout << "Ingrese x e y: ";
    cin >> x >> y;
    cout << "Original: " << !(x <= 8 && y > 4) << endl;
    cout << "Equivalente (!(x <= 8) || !(y > 4)): " << (!(x <= 8) || !(y > 4)) << endl;
    cout << endl;

    cout << "d) Para !(i > 4 || j <= 6)" << endl;
    cout << "Ingrese i y j: ";
    cin >> i >> j;
    cout << "Original: " << !(i > 4 || j <= 6) << endl;
    cout << "Equivalente (!(i > 4) && !(j <= 6)): " << (!(i > 4) && !(j <= 6)) << endl;
    cout << endl;

    return 0;
}
