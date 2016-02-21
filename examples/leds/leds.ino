/* leds.ino
 * Author Diego Perez (http://hotboards.org)
 * Write a variable into a bus led
 * conetions:
 * 13 --- led0
 * 12 --- led1
 * 11 --- led2
 * 10 --- led3
 * 9 ---- led4
 * 8 ---- led5
 * 7 ---- led6
 * 6 ---- led7
 */

#include <Arduino.h>
#include <Hotboards_leds.h>

// lets create a bus with up to 8 leds
//                  bit7---------------------bit0
Hotboards_leds leds( 6, 7, 8, 9, 10, 11, 12, 13 );
// if our led will turn on with a LOW value, then we create the leds object
// with an extra parameter: Hotboards_leds led( 6, 7, 8, 9, 10, 11, 12, 13, LOW );

uint8_t counter = 0;

void setup( void )
{
    // nothing to do here
}

void loop( void )
{
    // reflect on the leds the counter variable value
    leds.write( counter );
    delay( 500 );
    counter++;
    // you still can manipulate each led individualy with
    // the functions turnOn, turnOff, toggle, write, but in
    // this ocation the function will need a parameter indicating
    // the led you want to manipulate
    // exmaple: leds.turnOn(3) turn on led #3
}
