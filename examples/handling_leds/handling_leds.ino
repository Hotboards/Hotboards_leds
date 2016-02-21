/* handling leds.ino
 * Author Diego Perez (http://hotboards.org)
 * On this example we show how to manipulate your leds
 * in a diffrent ways, the first 4 are grouped into a bus
 * the following thirt ones also are grouped in a bus, but manipulated
 * individualy and finally led 8 is manipulated individualy
 * conections:
 * 13 --- led0 -\
 * 12 --- led1  |  leds
 * 11 --- led2  |
 * 10 --- led3 -/
 * 9 ---- led4 -\
 * 8 ---- led5  |  leds765
 * 7 ---- led6 -/
 * 6 ---- led7 ->  led8
 */

#include <Arduino.h>
#include <Hotboards_leds.h>

// create a bus with only four leds
Hotboards_leds leds( 10, 11, 12, 13 );
// create a bus with 3 leds that we will manipulate individualy
Hotboards_leds leds765( 7, 8, 9 );
// create a single led on pin 6
Hotboards_leds led8( 6 );

uint8_t counter;

void setup( void )
{
    counter = 0;
}

void loop( void )
{
    // turn on leds 5, 6 and 7 one by one
    leds765.turnOn( 0 ); // led5
    leds765.turnOn( 1 ); // led6
    leds765.turnOn( 2 ); // led7
    delay( 200 );
    // turn off leds 5, 6 and 7 one by one
    leds765.turnOff( 0 ); // led5
    leds765.turnOff( 1 ); // led6
    leds765.turnOff( 2 ); // led7
    delay( 200 );
    // toggle led number 8
    led8.toggle( );
    // write the fouth lsb of variable counter on leds 1,2,3 and 4
    leds.write( counter );
    counter++;
}
