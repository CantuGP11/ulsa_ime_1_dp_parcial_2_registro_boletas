#include <iostream>
#include <iomanip>
#include <string>

#include "utilerias.h"
#include "registro.h"

void capturaAlumnos() {
    std::cout << "aqui va la captura de alumnos...";
}
void mostrarMenu() {
    std::cout << "1.-Mostrar Lista\n";
    std::cout << "2.-Estadísticas por Materia\n";
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
             std::cout << "Estudiante 1:" << estudiante1 << std::endl;
              std::cout << "Estudiante 2:" << estudiante2 << std::endl;
               std::cout << "Estudiante 3:" << estudiante3 << std::endl;
                std::cout << "Estudiante 4:" << estudiante4 << std::endl;
                 std::cout << "Estudiante 5:" << estudiante5 << std::endl;
                  std::cout << "Estudiante 6:" << estudiante6 << std::endl;
            break;
            case 7:
            break;
            default:
                    std::cout << "Opcion invalida\n";
 
        }
    }
}

