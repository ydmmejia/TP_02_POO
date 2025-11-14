#include <iostream>
#include "JuegoDomino.h"

using namespace std;

int main() {
    cout << "JUEGO DE DOMINO" << endl;
    cout << "bienvenido!" << endl << endl;
    
    int numJugadores;
    cout << "ingresa el numero de jugadores (2-4): ";
    cin >> numJugadores;
    
    if (numJugadores < 2 || numJugadores > 4) {
        cout << "numero invalido. debe ser entre 2 y 4." << endl;
        return 1;
    }
    
    JuegoDomino juego(numJugadores);
    
    bool continuarJugando = true;
    
    while (continuarJugando) {
        juego.iniciarPartida();
        
        while (!juego.juegoTerminado()) {
            juego.jugarTurno();
            juego.mostrarMesa();
        }
        
        juego.reiniciarJuego();
        
        char respuesta;
        cout << "\nquieres jugar otra ronda? (s/n): ";
        cin >> respuesta;
        
        if (respuesta != 's' && respuesta != 'S') {
            continuarJugando = false;
        }
    }
    
    cout << "\n¡juego terminado," << endl;
    juego.mostrarEstadisticas();
    cout << "gracias por jugar!" << endl;
    
    return 0;
}