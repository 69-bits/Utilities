# Retos de Programación - Implementación de Clases Matemáticas

Este repositorio contiene la implementación de varios retos de programación enfocados en la creación y manipulación de clases matemáticas en C++. Estos retos están diseñados para practicar la manipulación de vectores y cuaterniones, así como para entender la sobrecarga de operadores y realizar operaciones comunes en el espacio 2D, 3D y 4D.

## Clases Implementadas

### 1. Clase `Vector2`
   - **Descripción**: Representa un vector en 2D, con las coordenadas `x` y `y`.
   - **Características**:
     - Constructor por defecto y parametrizado.
     - Sobrecarga de operadores para suma, resta y multiplicación por escalar.
     - Métodos para calcular la magnitud, normalización y obtener los datos como un puntero.
   - **Propósito**: Practicar operaciones comunes de vectores en 2D y entender la sobrecarga de operadores en C++.

### 2. Clase `Vector3`
   - **Descripción**: Representa un vector en 3D, con las coordenadas `x`, `y` y `z`.
   - **Características**:
     - Constructor por defecto y parametrizado.
     - Sobrecarga de operadores para suma, resta y multiplicación por escalar.
     - Métodos para calcular la magnitud, normalización y obtener los datos como un puntero.
   - **Propósito**: Entender las operaciones vectoriales comunes en el espacio 3D y el uso de operadores sobrecargados.

### 3. Clase `Vector4`
   - **Descripción**: Representa un vector en 4D, con las coordenadas `x`, `y`, `z` y `w`.
   - **Características**:
     - Constructor por defecto y parametrizado.
     - Sobrecarga de operadores para suma, resta y multiplicación por escalar.
     - Métodos para calcular la magnitud, normalización y obtener los datos como un puntero.
   - **Propósito**: Practicar el manejo de vectores en el espacio 4D, útil para gráficos computacionales y transformaciones 3D.

### 4. Clase `Quaternion`
   - **Descripción**: Representa un cuaternión, con los componentes `w`, `x`, `y` y `z`.
   - **Características**:
     - Constructores para inicialización por defecto, parametrizada, y mediante un ángulo y un eje de rotación.
     - Sobrecarga de operadores para suma, multiplicación por escalar y multiplicación de cuaterniones.
     - Métodos para calcular la magnitud, normalización, conjugado, inverso, y rotación de un vector.
   - **Propósito**: Facilitar la representación y manipulación de rotaciones en 3D, evitando problemas como el "gimbal lock".

## Reglas Generales
- Cada clase debe compilarse y ejecutarse sin errores en C++.
- Las clases deben seguir las especificaciones de nombres y comportamientos de métodos y operadores indicados en los retos.
- Todas las implementaciones deben cumplir con las reglas de encapsulamiento y uso adecuado de constructores y métodos.
