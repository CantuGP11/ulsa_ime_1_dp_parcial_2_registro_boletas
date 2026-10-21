
## 1. Autor

**Nombre:** [Gilberto Cantu]
**Matrícula:** [26078]
**Bloque y opción elegida:** [5, Materia Reprobada]
**Archivo de código:** [ReporteAprobados.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Mi bloque sirve para revisar las calificaciones de cada alumno y mostrar las materias que reprobó. Esto ayuda a los estudiantes y maestros a identificar en qué materias necesitan mejorar.]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Entradas: recibe los arreglos con los nombres de los alumnos y sus calificaciones de Matemáticas, Español y Diseño de Programas.
Salidas: muestra el nombre de cada alumno y los resultados de la función Aprobo_Reprobo(), que revisa sus calificaciones y permite identificar las materias reprobadas. No recibe datos del teclado directamente.]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[Aprobo_Reprobo(): revisa las calificaciones de las tres materias.
std::cout: muestra el nombre del alumno y los resultados en pantalla.]

**¿Qué ciclo usaste y por qué ese?**

[for, lo use para que se hiciera el ciclo de los estudiantes, para hacer el codigo mas corto y organizado]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[usamos elacumulador alumnos e inicia con el valor 0]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[En el menu, en la parte que realizamos los casos del switch]

**¿Qué constantes definiste y por qué son constantes?**

[los 6 alumnos, porque no puede cambiar su valor.]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Cuando pide una calificacion rechaza cualquier tipo de letra]

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
[PARA cada alumno HACER
        MOSTRAR nombre del alumno
        REVISAR sus calificaciones
        MOSTRAR sus materias reprobadas
    FIN PARA

FIN]
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

[no corregi nada]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [No sabía cómo recorrer a todos los alumnos.] | [Utilicé un ciclo for para recorrer el arreglo desde la posición 0.] |
| 2 | [No sabía cómo revisar las tres materias de cada alumno.] | [Llamé a la función Aprobo_Reprobo() y le pasé las tres calificaciones.] |
| 3 | [No sabía cómo separar los reportes para que fueran más claros.] | [Agregué std::cout << std::endl; para dejar un espacio entre cada alumno.] |