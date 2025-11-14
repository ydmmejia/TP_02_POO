#ifndef JUEGODOMINO_H
#define JUEGODOMINO_H

#include <vector>
#include "Ficha.h"
#include "Jugador.h"

class JuegoDomino {
private:
    std::vector<Ficha> todasLasFichas;
    std::vector<Ficha> mesa;
    std::vector<Jugador> jugadores;
    int turnoActual;

    void crearFichas();
    void mezclarFichas();
    void distribuirFichas();
    bool hayBloqueo();
    int determinarGanador();

public:
    JuegoDomino(int numJugadores);
    
    void iniciarPartida();
    void jugarTurno();
    void mostrarMesa() const;
    void mostrarEstadisticas() const;
    bool juegoTerminado() const;
    void reiniciarJuego();
    
    int getExtremoIzquierdo() const;
    int getExtremoDerecho() const;
};

#endif