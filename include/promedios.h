#ifndef PROMEDIOS_H
#define PROMEDIOS_H
#include <string>
#include <iostream>
#include "utilerias.h"
#include "estudiantes.h"


void imprimirPromedio( std::string alumnos[],double Matematicas[], double Espanol[], double DiseniodeProgramas[], int MAX_ALUMNOS) {
   { 
    for (int i = 0; i< MAX_ALUMNOS; i++)
    {
        double promedio = ( Matematicas[i] + Espanol[i] + DiseniodeProgramas[i])/3;

          std::cout << alumnos[i] <<" Promedio: " << promedio << std::endl;
                  
    }
    }//for
}//funcion
#endif