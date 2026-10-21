Propuesta de mejora elaborada por: [Gilberto Cantu]

**Matrícula:** [26078]
**Título de la propuesta:** [Materias Reprobdas]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Es una mejora, porque permite identificar las materias que ha reprobado cada alumno. Beneficia a los estudiantes y maestros, ya que facilita conocer qué materias necesitan mejorar.]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Se utilizan los arreglos de alumnos y calificaciones de Matematicas, Espanol y Disenio de Programas. Se utiliza la funcion Aprobo_Reprobo() para revisar las calificaciones de cada alumno. No es necesario modificar las constantes ni crear nuevos arreglos, pero se necesita tener la opcion correspondiente en el menu para acceder al reporte.]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[PARA cada alumno HACER
        MOSTRAR nombre del alumno
        REVISAR sus calificaciones
        MOSTRAR sus materias reprobadas
    FIN PARA

FIN]
```