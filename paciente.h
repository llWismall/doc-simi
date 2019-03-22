#include <iostream>
#include <string>
using namespace std;

class Pacientes {
private:
string nombre_p, fecha_p, curp, genero, domi_p ;
public:
void Capturar_p();
void Mostrar_p();
};

void Pacientes::Capturar_p(){
system("cls");
cout << "- Ingresar de datos -" << endl;
cout << "Ingresar el nombre del paciente: " << endl;
getline(cin, nombre_p);
cout << "Ingresar fecha de nacimiento del paciente: " << endl;
getline(cin, fecha_p);
cout << "Ingresar curp del paciente: " << endl;
getline(cin, curp);
cout << "Ingresar genero del paciente: " << endl;
getline(cin, genero);
cout << "Ingresar el domicilio del paciente: " << endl;
getline(cin, domi_p);
}
void Pacientes::Mostrar_p() {
system("cls");
cout << "- Datos del Paciente -" << endl;
cout << "Nombre: " << nombre_p << endl;
cout << "\nFecha de nacimiento: " << fecha_p << "\nCurp: " << curp << "\nGenero: " << genero << "\nDomicilio: " << domi_p << endl;
}
