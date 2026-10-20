# Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar

> **Importante:** este README es del equipo y debe tener aportaciones de todos los integrantes. La guía completa está en [`PROYECTO.md`](PROYECTO.md).

## 1. Integrantes

| Bloque | Matrícula | Nombre | Usuario de GitHub | Opción elegida |
| --- | --- | --- | --- | --- |
| 1 | [ 26082] | [Marian Reynoso] | [marianreynoso-boop] | Aprobado  y Reprobado |
| 2 | [26084] | [Enrique Talamas] | [EnriquTalamas] | [Boleta Individual] |
| 3 | [26083] | [Luis Enrique Ruvalcaba ] | [LuisRuvalcaba18] | [Estadisticas por Materia] |
| 4 | [26160] | [Luis Cortes] | [luiscortesg08] | [Captura] |
| 5 | [26078] | [Gilberto Cantú] | [CantuGP11] | [Materias Reprobadas por alumno] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 2. Opciones del menú

Escriban las opciones del menú en el orden en que aparecen en el programa.

[Mostrar lista de alumnos.

Estadísticas por materia.

Aprobados y reprobados.

Boleta individual.

Materias reprobadas por alumno.

Salir.]

## 3. Cómo compilar y ejecutar

Desde la carpeta del proyecto:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o boletas
./boletas
```

## 4. Reglas del programa

Escriban las reglas que su programa sigue y que el cálculo a mano necesita. Por ejemplo: qué pasa cuando hay un empate, cómo se busca un nombre, con cuántos decimales se imprime.

[El programa permite registrar un máximo de seis alumnos.

Cada alumno tiene un nombre y tres calificaciones: Español, Matemáticas y Diseño de Programas.

Las calificaciones deben estar entre 0 y 10 y pueden incluir decimales.

Una calificación de 7.0 o más se considera aprobatoria; una menor a 7.0 es reprobatoria.

El promedio individual se calcula sumando las tres calificaciones y dividiendo el resultado entre tres.

Un alumno se considera aprobado únicamente si aprueba las tres materias.

El nombre de cada alumno no puede quedar vacío.

Si se intenta utilizar un reporte cuando no hay alumnos registrados, el programa debe mostrar un aviso y regresar al menú.

Si se intenta registrar un alumno cuando la lista está llena, el programa debe rechazar el registro.

Si se introduce una opción que no existe en el menú, se muestra el mensaje «Opción inválida».

El menú se repite hasta que el usuario selecciona la opción para salir.

Los reportes deben utilizar los nombres y las calificaciones correspondientes a cada alumno.]

## 5. Datos del escenario

Los 6 alumnos que capturan en el escenario obligatorio.

| # | Nombre | Español | Matemáticas | Diseño de Programas |
| --- | --- | --- | --- | --- |
| 1 | [Gilberto Cantú] | [100] | [100] | [80] |
| 2 | [Enrique Talamas] | [74] | [90] | [80] |
| 3 | [Enrique Ruvalcaba] | [60] | [75] | [80] |
| 4 | [Maximiliano Muños] | [50] | [70] | [80] |
| 5 | [Oliver Lopez] | [90] | [88] | [80] |
| 6 | [Matias Borrego] | [85] | [93] | [80] |

## 6. Cálculo a mano

Predigan la salida del escenario antes de ejecutarlo. Una fila por bloque individual. Lo que imprime el programa debe coincidir.

| Bloque | Valores elegidos | Resultado esperado |
| --- | --- | --- |
| 1 | [Lista de alumnos] | [Se muestran los seis nombres registrados.] |
| 2 | [Estadisicas de las 3 materias] | [Espanol: 7.65; Matematicas: 8.60; Disenio de Programas: 8.00.] |
| 3 | [Calificacion minima aprobatoria de 7.0] | [Espanol: 4 aprobados y 2 reprobados, Matematicas: 6 aprobados y 0 reprobados, Disenio de Programas: 6 aprobados y 0 reprobados.] |
| 4 | [Boletas de los 6 alumnos] | [Se muestran las calificaciones de cada alumno y, si esta implementado, su promedio y estado academico.] |
| 5 | [Materias reprobadas por alumno] | [ Enrique Ruvalcaba: 1, Maximiliano Munos: 1, los demas alumnos: 0.] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

**¿La salida del programa coincidió con el cálculo a mano? Si no, ¿qué corrigieron?**

[Inserta aquí tu respuesta]

## 7. Receta del menú

Receta en pseudocódigo del programa principal: el menú y cómo se conecta con cada bloque.

```
[1. INICIO

2. Mostrar el menú principal

Mostrar "1. Mostrar lista de alumnos".

Mostrar "2. Estadísticas por materia".

Mostrar "3. Aprobados y reprobados generales".

Mostrar "4. Boleta individual".

Mostrar "5. Materias reprobadas por alumno".

Mostrar "6. Salir".

3. Repetir el menú

MIENTRAS la opción sea diferente de 6, hacer lo siguiente:

Leer la opción seleccionada.

Evaluar la opción con la estructura SEGÚN.

4. Opción 1: Mostrar lista de alumnos

Mostrar el título "LISTA DE ALUMNOS".

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

FIN PARA.

5. Opción 2: Estadísticas por materia

Mostrar el título "Promedios de los alumnos".

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Calcular y mostrar sus promedios de Matemáticas, Español y Diseño de Programas mediante la función correspondiente.

FIN PARA.

6. Opción 3: Aprobados y reprobados generales

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Evaluar sus calificaciones de Matemáticas, Español y Diseño de Programas mediante la función AprobadoGeneral.

Mostrar el resultado de aprobado o reprobado.

FIN PARA.

7. Opción 4: Boleta individual

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Mostrar su calificación de Matemáticas.

Mostrar su calificación de Español.

Mostrar su calificación de Diseño de Programas.

FIN PARA.

8. Opción 5: Materias reprobadas por alumno

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Evaluar sus calificaciones con la función Aprobo_Reprobo.

Mostrar las materias que reprobó.

FIN PARA.

9. Opción 6: Salir

Terminar el ciclo del menú.

Mostrar un mensaje de despedida.

10. Opción no válida

Si la opción no corresponde a ninguna de las anteriores:

Mostrar "Opción inválida".

Regresar al menú principal.

11. FIN]
```

## 8. Documentación individual

Enlace a la documentación y a la propuesta de mejora de cada integrante.

| Bloque | Documentación | Propuesta de mejora |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 4 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 5 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 9. Cambios a la interfaz

Si cambiaron algo de la interfaz de `include/registro.h` (una constante, un parámetro, una función), expliquen qué cambiaron y por qué. Si no cambiaron nada, escriban "Sin cambios".

[Inserta aquí tu respuesta]
