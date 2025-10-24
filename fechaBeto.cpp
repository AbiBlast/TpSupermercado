#include <iostream>
#include "fechaBeto.h"
using namespace std;



Fecha::Fecha(int _dia, int _mes, int _anio) {

    anio = _anio;
    mes = _mes;
    dia = _dia;
}

bool Fecha::esBisiesto(int a) {
    return (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
}

int Fecha::diasDelMes(int m, int a) {
    int diasPorMes[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (m == 2 && esBisiesto(a)) return 29;
    return diasPorMes[m];
}

void Fecha::setDia(const int d) {
    if (mes >= 1 && mes <= 12 && anio > 0 && d >= 1 && d <= diasDelMes(mes, anio)) {
        dia = d;
    } else {
        dia = -1;
    }
}

void Fecha::setMes(int m) {
    if (m >= 1 && m <= 12) {
        mes = m;
    } else {
        mes = -1;
    }
}

void Fecha::setAnio(int a) {
    if (a > 0) {
        anio = a;
    } else {
        anio = -1;
    }
}

bool Fecha::esCorrecta() {
    return dia != -1 && mes != -1 && anio != -1;
}

void Fecha::Cargar() {
    int _dia, _mes, _anio;
   do {

        cout << "Dia: ";
        cin >> _dia;
        cout << "Mes: ";
        cin >> _mes;
        cout << "Anio: ";
        cin >> _anio;

        setAnio(_anio);
        setMes(_mes);
        setDia(_dia);

        if (!esCorrecta()) {
            cout << "Fecha Invalida. Ingrese Nuevamente" << endl;
        }

    } while (!esCorrecta());
}

void Fecha::Mostrar() {

    cout << dia << "/" << mes << "/" << anio << endl;

}

void Fecha::setFechaDefault(){

    dia = 1;
    mes = 1;
    anio = 1900;

}


