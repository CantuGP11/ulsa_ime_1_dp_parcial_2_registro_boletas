
        


#include <iostream>
#include <string>
#include "utilerias.h"
#include "promedios.h"

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
    double Matematicas, Espanol, DiseniodeProgramas;

    std::string nombre;

    std::cout << "Bienvenido al Simulador de Registro de calificaciones" << std::endl;

    std::string estudiante1, estudiante2, estudiante3, estudiante4, estudiante5, estudiante6;

    std::cout << "Nombre del estudiante 1: ";
    std::cin >> estudiante1;
    std::cout << "Nombre del estudiante 2: ";
    std::cin >> estudiante2;
    std::cout << "Nombre del estudiante 3: ";
    std::cin >> estudiante3;
    std::cout << "Nombre del estudiante 4: ";
    std::cin >> estudiante4;
    std::cout << "Nombre del estudiante 5: ";
    std::cin >> estudiante5;
    std::cout << "Nombre del estudiante 6: ";
    std::cin >> estudiante6;

    Saludar(estudiante1);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(estudiante2);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(estudiante3);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(estudiante4);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(estudiante5);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);
    std::cout << std::endl;
    Saludar(estudiante6);
    Calificaciones(Matematicas, Espanol, DiseniodeProgramas);
    Aprobo_Reprobo(Matematicas, Espanol, DiseniodeProgramas);

    return 0;
}
