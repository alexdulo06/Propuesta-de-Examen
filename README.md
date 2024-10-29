# Propuesta-de-Examen
https://github.com/alexdulo06/Propuesta-de-Examen.git

En este ejercicio de programación, se te pide que escribas un programa en C que identifique triples pitagóricos. Un triple pitagórico es un conjunto de tres números enteros positivos a, b y c, tal que a^2 + b^2 = c^2. Por simplicidad, nos centraremos en encontrar triples pitagóricos que representen los lados de un triángulo rectángulo.

Tu programa debe ser capaz de encontrar e imprimir los siguientes triples pitagóricos:
- 3 - 4 - 5
- 6 - 8 - 10
- 5 - 12 - 13
- 8 - 15 - 17

Estructura sugerida para tu programa:

1. Utiliza un bucle para iterar a través de valores potenciales para el primer lado del triángulo (a).
2. Dentro de este bucle, utiliza un segundo bucle para iterar a través de valores potenciales para el segundo lado del triángulo (b).
3. Dentro del segundo bucle, calcula el tercer lado del triángulo (c) usando la fórmula c = sqrt(a^2 + b^2).
4. Verifica si los tres lados forman un triple pitagórico y si cumplen las condiciones de un triángulo (la suma de cualquier par de lados es mayor que el tercer lado).
5. Si se cumple, imprime el triple pitagórico.

Rúbrica para el ejercicio:

- Comprensión y ejecución (40 puntos):
 - Se han seguido las instrucciones y el programa identifica correctamente los triples pitagóricos especificados (20 puntos).
 - El programa está bien estructurado y utiliza bucles de manera efectiva para iterar a través de los valores potenciales de los lados del triángulo (20 puntos).

- Exactitud y eficiencia (30 puntos):
 - El programa calcula correctamente el tercer lado y verifica las condiciones de un triángulo (15 puntos).
 - El programa limita el rango de valores a chequear para evitar cálculos innecesarios, mejorando la eficiencia (15 puntos).

- Legibilidad y estilo del código (30 puntos):
 - El código está bien comentado, incluyendo descripciones de la función y comentarios en bloques lógicos de código (10 puntos).
 - El código está bien organizado, con una estructura clara y nombres de variables descriptivos (10 puntos).
 - El código sigue un estilo de codificación consistente y no contiene errores de sintaxis ni advertencias (10 puntos).
