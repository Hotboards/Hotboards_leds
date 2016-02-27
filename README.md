Hotboards_leds
===============

Genial libreria de proposito general para controlar leds, puedes encender, apagar y togglear, un led a la vez y/o varios a la vez. Descarga la libreria en formato [**zip**](https://github.com/Hotboards/Hotboards_leds/archive/master.zip), renombre el archivo ( _solo quita el **-master**_ ) e importala a tu Arduino IDE com dice [aqui](http://developer.mbed.org/cookbook/Working-with-Libraries).

API
---

**Hotboards_leds( int led7, int led6, int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH )**

Constructor para incializar leds. Puedes crear de 1 solo led hasta 8 leds, e indicar si estos encienden con un nivel alto o en bajo.

``` cpp
/* creamos led en el pin 5 */
Hotboards_leds led( 5 );
/* creamos un bus de leds en los pines 5, 6, 7 y 8.
   En el pin 5 esta el led0, y en el pin 8 esta el led3 */
Hotboards_leds leds( 8, 7, 6, 5 );
/* creamos led en el pin 9 que enciende en nivel bajo */
Hotboards_leds led( 9, LOW );
```

**void turnOn( uint8_t led=0 )**

Enciende el led. Cuando se crea un bus de leds se puede indicar a cual se desea encender. No es necesario indicarlo cuando se crea un solo led.

``` cpp
/* creamos un led en pin 5 y lo encendemos */
Hotboards_leds led( 5 );
led.turnOn( );

/* creamos un bus de leds */
Hotboards_leds leds( 8, 7, 6, 5 );
/* encedemos el led 2 que esta en el pin 7 */
leds.turnOn( 2 );
/* encedemos el led 0 que esta en el pin 5 */
leds.turnOn( 0 );
```

**void turnOff( uint8_t led=0 )**

Apaga el led. Cuando se crea un bus de leds se puede indicar a cual se desea apagar. No es necesario indicarlo cuando se crea un solo led.

``` cpp
/* creamos un led en pin 5 y lo encendemos */
Hotboards_leds led( 5 );
led.turnOff( );

/* creamos un bus de leds */
Hotboards_leds leds( 8, 7, 6, 5 );
/* encedemos el led 3 que esta en el pin 8 */
leds.turnOff( 3 );
/* encedemos el led 0 que esta en el pin 5 */
leds.turnOff( 0 );
```

**void toggle( uint8_t led=0 )**

Invierte el estado del led. Cuando se crea un bus de leds se puede indicar a cual se desea invertir. No es necesario indicarlo cuando se crea un solo led.

``` cpp
/* creamos un led en pin 7 invertimos su estado */
Hotboards_leds led( 7 );
led.toggle( );

/* creamos un bus de leds */
Hotboards_leds leds( 2, 3, 4 );
/* invertimos el led 2 que esta en el pin 2 */
leds.toggle( 2 );
/* invertimos el led 1 que esta en el pin 3 */
leds.toggle( 1 );
```

**void write( uint8_t val )**

Escribimos un valor en nuestro led o nuestro bus de leds. El maximo valor que aceptara esta funcion dependera del numero de leds que tenga el bus.

``` cpp
/* creamos un led en pin 7 y escibimos un 1 (aceptara valores de 0 a 1) */
Hotboards_leds led( 7 );
led.write( 1 );

/* creamos un bus de 4 leds (pin2->led3 ..... pin5->led0)*/
Hotboards_leds leds( 2, 3, 4, 5 );
/* escribios el valor de 10  (aceptara valores de 0 a 15) */
leds.write( 10 );

/* creamos un bus de 8 leds (pin4->led7 ..... pin3->led0)*/
Hotboards_leds leds( 4, 3, 2, 6, 5, 7, 8, 9 );
/* escribios el valor de 134  (aceptara valores de 0 a 255) */
leds.write( 134 );
```

**uint8_t read( uint8_t led=0xff )**

Lee el estado de los leds en el bus creado. Puede ser el valor de un solo leds o hasta ocho, siendo un valor de uno un led encendido.

``` cpp
/* creamos un led en pin 7 y leemos su valor (sera 0 o 1) */
Hotboards_leds led( 7 );
uint8_t var = led.read( );

/* creamos un bus de 8 leds (pin9->led7 ..... pin2->led0)*/
Hotboards_leds leds( 9, 8, 7, 6, 5, 4, 3, 2 );
/* leemos el valor del bus (valores de 0 a 255) */
uint8_t var = leds.read( );

/* creamos el estado del bus de 4 leds (pin2->led3 ..... pin5->led0)*/
Hotboards_leds leds( 2, 3, 4, 5 );
/* leemos el estado del led 1 (pin 4) */
uint8_t val1 = leds.write( 1 );
/* leemos el estado del led 1 (pin 5) */
uint8_t val2 = leds.write( 0 );
```
