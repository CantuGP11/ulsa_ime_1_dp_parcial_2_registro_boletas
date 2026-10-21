## 1. Autor

**Nombre:** [Luis Cortés Gallegos]
**Matrícula:** [26160]
**Bloque y opción elegida:** [Capturar alumnos]
**Archivo de código:** [main.cpp]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque es el que pide el nombre de los seis alumnos y los guarda, para depués utilizarlos en el registro de califficaiones]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Entradas
   Los nombres de los seis estudiantes, ingresados por el usuario
 Salidas
 Solicita el nombre de cada estudiante y guarda los nombres en el arreglo alumnos]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[Captura los alumnos, solicita el nombre de cada estudiante y se guarda en la posicion que le toca de los arreglos]

**¿Qué ciclo usaste y por qué ese?**

[Usé for para solicitar el nombre de seis estudiantes diferentes. Elegí for porque permite usar las mismas instrucciones varias veces]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[La variable i como contador para el for e inicia en 0]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Solo necesité solicitar el nombre de seis estudiantes y guardarlo]

**¿Qué constantes definiste y por qué son constantes?**

[La de MAX alumnos con el valor de 6, y es constante porque no cambia ese "limite", osea siempre es seis]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[No tiene porque solo solicita nombres y los guarda]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
[1. Definir la constante MAX_ALUMNOS con el valor 6.
2. Crear un arreglo llamado alumnos con espacio para seis nombres.
3. Iniciar un contador i en 0.
4. Mientras i <  MAX_ALUMNOS:
    Mostrar el número del estudiante que se va a registrar.
    Solicitar el nombre del estudiante.
    Guardar el nombre en la posición i del arreglo alumnos.
    Aumentar i en uno.
5. Terminar el ciclo cuando se hayan registrado los seis nombres.
FIN]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[Sí, revise que pida los seis nombres y que los guarde en las variables]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [cómo guardar varios nombres sin crear una variable diferente] | [Con el arreglo alumnos]
| 2 | [No sabía porqué el contador iniciaba en 0] | [ se que es porque van de 0 al 5]
| 3 | [como repetir la solicitud del nombre] | [con el ciclo for]
