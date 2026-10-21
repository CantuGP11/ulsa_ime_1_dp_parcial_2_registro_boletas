# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: [Mi propuesta es un sistema de niveles y recompensas 
en el cual da la calificacion al estilo de un videojuego mediante rangos, puntos de experiencia (XP) y el estado de desbloqueo del siguiente modulo. Con el objetivo de que los alumnos no vean la reprobacion como un fracaso definitivo]

**Matrícula:** 26082
**Título de la propuesta:** Motivación

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

Una mejora que ayuda a los alumnos a no desmotivarse

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

Se cambia la función de evaluación, en lugar de solo imprimir "aprobado" o "reprobado" ahora se evalúa la nota para determinar el rango asignado y calcula cuantos XP faltan para la meta

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[SIN CAMBIO] 1. Recibir o leer la calificación/puntos del alumno y la nota mínima requerida.
[CAMBIO]    2. Evaluar la calificación comparándola con la meta de XP:
               - Si Calificación >= Nota Mínima:
                   - Marcar Estado como "DESBLOQUEADO"
                   - Si Calificación >= 90: Asignar Rango = "MAESTRO"
                   - Sino: Asignar Rango = "EXPLORADOR"
               - Sino (Calificación < Nota Mínima):
                   - Marcar Estado como "BLOQUEADO"
                   - Asignar Rango = "EN ENTRENAMIENTO"
[NUEVO]     3. Calcular la diferencia de puntos XP:
               - Si reprobó, calcular: Puntos Faltantes = Nota Mínima - Calificación.
[NUEVO]     4. Generar el mensaje motivacional de acción:
               - Si aprobó: "¡Felicidades! Has abierto el acceso a la siguiente unidad."
               - Si reprobó: "Te faltan [Puntos Faltantes] XP para desbloquear el siguiente nivel."
[CAMBIO]    5. Mostrar en pantalla la tarjeta gamificada (Rango, Puntos XP, Estado de Desbloqueo y Mensaje).
```
