
    
#include <iostream>
#include <string>
#include "utilerias.h"
#include "promedios.h"

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
     std::string alumnos[MAX_ALUMNOS];
    const int MAX_ALUMNOS = 6;
    double Matematicas[MAX_ALUMNOS] , Espanol[MAX_ALUMNOS], DiseniodeProgramas[MAX_ALUMNOS];
   
    std::string alumnos[MAX_ALUMNOS];

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
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(alumnos[1]);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(alumnos[2]);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(alumnos[3]);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(alumnos[4]);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(alumnos[5]);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);

    capturaAlumnos();
    mostrarMenu();

    return 0;
}
