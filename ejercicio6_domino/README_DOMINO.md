# Juego de Domino

## Descripcion

Implementacion completa del juego de domino para 2-4 jugadores con interfaz de consola.

## Reglas del Juego

1. **Fichas**: 28 fichas totales (combinaciones de 0-0 hasta 6-6)
2. **Jugadores**: 2 a 4 jugadores
3. **Distribucion**: Las fichas se reparten equitativamente entre jugadores
4. **Primer turno**: El primer jugador coloca cualquier ficha
5. **Turnos siguientes**: Cada jugador debe colocar una ficha que conecte con los extremos de la mesa
6. **Pasar turno**: Si no puede jugar, el jugador pasa su turno
7. **Victoria**: Gana quien coloca todas sus fichas primero
8. **Bloqueo**: Si nadie puede jugar, gana quien tiene menos puntos

## Compilacion

### Windows
```cmd
cd ejercicio6_domino
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Ficha.cpp
g++ -std=c++11 -Wall -c Jugador.cpp
g++ -std=c++11 -Wall -c JuegoDomino.cpp
g++ -std=c++11 -Wall -o domino.exe main.o Ficha.o Jugador.o JuegoDomino.o
domino.exe
```

### Linux/Mac
```bash
cd ejercicio6_domino
make
./domino
```

## Como Jugar

1. Ejecuta el programa
2. Ingresa el numero de jugadores (2-4)
3. En tu turno:
   - Ve tus fichas numeradas
   - Ingresa el numero de ficha a jugar
   - Si la mesa no esta vacia, ingresa el lado (1=izquierda, 2=derecha)
4. El juego continua hasta que alguien gane o haya bloqueo
5. Puedes jugar multiples rondas

## Ejemplo de Uso

```
=== juego de domino ===
bienvenido!

ingresa el numero de jugadores (2-4): 2

=== iniciando nueva partida ===
fichas distribuidas!
total de fichas: 28
fichas por jugador: 14

--- turno de jugador 1 ---
jugador 1 - fichas (14): 1.[3|4] 2.[1|6] 3.[2|5] ...
la mesa esta vacia. coloca cualquier ficha.
ingresa el numero de ficha (1-14): 1
ficha colocada: [3|4]

mesa: [3|4]

--- turno de jugador 2 ---
jugador 2 - fichas (14): 1.[0|3] 2.[4|5] 3.[1|2] ...
extremos: izq=3, der=4
ingresa ficha y lado (ej: 1 2): 2 2
ficha colocada en derecha: [4|5]

mesa: [3|4] [4|5]
...
```

## Arquitectura del Codigo

### Clase Ficha
- Representa una ficha individual con dos valores
- Metodos para verificar conexiones y voltear

### Clase Jugador
- Maneja nombre, fichas en mano y victorias
- Metodos para agregar/remover fichas y calcular puntos

### Clase JuegoDomino
- Gestiona el flujo completo del juego
- Crea y distribuye fichas
- Controla turnos y valida jugadas
- Detecta victoria o bloqueo

## Principios de POO Aplicados

- **Encapsulacion**: Atributos privados con metodos de acceso
- **Modularidad**: Cada clase tiene responsabilidad unica
- **Abstraccion**: Interfaces claras y simples
- **Reutilizacion**: Codigo organizado y mantenible