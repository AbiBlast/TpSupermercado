#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "fechaBeto.h"
#include "domicilio.h"

class Persona {
public:

    Persona();
    virtual ~Persona();


    int getID();
    const char* getNombre();
    const char* getApellido();
    const char* getTelefono();
    const char* getEmail();
    Direccion getDomicilio();
    bool getEstado();

    void setID(int valor);
    void setNombre(const char* valor);
    void setApellido(const char* valor);
    void setTelefono(const char* valor);
    void setEmail(const char* valor);
    void setDomicilio(Direccion valor);
    void setEstado(bool valor);

    void cargar();
    void mostrar();

protected:
    int ID;
    char nombre[50];
    char apellido[50];
    char telefono[15];
    char email[70];
    Direccion direccion;
    bool estado;
};





#endif // PERSONA_H_INCLUDED
