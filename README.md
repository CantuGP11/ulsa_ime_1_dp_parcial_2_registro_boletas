# Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar

> **Importante:** este README es del equipo y debe tener aportaciones de todos los integrantes. La guía completa está en [`PROYECTO.md`](PROYECTO.md).

## 1. Integrantes

| Bloque | Matrícula | Nombre | Usuario de GitHub | Opción elegida |
| --- | --- | --- | --- | --- |
| 1 | [26082] | [Marian Reynoso] | [marianreynoso-boop] | Aprobado  y Reprobado |
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

[El programa permite registrar un maximo de seis alumnos.

Cada alumno tiene un nombre y tres calificaciones: Espanol, Matematicas y Disenio de Programas.

Las calificaciones deben estar entre 0 y 10 y pueden incluir decimales.

Una calificacion de 7.0 o ms se considera aprobatoria; una menor a 7.0 es reprobatoria.

El promedio individual se calcula sumando las tres calificaciones y dividiendo el resultado entre tres.

Un alumno se considera aprobado unicamente si aprueba las tres materias.

El nombre de cada alumno no puede quedar vacio.

Si se intenta utilizar un reporte cuando no hay alumnos registrados, el programa debe mostrar un aviso y regresar al menu.

Si se intenta registrar un alumno cuando la lista esta llena, el programa debe rechazar el registro.

Si se introduce una opcion que no existe en el menu, se muestra el mensaje Opcion invalida.

El menu se repite hasta que el usuario selecciona la opcion para salir.

Los reportes deben utilizar los nombres y las calificaciones correspondientes a cada alumno.]

## 5. Datos del escenario

Los 6 alumnos que capturan en el escenario obligatorio.

| # | Nombre | Español | Matemáticas | Diseño de Programas |
| --- | --- | --- | --- | --- |
| 1 | [Gilberto Cantu] | [100] | [100] | [80] |
| 2 | [Enrique Talamas] | [74] | [90] | [80] |
| 3 | [Enrique Ruvalcaba] | [60] | [75] | [80] |
| 4 | [Maximiliano Munos] | [50] | [70] | [80] |
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

[no cambiamos nada]

## 7. Receta del menú

Receta en pseudocódigo del programa principal: el menú y cómo se conecta con cada bloque.

```
[1. INICIO

2. Mostrar el menu principal

Mostrar "1. Mostrar lista de alumnos".

Mostrar "2. Estadisticas por materia".

Mostrar "3. Aprobados y reprobados generales".

Mostrar "4. Boleta individual".

Mostrar "5. Materias reprobadas por alumno".

Mostrar "6. Salir".

3. Repetir el menu

MIENTRAS la opcion sea diferente de 6, hacer lo siguiente:

Leer la opcion seleccionada.

Evaluar la opcion con la estructura SEGUN.

4. Opcion 1: Mostrar lista de alumnos

Mostrar el titulo "LISTA DE ALUMNOS".

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

FIN PARA.

5. Opcion 2: Estadisticas por materia

Mostrar el titulo "Promedios de los alumnos".

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Calcular y mostrar sus promedios de Matematicas, Espaniol y Diseno de Programas mediante la funcion correspondiente.

FIN PARA.

6. Opcion 3: Aprobados y reprobados generales

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Evaluar sus calificaciones de Matematicas, Espanol y Disenio de Programas mediante la funcion AprobadoGeneral.

Mostrar el resultado de aprobado o reprobado.

FIN PARA.

7. Opcion 4: Boleta individual

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Mostrar su calificacion de Matematicas.

Mostrar su calificacion de Espanol.

Mostrar su calificacion de Disenio de Programas.

FIN PARA.

8. Opcion 5: Materias reprobadas por alumno

PARA cada alumno desde 0 hasta MAX_ALUMNOS - 1:

Mostrar el nombre del alumno.

Evaluar sus calificaciones con la funcion Aprobo_Reprobo.

Mostrar las materias que reprobo.

FIN PARA.

9. Opcion 6: Salir

Terminar el ciclo del menu.

Mostrar un mensaje de despedida.

10. Opcion no vaida

Si la opcion no corresponde a ninguna de las anteriores:

Mostrar "Opcion invalida".

Regresar al menu principal.

11. FIN]
```

## 8. Documentación individual

Enlace a la documentación y a la propuesta de mejora de cada integrante.

| Bloque | Documentación | Propuesta de mejora |
| --- | --- | --- |
|Marian| [https://github.com/CantuGP11/ulsa_ime_1_dp_parcial_2_registro_boletas] | [Mi propuesta es un sistema de niveles y recompensas 
en el cual da la calificacion al estilo de un videojuego mediante rangos, puntos de experiencia (XP) y el estado de desbloqueo del siguiente modulo. Con el objetivo de que los alumnos no vean la reprobacion como un fracaso definitivo] |
| Luis | [https://github.com/CantuGP11/ulsa_ime_1_dp_parcial_2_registro_boletas] | [Mi propuesta de mejora es que se puedan separar las calificaciones de cada materia por parciales, registrar parcial uno dos y tres, y a partir de ahi calcular el promedio final por materia] |
| Luis Enrique | [https://github.com/CantuGP11/ulsa_ime_1_dp_parcial_2_registro_boletas] | [si un alumno tiene promedio de 10 el programa le de un reconocimiento] |
| Enrique| [https://github.com/CantuGP11/ulsa_ime_1_dp_parcial_2_registro_boletas] | [Que pida matriculas para que sea mas especifico y sea mas facil identificar al sujeto sin  confusiones o similitudes por los nombres.] |
| Gilberto | [https://github.com/CantuGP11/ulsa_ime_1_dp_parcial_2_registro_boletas] | [mostrar cuantas materias reprobo cada alumno y cuales fueron, en lugar de solamente mostrar su nombre y llamar a la funcion Aprobo_Reprobo] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 9. Cambios a la interfaz

Si cambiaron algo de la interfaz de `include/registro.h` (una constante, un parámetro, una función), expliquen qué cambiaron y por qué. Si no cambiaron nada, escriban "Sin cambios".

[Sin cambios]
