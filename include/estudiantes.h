#include <iostream>
// estudiantes.h

#ifndef ESTUDIANTES_H // Es para que el programa no ejecute 2 veces estudiantes.h y marque error. Pregunta si ya entro.
#define ESTUDIANTES_H // esta marca que ya entro.

#include <string>
const int MAX_ALUMNOS = 6;

void capturaAlumnos(std::string alumnos[], int MAX_ALUMNOS)
{
    for (int i = 0; i < MAX_ALUMNOS; i++)
    {
        std::cout << "Nombre del estudiante " << i + 1 << ": ";
        std::cin >> alumnos[i];
    }
}

 #endif // termina esta condicion #ifndef ESTUDIANTES_H    