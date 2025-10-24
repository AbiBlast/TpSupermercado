#include <iostream>
#include"domicilio.h"
#include <cstring>

using namespace std;



void Direccion::setCalle(const char ca[30]){

    strncpy(calle, ca, sizeof(calle));
    calle[sizeof(calle) - 1] = '\0';
}

void Direccion::setNumero(int num){

  while (num <= 0) {
        cout << "Numero no valido. Ingrese nuevamente: ";
        cin >> num;
    }
    numero = num;
}

void Direccion::setLocalidad(const char loc[30]){

    strncpy(localidad, loc, sizeof(localidad));
    localidad[sizeof(localidad) - 1] = '\0';


}

void Direccion::setPiso (int p){

    while (p < 0) {
        cout << "Numero no valido. Ingrese nuevamente: ";
        cin >> p;
    }

     piso = p;
}

void Direccion::setDepto(const char dep[3]){

    strncpy(departamento, dep, sizeof(departamento));
    departamento[sizeof(departamento) - 1] = '\0';
}

void Direccion::setEsDepto(bool valor){

esDepto= valor;
}

void Direccion::cargaDepto() {
    int p;
    char dep[3];

    cout << "Piso: ";
    cin >> p;
    setPiso(p);

    cout << "Departamento: ";
    cin >> dep;
    setDepto(dep);
}

void Direccion::Cargar() {
    char ca[30], loc[30];
    int num;
    bool valor;

    cout<<"Domicilio "<<endl;

    cout << "Calle: ";
    cin.getline(ca, 30);
    setCalle(ca);


    cout << "Numero: ";
    cin >> num;
    setNumero(num);

    do {
        cout << "Es edificio (1 = si, 0 = no): ";
        cin >> valor;
    } while (valor != 0 && valor != 1);

    if (valor) {
        cargaDepto();
    }else{

        char no[3] = "No";
        setPiso(0);
        setDepto(no);
    }

    cout << "Localidad: ";
    cin.ignore();
    cin.getline(loc, 30);
    setLocalidad(loc);
}

void Direccion::Mostrar() {
    cout << "Calle: " << getCalle() << endl;
    cout << "Numero: " << getNumero() << endl;

    if (esDepto) {
        cout << "Piso: " << getPiso() << ", Departamento: " << getDepto() << endl;
    }

    cout << "Localidad: " << getLocalidad() << endl;

}


