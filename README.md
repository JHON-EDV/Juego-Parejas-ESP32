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



Resumen—Esta practica consiste en disenar e implementar ̃
con el ESP32 un juego de memoria que se basa en encontrar
parejas antes de que termine el tiempo o se acaben los intentos,
se cuenta con dos tamanos de tablero (4x4 o 6x6) y tres niveles ̃
distintos (facil, medio y dif ́ ́ıcil) que pueden ser elegidos por el
jugador. Para esto se hace uso de un teclado matricial 4x4 y
una LCD TFT ILI9163 (o similar) controlada por SPI.

```
Palabras clave ESP32, GPIO, Interrupciones
```
### I. INTRODUCCION ́

El ESP32 es un dispositivo de bajo costo y bajo consumo de
energía.
Esta dise ̃nado para dispositivos moviles, dispositivos electrónicós portátiles y aplicaciones IoT.
La integracion de Bluetooth, Bluetooth LE y Wi-Fi permite 
una amplia gama de aplicaciones, el uso de Wi-Fi permite
una comunicacion de mediano alcance y conectarse a una red 
LAN y a través de un Router conexion a Internet, mientras 
que el Bluetooth nos permite conectarse directamente a otro
dispositivo como un celular [1].
Para el desarrollo de una aplicacion y la implementación en
este microcontrolador se puede utilizar el IDE de arduino.

```
II. FORMULACION DEL PROBLEMA ́
```
Disenar e implementar con el ESP32 un juego de encontrar 
parejas usando un teclado matricial 4x4 y una LCD TFT
ILI9163 controlada por SPI.

El juego contara con las siguientes funcionalidades:
El jugador podrá seleccionar dos tamanos de tablero al 
inicio del juego, de 16 o de 36 casillas.
Se incluye de forma aleatoria 8 o 18 parejas (dependien-
do el tamano del tablero) personalizadas ubicadas en las 
casillas.
Por medio del teclado se selecciona cada una de las
casillas (al oprimir la tecla de la casilla correspondiente
se vera el símbolo personalizado ubicado en esa casilla).
Si se encuentra una pareja de símbolos estos perma-
necer ́an visibles hasta finalizar el juego y la pareja de
teclas quedara inhabilitada. Ademas se incrementara el 
contador de puntaje.
En caso de no acertar a la pareja, se volveran a ocultar 
los s ́ımbolos.
El juego cuenta con un temporizador que se decrementara
al iniciar el juego, en caso de que llegue a cero y no se
hayan encontrado todas las parejas, el juego finalizara.

```
Si se encuentran todas las parejas antes del tiempo y en
los intentos estipulados, se podrá continuar con un nuevo
tablero.
```
```
III. DISENO Y MODELOS DE SOLUCI ̃ ON ́
Se coloca la imagen de la Figura 1 para que el jugador pueda
elegir por medio del teclado, el tamaño del tablero con el que
desea jugar.
```
```
Figura 1: Elección tamano del tablero 
```
```
Luego se genera la imagen de la Figura 2 para que el jugador
elija, igual con el teclado, el nivel de dificultad con el que
desea jugar.
```
```
Figura 2: Eleccion nivel de dificultad 
```

Para crear las parejas en los tableros y asegurarse de que estas
no se repitan, es decir que solo se genere una pareja de la
misma imagen/color, se selecciona de un array numeros del 0
al 8 o del 0 al 16 dependiendo del tamano del tablero.
A continuación se crea un segundo array, al que se carga el
arreglo anterior ordenado de forma aleatoria, para anular las
probabilidades de que se genere el mismo tablero dos veces.
En la Figura 3 se muestra como se ejecutaron los arreglos para
el tablero 4x4.

```
Figura 3: Declaracion de arreglos
```
Se genera una matriz de parejas de forma aleatoria. Es decir,
se colocan en la matriz dos ubicaciones con el mismo valor,
con los numeros adquiridos en el array (ver Figura 12).

```
Figura 4: Creacion de matriz de parejas 
Se obtienen entonces los siguientes arreglos y la matriz de
parejas:

```
Figura 5: Resultados obtenidos
```
```
Cada numero indica un color/imagen, lo que permite mostrar
los símbolos en el tablero. Para seleccionarlos se hace uso de
la lectura del teclado mediante interrupciones, en donde la
tecla oprimida es convertida en posicionesx, yde la matriz
de juego.
```
```
Figura 6: Llenado de la matriz con los símbolos personalizados
```
```
Una vez oprimidas las dos posiciones, se procede a realizar
las comparaciones para verificar si se encontro o no una pareja. 
```
La misma logica se repite para todos los niveles del juego y 
los dos tamanos del tablero. 
```
```
Para ganar, se necesita encontrar todas las parejas en el
tablero antes de que finalice el tiempo o se terminen los
intentos.
Para el nivel fácil se programo un tiempo de 120 segundos,
para el nivel medio 100 segundos y para el nivel difícil 80
segundos.
```
```
En cuanto a los intentos, depende del tamano del tablero.
Para el tablero 4x4 en el nivel facil se tienen 16 intentos, en
el nivel medio 12 intentos y para el nivel difícil 8 intentos.
Para el tablero 6x6, en el nivel f ́acil se tienen 34 intentos,
para el nivel medio 26 intentos y para el nivel dif ́ıcil 18
```

intentos.

Una vez completado un tablero se pasa al siguiente nivel, el
decir, si se elige un tablero 4x4 nivel facil, pasara a un tablero 
4x4 nivel medio. Una vez jugados y ganados los tres niveles
se saltara a un tablero 6x6 en el nivel facil. 

### IV. RESULTADOS

A continuacion se muestran algunas im ́ agenes del funciónamiento del juego en los diferentes niveles y tamanos del
tablero.

```
Figura 7: Tablero 4x4 Nivel Facil 
```
```
Figura 8: Tablero 4x4 Nivel Facil con un acierto
```
```
Figura 9: Tablero 4x4 Nivel Medio
```
```
Figura 10: Tablero 4x4 Nivel Medio con un acierto
```

```
Figura 11: Tablero 6x6 Nivel Difícil
```
```
Figura 12: Pantalla puntaje obtenido y tiempo
```
### V. CONCLUSIONES

Es notorio que una programacion recursiva que utilice ́
multiples veces las mismas lineas de código ayuda a uná
buena ejecución.
Es mejor no generar una mayor carga en la RAM que la
necesaria, esto se puede ver al crear multiples timmers 
contando hasta un millon con un prescaler de 80, se 
obtuvieron mejores resultados en tiempo de respuesta al
utilizar un prescaler de 8.000 y contar hasta 1.
Al utilizar imagenes de 22x22 píxeles para el caso del
tablero 6x6 notamos que la pantalla cuenta con una reso-
lucion suficiente, pero es necesario generar un contraste 
entre cada imagen, de esta manera poder diferenciar

```
mejor el detalle. Sin embargo, es importante tener en
cuenta que las im ́agenes no pueden tener mucho detalle
debido al tamano de cada una. 
El uso de perifericos aunque es posible utilizarlos con
un antirebote por software, notamos que era necesario
en todos los casos tener una resistencia pull-up que no
permita falsas medidas.
```
### REFERENCIAS

```
[1] Espressif.com. n.d. ESP32 Wi-Fi Bluetooth
MCU I Espressif Systems. [online] Available at:
<https://www.espressif.com/en/products/socs/esp32> [Accessed 17
August 2021].
```