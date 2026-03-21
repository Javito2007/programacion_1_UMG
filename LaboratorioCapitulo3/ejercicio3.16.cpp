#include <iostream>
#include <string>
using namespace std;
class FrecuenciasCardiacas {
private:
    string primerNombre;
    string apellido;
    int mesNacimiento;
    int diaNacimiento;
    int anioNacimiento;
public:
    FrecuenciasCardiacas(string nombre, string apell, int mes, int dia, int anio) {
        primerNombre = nombre;
        apellido = apell;
        mesNacimiento = mes;
        diaNacimiento = dia;
        anioNacimiento = anio;
    }
    void establecerPrimerNombre(string nombre) {
        primerNombre = nombre;
    }
    string obtenerPrimerNombre() const {
        return primerNombre;
    }
    void establecerApellido(string apell) {
        apellido = apell;
    }
    string obtenerApellido() const {
        return apellido;
    }
    void establecerMesNacimiento(int mes) {
        mesNacimiento = mes;
    }
    int obtenerMesNacimiento() const {
        return mesNacimiento;
    }
    void establecerDiaNacimiento(int dia) {
        diaNacimiento = dia;
    }
    int obtenerDiaNacimiento() const {
        return diaNacimiento;
    }
    void establecerAnioNacimiento(int anio) {
        anioNacimiento = anio;
    }
    int obtenerAnioNacimiento() const {
        return anioNacimiento;
    }
    int obtenerEdad() {
        int mesActual, diaActual, anioActual;
        cout << "Introduzca el mes actual (1-12): ";
        cin >> mesActual;
        cout << "Introduzca el dia actual: ";
        cin >> diaActual;
        cout << "Introduzca el año actual: ";
        cin >> anioActual;
        int edad = anioActual - anioNacimiento;
        if (mesActual < mesNacimiento || (mesActual == mesNacimiento && diaActual < diaNacimiento)) {
            edad--;
        }
        return edad;
    }
    int obtenerFrecuenciaCardiacaMaxima() {
        int edad = obtenerEdad();
        return 220 - edad;
    }
    void obtenerFrecuenciaCardiacaEsperada() {
        int maxima = obtenerFrecuenciaCardiacaMaxima();
        int minimoEsperado = maxima * 50 / 100;
        int maximoEsperado = maxima * 85 / 100;
        cout << "Rango de frecuencia cardiaca esperada: " << minimoEsperado << " - " << maximoEsperado << " pulsos por minuto" << endl;
    }
};
int main() {
    string nombre, apellido;
    int mes, dia, anio;
    cout << "Introduzca el primer nombre: ";
    cin >> nombre;
    cout << "Introduzca el apellido: ";
    cin >> apellido;
    cout << "Introduzca el mes de nacimiento (1-12): ";
    cin >> mes;
    cout << "Introduzca el dia de nacimiento: ";
    cin >> dia;
    cout << "Introduzca el año de nacimiento: ";
    cin >> anio;
    FrecuenciasCardiacas persona(nombre, apellido, mes, dia, anio);
    cout << "\n--- Información de la persona ---" << endl;
    cout << "Nombre: " << persona.obtenerPrimerNombre() << " " << persona.obtenerApellido() << endl;
    cout << "Fecha de nacimiento: " << persona.obtenerMesNacimiento() << "/"
         << persona.obtenerDiaNacimiento() << "/" << persona.obtenerAnioNacimiento() << endl;
    int edad = persona.obtenerEdad();
    cout << "Edad: " << edad << " años" << endl;
    int maxima = persona.obtenerFrecuenciaCardiacaMaxima();
    cout << "Frecuencia cardiaca máxima: " << maxima << " pulsos por minuto" << endl;
    persona.obtenerFrecuenciaCardiacaEsperada();
    return 0;
}
