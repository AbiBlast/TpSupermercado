#include <iostream>
using namespace std;
#include "fechaBeto.h"
#include "domicilio.h"
#include "persona.h"
#include <cstring>


Persona::Persona() {
    ID = 0;
    strcpy(nombre, "");
    strcpy(apellido, "");
    strcpy(telefono, "");
    strcpy(email, "");
    estado = true;
}


Persona::~Persona() {

}


int Persona::getID() { return ID; }
const char* Persona::getNombre() { return nombre; }
const char* Persona::getApellido() { return apellido; }
const char* Persona::getTelefono() { return telefono; }
const char* Persona::getEmail() { return email; }
Direccion Persona::getDomicilio() { return direccion; }
bool Persona::getEstado() { return estado; }

void Persona::setID(int valor) { ID = valor; }
void Persona::setNombre(const char* valor) { strcpy(nombre, valor); }
void Persona::setApellido(const char* valor) { strcpy(apellido, valor); }
void Persona::setTelefono(const char* valor) { strcpy(telefono, valor); }
void Persona::setEmail(const char* valor) { strcpy(email, valor); }
void Persona::setDomicilio(Direccion valor) { direccion = valor; }
void Persona::setEstado(bool valor) { estado = valor; }


void Persona::cargar() {


    //cout << "ID: ";
    //cin >> ID;
    cin.ignore();

    cout << "Nombre: ";
    cin.getline(nombre, 50);

    cout << "Apellido: ";
    cin.getline(apellido, 50);

    cout << "Telefono: ";
    cin.getline(telefono, 15);

    cout << "Email: ";
    cin.getline(email, 70);

    direccion.Cargar();



    estado = true;
}

void Persona::mostrar() {
    //cout << "ID: " << ID << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Telefono: " << telefono << endl;
    cout << "Email: " << email << endl;
    direccion.Mostrar();
    cout << "Estado: " << (estado ? "Activo" : "Inactivo") << endl;

}



