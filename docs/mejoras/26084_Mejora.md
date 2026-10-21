# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: Propuesta de mejora de Enrique Talamás: Que pida matriculas para que sea mas específico y sea más fácil identificar al sujeto sin  confusiones o similitudes por los nombres.

**Matrícula:** 26084
**Título de la propuesta:** Uso de la matricula

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

Mejora y facilita principalmente a las escuelas, las cuales pueden mejorarce ampliando el maximo de alumnos para poder automatizar de manera mas facil la boleta de estudiantes.

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

En esta solución se agregaron cinco arreglos: Matematicas[], Espanol[], DiseniodeProgramas[], alumnos[] y matriculas[] para almacenar las calificaciones de cada materia para los 6 alumnos. También se utiliza la constante MAX_ALUMNOS para definir el tamaño de todos los arreglos y facilitar los recorridos con ciclos. Las funciones cambiaron porque Calificaciones() ahora recibe referencias a las tres materias para capturar las notas de cada estudiante, y eligeOpcion() recibe los arreglos de alumnos y calificaciones para generar reportes y consultas. El menú trabajar con la información almacenada en los arreglos.

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
1. Iniciar el programa.
2. Mostrar mensaje de bienvenida.
3. Declarar el arreglo de nombres de alumnos.
4. [NUEVO] Declarar un arreglo para las matrículas de los alumnos.
5. Declarar los arreglos de calificaciones de Matemáticas, Español y Diseño de Programas.
6. [CAMBIA] Capturar el nombre y la matrícula de cada alumno y guardarlos en sus arreglos correspondientes.
7. Capturar las calificaciones de cada materia para cada alumno.
8. Guardar las calificaciones en los arreglos correspondientes.
9. [CAMBIA] Enviar al menú los arreglos de nombres, matrículas y calificaciones.
10. Mostrar las opciones del menú.
11. Leer la opción seleccionada.
12. [CAMBIA] Mostrar reportes utilizando el nombre y la matrícula de cada alumno.
13. Repetir el menú hasta que el usuario seleccione salir.
14. Finalizar el programa.
```
