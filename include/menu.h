#include <iostream>
#include <iomanip>
#include <string>
#include "estudiantes.h"
#include "utilerias.h"
#include "registro.h"



void mostrarMenu() {
    std::cout << "1.-Mostrar Lista\n";
    std::cout << "2.-Estadisticas por Materia\n";
    std::cout << "3.-Aprobados y Reprobados\n";
    std::cout << "4.-Boleta Individual\n";
    std::cout << "5.-Materias Reprobadas por Alumno\n";
    std::cout << "6.-Salir\n";
}

void eligeOpcion() {
    while (true){
        mostrarMenu();
        int opcion = leerEntero("Selecciona una operacion");

        switch(opcion){
            case 1:
       std::cout << "\nLISTA DE ALUMNOS\n";
       for (int i = 0; i < MAX_ALUMNOS; i++) {
       std::cout << alumnos[i] << std::endl;
        }
            break;
            case 2:

            case 7:
            break;
            default:
                    std::cout << "Opcion invalida\n";
 
        }
    }
}

