# **Juego-Parejas-ESP32**
# *Jhon Edison Vargas Vargas, Juanita Acero Cuellar*

## Manejo de Entradas/Salidas (GPIO), Interrupciones y la LCD TFT con el ESP32

> Diseñar e implementar con el ESP32 un juego de encontrar las parejas, para esto se hará uso de un teclado matricial de 4x4 teclas y una LCD TFT ILI9163 (o similar) controlada por SPI. 

>>  El juego diseñado tendrá las siguientes funcionalidades:
- Se tendrá una pantalla de inicio (con imágenes).
- Se podrán generar dos tamaños de tablero: de 16 o de 36 casillas esta opción se podrá seleccionar al inicio del juego.
- Se incluirá de forma aleatoria 8 (o 18) parejas de imágenes personalizadas (el tipo de imagen dará también el nivel de dificultad entre tres posibles) ubicadas en las casillas (al iniciar el juego sobre cada casilla se verán siempre de manera organizada los números que se seleccionarán con el teclado).
- Por medio de un teclado matricial de 4x4 teclas se podrán seleccionar cada una de las casillas (al oprimir la tecla de la casilla correspondiente se verá el símbolo personalizado ubicado en esa casilla), si se encuentra una pareja los símbolos personalizados permanecerán visibles hasta finalizar el juego (y la pareja de teclas quedará inhabilitada) y se incrementará un contador de puntaje, si no, se volverán a ocular los símbolos.
- El juego tendrá un temporizador (mm:ss) que se decrementará al iniciar el juego, si el temporizador llega a cero y no se han encontrado todas las parejas el juego finalizará, si se encuentran todas las parejas antes del tiempo estipulado, se podrá continuar con un nuevo tablero (debe existir algún mensaje que indique el fin del tablero y el inicio del siguiente) y se acumulará la nueva puntuación sobre el puntaje anterior obtenido.

|Tamaño  |  Dificultad | Color o imagen | Tiempo en Minutos |
|:---:|:---:|:---:|:---:|  
|4*4|Facil |Color | 3  
|4*4 |Medio |Imagenes  | 2  
|4*4 |Dificil|Imagenes | 1.5 
|6*6 |Facil |Color  |  4
|6*6 |Medio |Imagenes  |3  
|6*6 |Dificil |Imagenes| 2 