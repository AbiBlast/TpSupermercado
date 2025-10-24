#ifndef FECHABETO_H_INCLUDED
#define FECHABETO_H_INCLUDED

class Fecha {
private:
    int dia, mes, anio;

    bool esBisiesto(int a);
    int diasDelMes(int m, int a);

public:
    Fecha(int _dia = 0, int _mes = 1, int _anio = 1);
///setters
    void setDia(const int d);
    void setMes(int m);
    void setAnio(int a);
///getters
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAnio() { return anio; }
///metodos
    void Cargar();
    void Mostrar();
    bool esCorrecta();
    void setFechaDefault();
};

#endif // FECHABETO_H_INCLUDED
