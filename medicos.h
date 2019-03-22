#include <iostream>
#include <string>
using namespace std;

class Medico {
private: 
string tipo_med, nombre_med, numero_med, domicilio_med;
public:
void Capturar();
void Mostrar();
};

void Medico::Capturar() {
system("cls");
cout << "- Ingresar Datos -" << endl;
cout << "Tipo de medico titular o asociado:" << endl;
getline(cin, tipo_med); 
cout << "Ingresar nombre del medico:" << endl;
getline(cin, nombre_med);
cout << "Ingresar el numero de telefono:" << endl;
getline(cin, numero_med);
cout << "Ingresar domicilio:" << endl;
getline(cin, domicilio_med);
}
void Medico::Mostrar() {
system("cls");
cout << "------ Datos del medico ------" << endl;
cout << "Tipo de medico: " << tipo_med << endl;
cout << "\nNombre: " << nombre_med << "\nTelefono: " << numero_med << "\nDomicilio: " << domicilio_med << endl;
}

