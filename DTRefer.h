#ifndef DTREFER
#define DTREFER
#include <string>
#include "DTFecha.h"

class DTRefer{
    private:
    string doi, titulo;
    DTFecha fecha;
    //set string autores;
    public:
    DTRefer(string, string, DTFecha);
}

#endif