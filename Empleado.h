#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#include "fechaBeto.h"
#include "domicilio.h"
#include "Persona.h"

class   Empleado : public Persona {
private:
    char dni[10];
    Fecha fechaNacimiento;
    Fecha fechaIngreso;


public:
    Empleado();

    // Getters
    const char* getDNI();
    Fecha getFechaNacimiento();
    Fecha getFechaIngreso();


    // Setters
    void setDNI(const char* valor);
    void setFechaNacimiento(Fecha valor);
    void setFechaIngreso(Fecha valor);
    //metodos
    void cargar();
    void mostrar();
    bool escribirDisco(int pos);
    bool leerDisco(int pos);
    bool autoID();

};

#endif // EMPLEADO_H_INCLUDED
