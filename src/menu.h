#include <iostream>
#include <iomanip>
#include <string>

#include "utilerias.h"
#include "registro.h"

void capturaAlumnos() {
    std::cout << "aqui va la captura de alumnos...";
}
void mostrarMenu() {
    std::cout << "\n1.- Capturar Alumno\n";
    std::cout << "2.-Mostrar Lista\n";
    std::cout << "3.-Estadísticas por Materia\n";
    std::cout << "4.-Aprobados y Reprobados\n";
    std::cout << "5.-Boleta Individual\n";
    std::cout << "6.-Materias Reprobadas por Alumno\n";
    std::cout << "7.-Salir\n";
}

void eligeOpcion() {
    while (true){
        mostrarMenu();
        int opcion = leerEntero("Selecciona una operacion");

        switch(opcion){
            case 1:
            capturaAlumnos();
            break;
            case 2:
            mostrarLista(nombres, espanol, matematicas, disenoProgramas, total);
            break
            case 3:
            
            case 7:
            break;
            default:
                    std::cout << "Opcion invalida\n";
 
        }
    }
}

