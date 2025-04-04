#include <iostream>
#include <vector>

using namespace std;

int main() {
  

    // Un caso "real"
    /*
    Una persona quiere saber si puede pedir una licencia de conducir. Para esto existen dos caminos posibles:

    1) Ser mayor de edad, no tener antecedentes penales y no tener ninguna condición inhabilitante.
    2) Tener al menos 15 años, contar con un permiso de los padres y no tener ninguna condición inhabilitante.
    */

    int edad = 0;
    bool tienePermiso=false;
    bool tieneAntecedentes=false;
    bool tieneCondicion=false;

    do{
        cout << endl << "Ingrese edad: ";
        cin >> edad;

        if(edad < 18){
            cout << endl << "Tiene permiso de los padres (1 = true, 0 = false): ";
            cin >> tienePermiso;
        }else{
            cout << endl << "Tiene antecedentes penales 1 = true, 0 = false: ";
            cin >> tieneAntecedentes;
        }

        cout << endl << "Tiene alguna condición 1 = true, 0 = false: ";
        cin >> tieneCondicion;

        // evaluamos si puede sacar el registro
        if(    edad > 18  && !tieneAntecedentes && !tieneCondicion   ||   edad > 15 && edad < 18 && tienePermiso && !tieneCondicion){
        //  [ (edad > 18) && !tieneAntecedentes && !tieneCondicion ] || [ edad > 15 && edad < 18 && tienePermiso && !tieneCondicion ]
            cout << endl << "Logro conseguir el permiso!";
        }
        else{
            cout << endl << "No cumple los requisitos";
        }


        /// reseteamos variables para siguente prueba
        edad = 0;
        tienePermiso=false;
        tieneAntecedentes=false;
        tieneCondicion=false;

    }while (edad < 100);

    

    // ¿Y la logica booleana?

    //if(    edad > 18  && !tieneAntecedentes && !tieneCondicion   ||   edad > 15 && edad < 18 && tienePermiso && !tieneCondicion){

    // estamos trabajando con un OR:

    //  [ (edad > 18) && !tieneAntecedentes && !tieneCondicion ] || [ edad > 15 && edad < 18 && tienePermiso && !tieneCondicion ]
    //                         true                               -                        true                          == true
    //                         true                               -                        false                         == true
    //                         false                              -                        true                          == true
    //                         false                              -                        false                         == true

    

    return 0;
}
