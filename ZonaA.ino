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
    int PosicionAnterior[2] = {2, 3};
    if (CasillaSePuedeVisitar() !)
    {
        SePuedeVisitar[Posicion[0]][Posicion[1]] = true;
        void UBI(col,fila)
{
    if procede == avanzar{
        casillaVisitada[Posicion[col]][Posicion[fil+1]]=true
    }
    if procede == derecha{
        casillaVisitada[Posicion[col+1]][Posicion[fila]]= true
    }
    if procede == izquierda){
        casillaVisitada[Posicion[col-1]][Posicion[fila]])= true
    }
    return col,fila //el valor de la casilla que estemos
}

void loop(){
    AnalisisColor()
    sensorUtrasonico()
    avanzar()
    
    casillasVisitadas [Posicion[col]][Posicion[fil]] = true 
    if CambioColor()== false{
        while sensorIzq== Pared && sensorDerc == Pared && sensorEnfr== sinPared{
            avanzar()
            int x=1
            int y=1
            x,y=UBI(x,y) //va llamar una función 
            cambioColor() 
        }
        while sensorIzq== Pared && sensorDerch == sinPared && sensorEnfr== Pared{
            Derecha()
            x,y=UBI(x,y)
            avanzar()
            cambioColor()
        }
        while sensorIzq== sinPared && sensorDerch == Pared && sensorEnfr == Pared{
            Izquierda()
            x,y=UBI(x,y)
            avanzar()
            cambioColor()
        }
        //para que lo evalue en cada casilla que este 
        while sensorIzq== sinPared && sensorDerch== Pared && sensorEnfr== sinPared{
            Izquierda()
            x,y=UBI(x,y)
            avanzar()
            cambioColor()
        }
        while sensorIzq== Pared && sensorDerch==Pared && sensorEnfr == Pared{
            sePuedeVisitar[Posicion[col]][Posicion[fil]]= false
            vuelta()
            x,y=UBI(x,y) 
            avanzar()
            cambioColor()
            }
        while sensorIzq== sinPared && sensorDerch== sinPared && sensorEnfr== Pared{
            x,y=UBI(x,y)
            if casillaVisitada[Posicion[col]][Posicion[fil+1]]== true{
                Derecha()
                Avanzar()
                cambioColor()
            }
            if casillaVisitada[col][fil+1]== false{
                if casillaVisitada[Posicion[col]]Posicion[[fil-1]]== true{
                Izquierda()
                Avanzar()
                cambioColor()
                }
                if casillaVisitada [col][fil-1]== false{
                vuelta()
                avanzar()
                cambioColor()
                }
            }
        cambioColor()
        }
    }
    
    if CambioColor()== true{
        analisisColor()
        //va llamar la función otra vez para que evalue otra vez el color y nos de cambio de color falso
    }

}
    
}
    }
}
