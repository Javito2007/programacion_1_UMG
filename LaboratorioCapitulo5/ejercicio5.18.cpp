#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Decimal" << setw(10) << "Binario" << setw(10) << "Octal" << setw(12) << "Hexadecimal" << endl;

    for (int i = 1; i <= 256; i++) {
        cout << dec << i << setw(10);

        int temp = i;
        int binario[9];
        int j = 0;

        if (temp == 0) {
            cout << "0";
        } else {
            while (temp > 0) {
                binario[j] = temp % 2;
                temp = temp / 2;
                j++;
            }
            for (int k = j - 1; k >= 0; k--) {
                cout << binario[k];
            }
        }

        cout << setw(10) << oct << i << setw(12) << hex << i << endl;
    }

    return 0;
}
