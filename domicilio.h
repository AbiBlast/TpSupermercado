#ifndef DOMICILIO_H_INCLUDED
#define DOMICILIO_H_INCLUDED
#include <cstring>


class Direccion{
    private:
        char calle[30];
        int numero;
        char localidad[30];
        int piso;
        char departamento[3];
        bool esDepto;

    public:
       Direccion() {
            calle[0] = '\0';
            numero = 0;
            localidad[0] = '\0';
            piso = 0;
            departamento[0] = '\0';
            esDepto = false;
}


        ///setters
        void setCalle(const char ca[30]);
        void setNumero(int num);
        void setLocalidad(const char loc[30]);
        void setPiso (int p);
        void setDepto(const char dep[3]);
        void setEsDepto(bool valor);

        ///getters
        const char* getCalle(){return calle;}
        int  getNumero(){return numero;}
        const char* getLocalidad(){return localidad;}
        int getPiso (){return piso;}
        const char* getDepto () {return departamento;}

        ///modos
        void Cargar();
        void Mostrar();
        void cargaDepto();



};



#endif // DOMICILIO_H_INCLUDED
