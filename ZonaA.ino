#include <Roborregos/DireccionesCambiadasYair2.ino>

void SolucionZonaA()
{
    puenteH.AvanzarCasilla();
    bool CasillasVisitadas[3][4] = {
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false}};
    bool SePuedeVisitar[5][7] = {
        {false, false, false, false, false, false, false},
        {false, true, true, true, true, true, false},
        {false, true, true, true, true, true, false},
        {false, true, true, true, true, true, false},
        {false, false, false, false, false, false, false}};
    String Colores[3][4] = {
        {"", "", "", ""},
        {"", "", "", ""},
        {"", "", "", ""}};
    int Posicion[2] = {2, 3};
}
