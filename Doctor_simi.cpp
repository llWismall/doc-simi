#include <iostream>
#include <string>
#include "paciente.h"
#include "medicos.h"
using namespace std;

void menuprincipal();
void menupaciente();
void menumedico();

int main()
{
menuprincipal();
return 0;
}
//Menu principal
void menuprincipal(){
int opc_menu;

do{
system("cls");
cout << "------ Menu Principal ------" << endl;
cout << "1.-Menu Medicos" << "\n2.-Menu Pacientes" << "\n3.-Salir" << endl;
cout << "Elija una opcion y oprima ENTER ===> ";
cin >> opc_menu;

cin.ignore();

switch (opc_menu){
case 1:
menumedico();
break;
case 2:
menupaciente();
case 3:
cout << "" << endl;
break;
default:
cout << "Esta opcion es invalida" << endl;
}
} while (opc_menu > 0 && opc_menu < 3);
}

//Menu medicos
void menumedico(){
Medico doctor;
int opc_menu;
do{
system("cls");
cout << "------ Menu Pacientes ------" << endl;
cout << "1.-Caputar" << "\n2.-Mostrar" << "\n4.-Regresar" << endl;
cout << "Elija una opcion y oprima ENTER ===> ";
cin >> opc_menu;

cin.ignore();

switch (opc_menu){
case 1:
doctor.Capturar();
break;
case 2:
doctor.Mostrar();
system("PAUSE");
break;
case 4:
cout << " " << endl;
break;
default:
cout << " " << endl;
}
} while (opc_menu > 0 && opc_menu <= 3);

}


//Menu paciente
void menupaciente(){
Pacientes paci;
int opc_menu;
do{
system("cls");
cout << "------ Menu Paciente ------" << endl;
cout << "1.-Caputar" << "\n2.-Mostrar" << "\n4.-Regresar" << endl;
cout << "Elija una opcion y oprima ENTER ===> ";
cin >> opc_menu;

cin.ignore();

switch (opc_menu){
case 1:
paci.Capturar_p();
break;
case 2:
paci.Mostrar_p();
system("PAUSE");
break;
case 4:
cout << " " << endl;
break;
default:
cout << " " << endl;
}
} while (opc_menu > 0 && opc_menu <= 3);

}
