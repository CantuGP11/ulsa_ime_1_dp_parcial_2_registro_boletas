# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** [Luis Enrique Ruvalcaba Alvarez]
**Matrícula:** [26083]
**Bloque y opción elegida:** [promedios.h]
**Archivo de código:** [promedios.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa? sirve para dar promedios generales


## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[alumnos[]: nombres de los alumnos (std::string).
Matematicas[], Espanol[], DiseniodeProgramas[]: calificaciones de cada alumno (double), ya capturadas del teclado en otra parte del programa.
MAX_ALUMNOS: cantidad de alumnos a procesar.]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[Una sola función, imprimirPromedio. Valida los datos, calcula el promedio de cada alumno, decide si merece reconocimiento (promedio de 10), lo imprime y al final muestra cuántos alumnos fueron reconocidos. Es una sola función porque todo gira alrededor de un único propósito: mostrar promedios y reconocer a los de 10.]

**¿Qué ciclo usaste y por qué ese?**

[Un for (for (int i = 0; i < MAX_ALUMNOS; i++)), porque se sabe de antemano cuántas veces repetir (una por alumno) y i sirve como índice para leer la misma posición en los cuatro arreglos.]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[i: contador del ciclo, inicia en 0.
totalReconocidos: contador de alumnos con promedio de 10, inicia en 0 y aumenta en 1 cada vez que un alumno cumple la condición. Debe iniciar en 0 porque, antes de revisar a nadie, todavía no hay reconocidos.
promedio: variable local que se recalcula en cada vuelta (no acumula).]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Dentro del ciclo, en la estructura if / else if / else, que cubre tres casos:

Calificación inválida (menor a 0 o mayor a 10): muestra mensaje de error.
Promedio de 10 cerrado: imprime el promedio con el reconocimiento y suma 1 a totalReconocidos.
Cualquier otro caso válido: imprime solo el promedio.]

**¿Qué constantes definiste y por qué son constantes?**

[CALIFICACION_MAXIMA = 10.0: es la calificación que da el reconocimiento y el tope válido. Es constante porque la escala no cambia durante el programa.
CALIFICACION_MINIMA = 0.0: límite inferior válido de la escala.
NUM_MATERIAS = 3: divisor del promedio; evita el “número mágico” 3.
TOLERANCIA = 0.0001: margen para comparar decimales de forma segura.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[MAX_ALUMNOS es 0 o negativo	“No hay alumnos registrados.”]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
[2.Promedios
 INICIAR la función y recibir los nombres y las calificaciones de los alumnos.
 INICIALIZAR el contador i en 0.
 VERIFICAR que i sea menor que MAX_ALUMNOS.
 SUMAR las tres calificaciones y DIVIDIR entre 3 para obtener el promedio.
 IMPRIMIR el nombre del alumno y su promedio.
 INCREMENTAR el contador y REPETIR hasta terminar con todos los alumnos.
 FINALIZAR la función.
]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Alumno	Mate Español	Diseño      	Resultado esperado
Ana	    10	 10	         10	             Promedio 10 + RECONOCIMIENTO
Luis	10	 9	         10	             Promedio 9.66667, sin reconocimiento
Marta	11	 10	         10	             Calificación inválida]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
