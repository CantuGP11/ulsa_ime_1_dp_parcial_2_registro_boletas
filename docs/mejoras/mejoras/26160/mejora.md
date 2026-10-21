Propuesta de mejora elaborada por: [Luis Cortés Gallegos]

**Matrícula:** [26160]
**Título de la propuesta:** [Calificaciones en parciales]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Es una mejora, lo que hace es permitir que el usuario ingrese 3 calificaiones por materia ya que en la mayoría de escuelas hay ese reparto de calificaciones, y de esta forma, el usuario puede calcular su promedio final a partir de las calificaciones de sus tres parciales]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Se modificarían las variables y arreglos que guardan las calificaciones para que permitan guardar tres por materia, y tambien se cambiarían las funciones encargadas de pedir las calificaiones para que ahora se pueda poner tres por materia, y asi calcular el promedio de cada una, y posteriormente el general. Esto ayuda para tener información más detallada de las calificaciones]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[[CAMBIA] Pedir las tres calificaciones del primer parcial de Matemáticas y guardarlas
[NUEVO] Pedir las tres calificaciones del segundo parcial de Matemáticas y guardarlas
[NUEVO] Pedir las tres calificaciones del tercer parcial de Matemáticas y guardarlas

[CAMBIA] Pedir las tres calificaciones del primer parcial de Español y guardarlas
[NUEVO] Pedir las tres calificaciones del segundo parcial de Español y guardarlas
[NUEVO] Pedir las tres calificaciones del tercer parcial de Español y guardarlas

[CAMBIA] Pedir las tres calificaciones del primer parcial de Diseño de programas y guardarlas
[NUEVO] Pedir las tres calificaciones del segundo parcial de Diseño de programas y guardarlas
[NUEVO] Pedir las tres calificaciones del tercer parcial de Diseño de programas y guardarlas

[NUEVO] Calcular el promedio de los tres parciales de Matemáticas
[NUEVO] Calcular el promedio de los tres parciales de Español
[NUEVO] Calcular el promedio de los tres parciales de Diseño de programas

[NUEVO] Calcular el promedio general del estudiante usando los promedios de las tres materias
[NUEVO] Mostrar el promedio final de cada materia
[NUEVO] Mostrar el promedio general del estudiante]
```
