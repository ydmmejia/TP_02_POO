# Trabajo Practico No. 2 - POO en C++

**Asignatura:** Programacion Avanzada  
**Profesor:** M.Sc. Mauro Baquero-Suarez  
**Programa:** Ingenieria Mecatronica  
**Fecha de Entrega:** 11 de Noviembre de 2025

## Integrantes

- Juan David Jaimes Rebolledo
- Sebastian Camilo Nova Ovallos
- Yeison David Mejia Mosquera

## Descripcion General

Este repositorio contiene la implementacion completa de 6 ejercicios de Programacion Orientada a Objetos en C++. El proyecto abarca desde estructuras matematicas fundamentales como vectores y matrices, hasta la implementacion de un juego completo de domino con interfaz interactiva en consola.

Cada ejercicio demuestra la aplicacion de principios fundamentales de POO incluyendo encapsulacion, abstraccion, sobrecarga de operadores y manejo dinamico de memoria.

## Estructura del Proyecto

```
TP_02_POO/
├── README.md
├── ejercicio1/          
│   ├── Vector3D.h
│   ├── Vector3D.cpp
│   ├── main.cpp
│   └── Makefile
├── ejercicio2/         
│   ├── Matriz.h
│   ├── Matriz.cpp
│   ├── main.cpp
│   └── Makefile
├── ejercicio3/          
│   ├── Polinomio.h
│   ├── Polinomio.cpp
│   ├── main.cpp
│   └── Makefile
├── ejercicio4/         
│   ├── Complex.h
│   ├── Complex.cpp
│   ├── Polar.h
│   ├── Polar.cpp
│   ├── main.cpp
│   └── Makefile
├── ejercicio5/          
│   ├── CTermino.h
│   ├── CTermino.cpp
│   ├── CPolinomio.h
│   ├── CPolinomio.cpp
│   ├── main.cpp
│   └── Makefile
└── ejercicio6_domino/   
    ├── Ficha.h
    ├── Ficha.cpp
    ├── Jugador.h
    ├── Jugador.cpp
    ├── JuegoDomino.h
    ├── JuegoDomino.cpp
    ├── main.cpp
    ├── Makefile
    └── README_DOMINO.md
```

## Requisitos del Sistema

### Software Necesario
- Compilador C++ compatible con C++11 o superior (g++, clang++, MSVC)
- Make (opcional pero recomendado)
- Git para control de versiones

### Sistemas Operativos Soportados
- Linux (Ubuntu, Debian, Fedora, etc.)
- macOS
- Windows (con MinGW o WSL)

## Compilacion y Ejecucion

### Opcion 1: Compilacion con Make (Linux/macOS)

```bash
cd ejercicioX
make
./nombre_ejecutable
```

### Opcion 2: Compilacion Manual (Windows)

```cmd
cd ejercicioX
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c NombreClase.cpp
g++ -std=c++11 -Wall -o programa.exe main.o NombreClase.o
programa.exe
```

### Comandos Especificos por Ejercicio

**Ejercicio 1:**
```bash
cd ejercicio1
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Vector3D.cpp
g++ -std=c++11 -Wall -o vector3d main.o Vector3D.o
./vector3d
```

**Ejercicio 2:**
```bash
cd ejercicio2
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Matriz.cpp
g++ -std=c++11 -Wall -o matriz main.o Matriz.o
./matriz
```

**Ejercicio 3:**
```bash
cd ejercicio3
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Polinomio.cpp
g++ -std=c++11 -Wall -o polinomio main.o Polinomio.o
./polinomio
```

**Ejercicio 4:**
```bash
cd ejercicio4
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Complex.cpp
g++ -std=c++11 -Wall -c Polar.cpp
g++ -std=c++11 -Wall -o complejos main.o Complex.o Polar.o
./complejos
```

**Ejercicio 5:**
```bash
cd ejercicio5
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c CTermino.cpp
g++ -std=c++11 -Wall -c CPolinomio.cpp
g++ -std=c++11 -Wall -o polinomio main.o CTermino.o CPolinomio.o
./polinomio
```

**Ejercicio 6:**
```bash
cd ejercicio6_domino
g++ -std=c++11 -Wall -c main.cpp
g++ -std=c++11 -Wall -c Ficha.cpp
g++ -std=c++11 -Wall -c Jugador.cpp
g++ -std=c++11 -Wall -c JuegoDomino.cpp
g++ -std=c++11 -Wall -o domino main.o Ficha.o Jugador.o JuegoDomino.o
./domino
```

## Descripcion Detallada de los Ejercicios

### Ejercicio 1: Vector3D (10%)

**Descripcion:** Implementacion de una clase que representa vectores en un espacio tridimensional con coordenadas (x, y, z).

**Caracteristicas Implementadas:**
- Constructor con inicializacion de coordenadas
- Calculo de magnitud usando la formula euclidiana: √(x² + y² + z²)
- Normalizacion de vectores (vector unitario)
- Sobrecarga del operador + para suma vectorial
- Sobrecarga del operador - para resta vectorial
- Sobrecarga del operador * para producto escalar
- Metodo de impresion de coordenadas

**Metodologia:**
La clase utiliza tres variables miembro privadas de tipo `double` para almacenar las coordenadas. La magnitud se calcula mediante la funcion `sqrt()` de la biblioteca `<cmath>`. La normalizacion divide cada componente por la magnitud del vector, con validacion para evitar division por cero. Los operadores aritmeticos se sobrecargaron siguiendo las reglas del algebra vectorial, permitiendo un uso intuitivo y natural de los objetos Vector3D.

**Ejemplo de uso:**
```cpp
Vector3D v1(3.0, 4.0, 0.0);
Vector3D v2(1.0, 2.0, 2.0);
Vector3D suma = v1 + v2;
double producto = v1 * v2;
```

---

### Ejercicio 2: Matriz (10%)

**Descripcion:** Clase que representa matrices cuadradas n×n con asignacion dinamica de memoria.

**Caracteristicas Implementadas:**
- Constructor que inicializa matriz con valores aleatorios (0-9)
- Destructor que libera memoria dinamicamente asignada
- Calculo de matriz transpuesta
- Multiplicacion de matrices siguiendo el algoritmo estandar
- Sobrecarga del operador [] para acceso tipo arreglo bidimensional
- Metodo de impresion formateada

**Metodologia:**
Se utilizo un puntero doble (`double**`) para crear una matriz dinamica. El constructor asigna memoria fila por fila usando `new`, e inicializa cada elemento con valores aleatorios generados por `rand()`. La transpuesta se calcula intercambiando filas por columnas. La multiplicacion implementa el algoritmo clasico O(n³) donde cada elemento (i,j) del resultado es la suma del producto de la fila i de la primera matriz por la columna j de la segunda. El destructor garantiza la liberacion correcta de memoria para evitar memory leaks.

**Complejidad:** 
- Transpuesta: O(n²)
- Multiplicacion: O(n³)

**Ejemplo de uso:**
```cpp
Matriz m1(3);
Matriz m2 = m1.transpuesta();
Matriz m3 = m1.multiplicar(m2);
double elemento = m1[0][0];
```

---

### Ejercicio 3: Polinomio (10%)

**Descripcion:** Clase que representa polinomios de grado n con coeficientes arbitrarios.

**Caracteristicas Implementadas:**
- Constructor con array de coeficientes
- Constructor de copia para manejo seguro de memoria
- Evaluacion eficiente usando el metodo de Horner
- Calculo de derivada simbolica
- Sobrecarga de operador + para suma de polinomios
- Sobrecarga de operador * para multiplicacion de polinomios
- Impresion en notacion matematica estandar
- Destructor para liberacion de memoria

**Metodologia:**
Los coeficientes se almacenan en un array dinamico donde el indice representa el exponente. La evaluacion usa el metodo de Horner, que reduce la complejidad de O(n²) a O(n) evitando calculos de potencias repetidos. La derivada se obtiene multiplicando cada coeficiente por su exponente y reduciendo el grado en 1. La suma combina coeficientes de mismo grado. La multiplicacion implementa la convolucion de polinomios, donde cada termino del primero se multiplica por todos los del segundo.

**Algoritmo de Horner:**
Para P(x) = a₀ + a₁x + a₂x² + ... + aₙxⁿ
Se evalua como: P(x) = a₀ + x(a₁ + x(a₂ + ... + x(aₙ)))

**Ejemplo de uso:**
```cpp
double coefs[] = {7, -2, 3, 4}; // 4x³ + 3x² - 2x + 7
Polinomio p(coefs, 3);
double valor = p.evaluar(2.0);
Polinomio derivada = p.derivar();
```

---

### Ejercicio 4: Numeros Complejos (10%)

**Descripcion:** Sistema dual de representacion de numeros complejos en forma binomial (a+bi) y polar (r·e^(iθ)).

**Caracteristicas Implementadas:**

**Clase Complex (forma binomial):**
- Almacenamiento de parte real e imaginaria
- Operadores: suma, resta, multiplicacion, division
- Calculo de conjugado
- Constructor de conversion desde forma polar

**Clase Polar (forma polar):**
- Almacenamiento de modulo y angulo
- Operadores aritmeticos (suma, resta requieren conversion)
- Multiplicacion y division directas (mas eficientes en forma polar)
- Constructor de conversion desde forma binomial

**Funcion acumula():**
- Implementada con templates variadicos de C++11
- Suma cantidad indefinida de numeros complejos o polares
- Uso de recursion para procesar parametros

**Metodologia:**
Las conversiones entre formas usan las relaciones:
- Binomial a Polar: r = √(a²+b²), θ = atan2(b,a)
- Polar a Binomial: a = r·cos(θ), b = r·sin(θ)

La multiplicacion en forma polar es mas eficiente: (r₁·e^(iθ₁)) × (r₂·e^(iθ₂)) = (r₁r₂)·e^(i(θ₁+θ₂))

La funcion `acumula()` usa templates variadicos recursivos, una caracteristica de C++11 que permite funciones con numero variable de argumentos de forma type-safe.

**Ejemplo de uso:**
```cpp
Complex c1(3, 4);
Complex c2(1, -2);
Complex suma = c1 + c2;
Polar p1(c1);  // conversion
Complex resultado = acumula(c1, c2, Complex(2,1));
```

---

### Ejercicio 5: CTermino y CPolinomio (20%)

**Descripcion:** Sistema avanzado para manipular ecuaciones polinomicas con terminos individuales y operaciones algebraicas.

**Caracteristicas Implementadas:**

**Clase CTermino:**
- Encapsula un termino individual (coeficiente, exponente)
- Metodo `toString()` para formato matematico correcto
- Getters y setters para acceso controlado

**Clase CPolinomio:**
- Array dinamico de CTermino con redimensionamiento automatico
- Insercion ordenada por exponente ascendente
- Suma automatica de coeficientes para terminos del mismo grado
- Eliminacion de terminos con coeficiente nulo
- Suma de polinomios que preserva orden
- Multiplicacion de polinomios con simplificacion automatica
- Formato de salida en notacion estandar

**Metodologia:**
CPolinomio usa un array dinamico que crece automaticamente cuando se llena (duplicando capacidad). Al insertar un termino:
1. Busca si existe un termino con el mismo exponente
2. Si existe, suma los coeficientes
3. Si el resultado es cero, elimina el termino
4. Si no existe, inserta en posicion ordenada

La suma recorre ambos polinomios agregando todos los terminos al resultado, donde la insercion automatica maneja duplicados. La multiplicacion usa dos bucles anidados para multiplicar cada termino del primer polinomio por cada termino del segundo, con simplificacion automatica de terminos semejantes.

**Complejidad:**
- Insercion: O(n) debido a busqueda e insercion ordenada
- Suma: O(n+m) donde n,m son numeros de terminos
- Multiplicacion: O(n·m·k) donde k es el costo de insercion

**Ejemplo de uso:**
```cpp
CPolinomio p;
p.asignarTermino(CTermino(4, 3));  // 4x³
p.asignarTermino(CTermino(3, 2));  // + 3x²
CPolinomio q;
q.asignarTermino(CTermino(5, 2));  // 5x²
CPolinomio r = p.sumar(q);
CPolinomio m = p.multiplicar(q);
```

---

### Ejercicio 6: Juego de Domino (40%)

**Descripcion:** Implementacion completa y funcional del juego de domino para 2-4 jugadores con todas las reglas tradicionales y sistema de puntuacion multi-ronda.

**Arquitectura del Sistema:**

**Clase Ficha:**
- Representa una ficha individual con dos valores (0-6)
- Metodos para verificar si es doble
- Validacion de conexion con valores dados
- Funcionalidad de voltear ficha
- Calculo de suma de puntos

**Clase Jugador:**
- Encapsula nombre y fichas en mano
- Vector dinamico de fichas (`std::vector<Ficha>`)
- Sistema de estadisticas (victorias acumuladas)
- Metodos para agregar/remover fichas
- Verificacion de jugadas validas
- Calculo de puntos totales en mano

**Clase JuegoDomino:**
- Gestion completa del flujo del juego
- Creacion del set completo (28 fichas)
- Algoritmo de mezcla aleatoria
- Distribucion equitativa de fichas
- Control de turnos rotativos
- Validacion de reglas del juego
- Deteccion de condiciones de victoria
- Deteccion de bloqueo
- Sistema de puntuacion

**Reglas Implementadas:**

1. **Inicio de Partida:**
   - Creacion de 28 fichas unicas: (0-0), (0-1), ..., (6-6)
   - Mezcla aleatoria usando algoritmo de Fisher-Yates
   - Distribucion equitativa entre jugadores

2. **Primer Turno:**
   - Mesa vacia, cualquier ficha puede ser colocada
   - Establece los extremos iniciales

3. **Turnos Subsecuentes:**
   - Jugador debe conectar con extremo izquierdo o derecho
   - Ficha se voltea automaticamente si es necesario
   - Si no puede jugar, pasa turno

4. **Condiciones de Victoria:**
   - Victoria inmediata: jugador coloca todas sus fichas
   - Victoria por bloqueo: menor puntuacion cuando nadie puede jugar

5. **Sistema Multi-Ronda:**
   - Acumulacion de victorias
   - Estadisticas persistentes entre partidas
   - Opcion de reinicio sin cerrar programa

**Metodologia de Implementacion:**

**Generacion de Fichas:**
Usando bucles anidados se generan todas las combinaciones unicas:
```cpp
for (int i = 0; i <= 6; i++)
    for (int j = i; j <= 6; j++)
        fichas.push_back(Ficha(i, j));
```

**Mezcla Aleatoria:**
Implementa algoritmo de Fisher-Yates con complejidad O(n):
```cpp
for (size_t i = 0; i < n; i++)
    swap(fichas[i], fichas[rand() % n]);
```

**Validacion de Jugadas:**
Cada jugada verifica:
1. Indice de ficha valido
2. Lado de colocacion valido (1=izq, 2=der)
3. Conexion correcta con extremo correspondiente
4. Volteo automatico si es necesario

**Deteccion de Bloqueo:**
Recorre todos los jugadores verificando si alguno tiene fichas conectables con los extremos actuales. Si ninguno puede jugar, se declara bloqueo y gana quien tiene menos puntos.

**Interfaz de Usuario:**
- Visualizacion clara de fichas en mano
- Estado actual de la mesa
- Extremos disponibles destacados
- Mensajes informativos de cada accion
- Manejo de errores con mensajes claros
- Estadisticas al final de cada ronda

**Estructuras de Datos:**
- `std::vector<Ficha>` para mesa (cadena de fichas jugadas)
- `std::vector<Jugador>` para lista de jugadores
- Arrays dinamicos para fichas del jugador

**Ejemplo de Flujo de Juego:**
```
Inicio → Mezcla → Distribucion → Turno 1 → ... → Turno N → 
Victoria/Bloqueo → Estadisticas → ¿Nueva Ronda? → Fin/Reinicio
```

**Casos Especiales Manejados:**
- Entrada invalida del usuario
- Fichas dobles
- Bloqueo total del juego
- Rondas multiples sin restart
- Calculo correcto de ganador por puntos

Ver [README_DOMINO.md](ejercicio6_domino/README_DOMINO.md) para detalles completos de las reglas y ejemplos de partida.

---

## Principios de POO Aplicados

### Encapsulacion
- Todos los atributos son privados
- Acceso controlado mediante metodos publicos (getters/setters)
- Ocultamiento de detalles de implementacion

### Abstraccion
- Interfaces claras y simples para el usuario
- Complejidad interna oculta
- Metodos con nombres descriptivos

### Sobrecarga de Operadores
- Operadores aritmeticos (+, -, *, /)
- Operador de acceso ([])
- Uso natural e intuitivo de objetos matematicos

### Manejo de Memoria Dinamica
- Uso correcto de new/delete
- Destructores para prevenir memory leaks
- Constructores de copia donde es necesario
- Operadores de asignacion sobrecargados

### Modularidad
- Separacion clara entre .h y .cpp
- Una clase por responsabilidad
- Codigo reutilizable y mantenible

## Notas Tecnicas

### Compilacion
- Estandar: C++11 o superior
- Flags recomendados: `-std=c++11 -Wall`
- Optimizacion: `-O2` para mejor rendimiento (opcional)

### Dependencias
- Biblioteca estandar de C++ (`<iostream>`, `<cmath>`, `<vector>`, etc.)
- No requiere bibliotecas externas

### Portabilidad
- Codigo portable entre sistemas operativos
- Uso de tipos estandar
- Sin dependencias de plataforma especifica

### Buenas Practicas Implementadas
- Nombres descriptivos de variables y funciones
- Codigo comentado donde es necesario
- Validacion de entradas
- Manejo de casos borde
- Mensajes de error informativos
- Formateo consistente

## Problemas Conocidos y Soluciones

### Problema 1: Numeros Aleatorios Repetidos
**Solucion:** Uso de `srand(time(0))` para semilla basada en tiempo

### Problema 2: Memory Leaks en Matrices
**Solucion:** Destructor que libera fila por fila correctamente

### Problema 3: Division por Cero en Vector3D
**Solucion:** Validacion antes de normalizar

### Problema 4: Overflow en Multiplicacion de Polinomios
**Solucion:** Uso de `double` para coeficientes grandes

## Testing y Validacion

Cada ejercicio incluye un `main.cpp` con casos de prueba que demuestran:
- Funcionalidad basica
- Casos borde
- Operaciones complejas
- Salida formateada

## Referencias y Recursos

- Stroustrup, B. (2013). The C++ Programming Language (4th Edition)
- Deitel, P., & Deitel, H. (2016). C++ How to Program (10th Edition)
- cppreference.com - Documentacion de C++
- Apuntes del curso de Programacion Avanzada

