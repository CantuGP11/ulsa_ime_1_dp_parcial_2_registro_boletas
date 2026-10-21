# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** Enrique Talamas Ortiz
**Matrícula:** 26084
**Bloque y opción elegida:** Boleta individual
**Archivo de código:** main.cpp

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

Mi bloque lo que hace es que pide y guarda la calificacion y a los que lo usas les ayuda para poder mantener un oreden y automatizar de manera mas facil.

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

Recibe las 3 calificaciones, de las 3 materias, de los 6 estudiantes y lo que produce es imprimir de forma mas ordenada las calificaciones de los 6 estudiantes.

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

La funcion que tiene mi bloque es organizar la informacion para que luego se pueda utilizar en otras partes de manera mas organizadas.

**¿Qué ciclo usaste y por qué ese?**

For lo use para que se hiciera el ciclo de los estudiantes, para hacer el codigo mas corto y de manera mas ordenada.

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

Alumnos y inician con el valor 0

**¿Dónde está tu decisión múltiple y qué casos cubre?**

En el Menu en la parte que realizamos los casos del switch.

**¿Qué constantes definiste y por qué son constantes?**

Los 6 alumnos y es constante por que no puede cambiar su valor.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

Cuando pide una calificacion rechaza cualquier tipo de letra.

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
 Receta de las calificaciones 

       1. Se toma el nombre del primer estudiante.
        2. Se le pregunta su calificación de Matemáticas.
       3. La calificación se guarda en la primera posición del arreglo de Matemáticas.
       4. Se le pregunta su calificación de Español.
       5. La calificación se guarda en la primera posición del arreglo de Español.
       6. Se le pregunta su calificación de Diseño de Programas.
       7. La calificación se guarda en la primera posición del arreglo de Diseño de Programas.                       
       8. Se repite este proceso hasta llegar al máximo de estudiantes que es 6 y llenando los arreglos correspondientes.
       9. Cuando todas las calificaciones están guardadas, el usuario selecciona la opción 4 en el menú.
      10.Muestra su nombre.
      13.Muestra su calificación de Matemáticas.
       14.Muestra su calificación de Español.
       15.Muestra su calificación de Diseño de Programas.
       16. Repite el paso con todos los alumnos registrados, imprimiendo sus 3 calificaciones.
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Si

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | Error en #include | Corregí la ruta o el nombre del archivo con comillas. |
| 2 | Se repetían las calificaciones. | Quitar un for del void de las calificaciones |
| 3 | El menú no aceptaba opciones. | Revise si le faltaban corchetes|
