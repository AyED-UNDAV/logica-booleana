#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Antes que nada, creamos la variable
    bool unBooleano = true;  

    if (unBooleano == true) {
        cout << "Primer ejemplo: la variable se inicializa como true" << endl;
    } else {
        cout << "Primer ejemplo: la variable se inicializa como false" << endl;
    }





    // Ahora si, asignamos valores.
    // Recordemos que ! invierte el resultado de la condición.
    unBooleano = !false;
    bool otroBooleano = true;

    if (unBooleano == true && otroBooleano == true) {
        cout << "Segundo ejemplo: Ambas condiciones se cumplen" << endl;
    } else {
        cout << "Segundo ejemplo: Alguna de las dos no se cumple" << endl;
    }





    // un poco mas completo;
    bool primerBooleano = true;
    bool segundaBooleano = false;
    int unNumero=0;

    cout << "Tercer ejemplo: Ingresar un numero: ";
    cin >> unNumero;

    // El simbolo % retorna el resto de una division
    if (primerBooleano == true && segundaBooleano == false && unNumero % 2 == 0) {
        cout << "Tercer ejemplo A: las condiciones se cumplen" << endl;
    } else {
        cout << "Tercer ejemplo A: las dos no se cumple" << endl;
    }





    //  Se reSuelve como una operacion matematica, agrupamos por terminos
    //  if ( [otroBooleano == true] && [otroBooleano == false] && [(unNumero % 2) == 0]) 

    // Resolvemos el termino [otroBooleano == true]
    bool primerBooleanoEsTrue = primerBooleano == true;

    // Resolvemos el termino [otroBooleano == false]
    bool segundaBooleanoEsFalse = segundaBooleano == false;

    // Rsolvemos el termino [(unNumero % 2) == 0]
    bool elNumeroEsPar = (unNumero % 2) == 0;

  
    if (primerBooleanoEsTrue && segundaBooleanoEsFalse && elNumeroEsPar) {
        cout << "Tercer ejemplo B: las condiciones se cumplen" << endl;
    } else {
        cout << "Tercer ejemplo B: las dos no se cumple" << endl;
    }





    // Un poco redundante, ¿no?.

    // habiamos definido mas arriba que..
    // bool primerBooleano = true;
    // bool segundaBooleano = false;
    // bool elNumeroEsPar = (unNumero % 2) == 0;

    if (primerBooleano && !segundaBooleano && elNumeroEsPar) {
        cout << "Tercer ejemplo C: las condiciones se cumplen" << endl;
    } else {
        cout << "Tercer ejemplo C: las dos no se cumple" << endl;
    }
    

    return 0;
}
