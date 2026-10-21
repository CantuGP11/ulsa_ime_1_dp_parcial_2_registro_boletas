# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: [Luis Enrique Ruvalcaba Alvarez]

**Matrícula:** [26083]
**Título de la propuesta:** [Inserta aquí tu respuesta]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Es una mejora, no una corrección: el código original ya imprimía bien los promedios. Lo que agrega es un reconocimiento automático para los alumnos con promedio de 10 cerrado y un contador de cuántos fueron reconocidos. Resuelve que antes había que buscar a simple vista quién tenía 10. Beneficia a los alumnos (su esfuerzo se reconoce), a los docentes (ahorran tiempo y evitan errores) y a quien administra el sistema (obtiene el total al instante).]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[Arreglos: no cambian; las calificaciones ya están en ellos.
Constantes: se agregan CALIFICACION_MAXIMA (10), CALIFICACION_MINIMA (0), NUM_MATERIAS (3) y TOLERANCIA, para definir qué es un 10, validar el rango y comparar double sin errores.
Funciones: no hay función nueva; se modifica imprimirPromedio con un if/else para detectar el 10 y un contador totalReconocidos que inicia en 0.
Validación: se rechazan calificaciones fuera de 0 a 10 para no dar reconocimientos falsos.
Menú: no cambia; el reconocimiento aparece solo al imprimir los promedios.]

## 3. Receta
2.Promedios
 INICIAR la función y recibir los nombres y las calificaciones de los alumnos.
 INICIALIZAR el contador i en 0.
 VERIFICAR que i sea menor que MAX_ALUMNOS.
 SUMAR las tres calificaciones y DIVIDIR entre 3 para obtener el promedio.
 IMPRIMIR el nombre del alumno y su promedio.
 INCREMENTAR el contador y REPETIR hasta terminar con todos los alumnos.
 FINALIZAR la función.


Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[Inserta aquí tu respuesta]
```
