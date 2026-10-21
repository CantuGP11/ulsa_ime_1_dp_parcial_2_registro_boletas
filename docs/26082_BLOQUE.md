# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** Marian Reynoso Romo 
**Matrícula:** 26082
**Bloque y opción elegida:** Bloque 1 Aprobado y Reprobado
**Archivo de código:** include\AprobadoGeneral.h
## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?
Mi bloque le dice al usuario si aprobo el curso general de las 3 materias o lo reprobó, y le sirve 

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

Mi bloque reecibe la calificacion de Matemáticas, Español y Diseño de programas e imprime "Aprobado general" o si alguna es menor a 7 imprime "Reprobado General"

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**
AprobadoGeneral y recibe las calificaciones de las 3 materias, si las 3  son 70 o más muestra "APROBADO GENERAL" sino muestra "REPROBADO GENERAL"

**¿Qué ciclo usaste y por qué ese?**

No usa ciclo

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

Mi función no usa contadores ya que no necesita sumar ni contar datos

**¿Dónde está tu decisión múltiple y qué casos cubre?**

En el if y else. If muestra aprobado general si las 3 calif. son de 70 o más y el else muestra reprobado general si alguna es menor

**¿Qué constantes definiste y por qué son constantes?**

En mi función no definí constantes. El valor 70 está escrito directamente en la condición y representa la calificación mínima para aprobar.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

Si el alumno tiene menos de 70 en al menos una materia, el bloque lo considera reprobado y muestra “REPROBADO GENERAL”
## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

3.APROBADO
IF Matematicas >=7.0 y Espanol >=7.0 y DiseniodeProgramas >=7.0 
ENTONCES Mostrar "APROBADO GENERAL"
ELSE Mostrar "REPROBADO GENERAL"

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Si, no corregí nada

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
