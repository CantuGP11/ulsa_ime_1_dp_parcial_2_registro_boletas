
    
#include <iostream>
#include <string>
#include "utilerias.h"
#include "promedios.h"
#include "estudiantes.h"
#include "menu.h"
#include "ReporteAprovados.h"

void Saludar(std::string nombre)
{
    std::cout << "Hola estudiante, " << nombre << std::endl;
}

void Calificaciones(double &Matematicas, double &Espanol, double &DiseniodeProgramas)
{
    std::cout << "Calificacion de Matematicas" << std::endl;
    Matematicas = leerDecimal("Ingresa la calificacion de Matematicas: ");
    std::cout << "Calificacion de Espanol" << std::endl;
    Espanol = leerDecimal("Ingresa la calificacion de Espanol: ");
    std::cout << "Calificacion de Disenio de Programas" << std::endl;
    DiseniodeProgramas = leerDecimal("Ingresa la calificacion de Disenio de Programas: ");
}



int main()
{
    const int MAX_ALUMNOS = 6;
     std::string alumnos[MAX_ALUMNOS];
    
    double Matematicas[MAX_ALUMNOS] , Espanol[MAX_ALUMNOS], DiseniodeProgramas[MAX_ALUMNOS];

    std::cout << "Bienvenido al Simulador de Registro de Calificaciones\n\n";

    for (int i = 0; i < MAX_ALUMNOS; i++) {
        std::cout << "Nombre del estudiante " << i + 1 << ": ";
        std::cin >> alumnos[i];
    
    }

    for (int i = 0; i < MAX_ALUMNOS; i++)
    { std::cout <<"\nAlumno:" << alumnos[i] << std::endl;
    Calificaciones( Matematicas[i], Espanol[i], DiseniodeProgramas[i]  );
    
    }
        
    Saludar(alumnos[0]);
    Calificaciones(Matematicas[0], Espanol[0], DiseniodeProgramas[0]);
  
    std::cout << std::endl;
    Saludar(alumnos[1]);
    Calificaciones(Matematicas[1], Espanol[1], DiseniodeProgramas[1]);
    
    std::cout << std::endl;
    Saludar(alumnos[2]);
    Calificaciones(Matematicas[2], Espanol[2], DiseniodeProgramas[2]);
    
    std::cout << std::endl;
    Saludar(alumnos[3]);
    Calificaciones(Matematicas[3], Espanol[3], DiseniodeProgramas[3]);
    
    std::cout << std::endl;
    Saludar(alumnos[4]);
    Calificaciones(Matematicas[4], Espanol[4], DiseniodeProgramas[4]);
    
    std::cout << std::endl;
    Saludar(alumnos[5]);
    Calificaciones(Matematicas[5], Espanol[5], DiseniodeProgramas[5]);
    
    
    mostrarMenu();
    eligeOpcion( alumnos, Matematicas, Espanol, DiseniodeProgramas);

    return 0;
}
