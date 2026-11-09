#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string nombreArchivo;
 string linea;
    int contadorLineas = 0;

    
int main() {
    
    cout << "Ingresa el nombre o la ruta del archivo de texto: ";
    cin >> nombreArchivo;

 
    ifstream archivo(nombreArchivo);

   
    if (!archivo.is_open()) {
        cerr << "Error: El archivo '" << nombreArchivo << "' no existe o no se pudo abrir." << endl;
        return 1; 
    }

    

    
    while (getline(archivo, linea)) {
        contadorLineas++;
    }

    
    archivo.close();

   
    cout << "El archivo contiene " << contadorLineas << " líneas." << endl;

    return 0;
}