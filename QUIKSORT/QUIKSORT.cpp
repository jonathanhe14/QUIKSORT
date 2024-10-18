

#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include "Funciones.h"  
using namespace std;

int main() {
    vector<string> arr;
    int opcion;
    string input;
	Funciones funciones;

    cout << "Ingrese los elementos separados por espacio (luego presione enter): ";
    while (cin >> input) {
        arr.push_back(input);
        if (cin.peek() == '\n') break;
    }

    cout << "Seleccione el tipo de ordenamiento:\n";
    cout << "1. Ascendente (Solo Numeros)\n";
    cout << "2. Descendente (Solo Numeros)\n";
    cout << "3. Alfabetico (Solo Texto)\n";
    cout << "4. Por cantidad de letras (Solo Texto)\n";
    cin >> opcion;

    switch (opcion) {
    case 1:
        funciones.quicksort(arr, 0, arr.size() - 1, 1);
        break;
    case 2:
        funciones.quicksort(arr, 0, arr.size() - 1, 2);
        break;
    case 3:
        funciones.quicksort(arr, 0, arr.size() - 1, 3);
        break;
    case 4:
        funciones.quicksort(arr, 0, arr.size() - 1, 4);
        break;
    default:
        cout << "Opción no válida.\n";
        return 0;
    }

    cout << "Array ordenado: ";
    funciones.Imprimir(arr,arr.size());


    return 0;
}


