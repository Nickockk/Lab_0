#ifndef PUBLICACION
#define PUBLICACION
#include "DTFecha.h"
#include "DTRefer.h"
#include <string>

using namespace std;

class Publicacion {
private:
string doi, titulo;
DTFecha fecha;
public:
    virtual DTRefer getDT();
    bool contienePalabra(string);
};
#endif
