/*
  Hotboards_leds.h - Driver to control leds one at a time or in group
  Hotboards leds board (http://hotboards.org)
  Created by Diego Perez, January 16, 2016.
  Released into the public domain.
*/

#ifndef Hotboards_leds_h
#define Hotboards_leds_h

#include <Arduino.h>

/** Hotboards_leds class.
 *  Used to control general purpose leds
 *
 * Example:
 * @code
 * #include "Hotboards_leds.h"
 *
 * Hotboards_leds led( PB_5 );
 *
 * int main( void )
 * {
 *     for(;;){
 *         led.toggle( );
 *         delay( 0.2 );
 *     }
 * }
 * @endcode
 */
class Hotboards_leds
{
    public :
        /** Create Hotboards_leds instance for one led
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the led
          *
          * Example:
          * @code
          *   // instance one led on pin 5
          *   Hotboards_leds led( 5 );
          * @endcode
          */
        Hotboards_leds( int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for two leds
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 2 leds on pins 5 and 6
          *   Hotboards_leds led( 5, 6 );
          * @endcode
          */
        Hotboards_leds( int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for three leds
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 3 leds on pins 5, 6 and 7
          *   Hotboards_leds led( 5, 6, 7 );
          * @endcode
          */
        Hotboards_leds( int led2, int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for four leds
          * @param led3 pin where the led 3 will be connected
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 4 leds on pins 5, 6, 7 and 8
          *   Hotboards_leds led( 5, 6, 7, 8 );
          * @endcode
          */
        Hotboards_leds( int led3, int led2, int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for five leds
          * @param led4 pin where the led 4 will be connected
          * @param led3 pin where the led 3 will be connected
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 5 leds on pins 5, 6, 7, 8 and 9
          *   Hotboards_leds led( 5, 6, 7, 8, 9 );
          * @endcode
          */
        Hotboards_leds( int led4, int led3, int led2, int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for six leds
          * @param led5 pin where the led 5 will be connected
          * @param led4 pin where the led 4 will be connected
          * @param led3 pin where the led 3 will be connected
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 6 leds on pins 5, 6, 7, 8, 9 and 10
          *   Hotboards_leds led( 5, 6, 7, 8, 9, 10 );
          * @endcode
          */
        Hotboards_leds( int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for seven leds
          * @param led6 pin where the led 6 will be connected
          * @param led5 pin where the led 5 will be connected
          * @param led4 pin where the led 4 will be connected
          * @param led3 pin where the led 3 will be connected
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 7 leds on pins 5, 6, 7, 8, 9, 10 and 11
          *   Hotboards_leds led( 5, 6, 7, 8, 9, 10, 11 );
          * @endcode
          */
        Hotboards_leds( int led6, int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );

        /** Create Hotboards_leds instance for eight leds
          * @param led7 pin where the led 7 will be connected
          * @param led6 pin where the led 6 will be connected
          * @param led5 pin where the led 5 will be connected
          * @param led4 pin where the led 4 will be connected
          * @param led3 pin where the led 3 will be connected
          * @param led2 pin where the led 2 will be connected
          * @param led1 pin where the led 1 will be connected
          * @param led0 pin where the led 0 will be connected
          * @param on logic level to turn on the leds
          *
          * Example:
          * @code
          *   // one instance with 8 leds on pins 5, 6, 7, 8, 9, 10, 11 and 12
          *   Hotboards_leds led( 5, 6, 7, 8, 9, 10, 11, 12 );
          * @endcode
          */
        Hotboards_leds( int led7, int led6, int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );

        /** Turn on a single led
          * @param led led number to be turn on
          *
          * Example:
          * @code
          *   // instance one led on pin 5 and turn it on
          *   Hotboards_leds led( 5 );
          *   led.turnOn( );
          *
          *   // instance a bus with 4 leds
          *   Hotboards_leds leds( 8, 7, 6, 5 );
          *   // turn on led 2 on pin 7
          *   leds.turnOn( 2 );
          *   // turn on led 0 on pin 5
          *   leds.turnOn( 0 );
          * @endcode
          */
        void turnOn( uint8_t led=0 );

        /** Turn off a single led
          * @param led led number to be turn off
          *
          * Example:
          * @code
          *   // instance one led on pin 5 and turn it off
          *   Hotboards_leds led( 5 );
          *   led.turnOff( );
          *
          *   // instance a bus with 4 leds
          *   Hotboards_leds leds( 8, 7, 6, 5 );
          *   // turn off led 3 on pin 8
          *   leds.turnOff( 3 );
          *   // turn off led 0 on pin 5
          *   leds.turnOff( 0 );
          * @endcode
          */
        void turnOff( uint8_t led=0 );

        /** Toggle a single led
          * @param led led number to be toggled
          *
          * Example:
          * @code
          *   // instance one led on pin 7 and toggle it
          *   Hotboards_leds led( 7 );
          *   led.toggle( );
          *
          *   // instance a bus with 3 leds
          *   Hotboards_leds leds( 2, 3, 4 );
          *   // toggle led 2 on pin 2
          *   leds.toggle( 2 );
          *   // toggle led 1 on pin 3
          *   leds.toggle( 1 );
          * @endcode
          */
        void toggle( uint8_t led=0 );

        /** Write to a single led or the entire bus
          * @param val value to be written
          *
          * Example:
          * @code
          *   // instance one led on pin 7 and write a 1 (aceptara valores de 0 a 1)
          *   Hotboards_leds led( 7 );
          *   led.write( 1 );
          *
          *   // instance a 4 leds bus (pin2->led3 ..... pin5->led0)
          *   Hotboards_leds leds( 2, 3, 4, 5 );
          *   // write the 10 value (it will accept values from 0 to 15)
          *   leds.write( 10 );
          *
          *   // instance an 8 leds bus (pin4->led7 ..... pin3->led0)
          *   Hotboards_leds leds( 4, 3, 2, 6, 5, 7, 8, 9 );
          *   // write the 134 value (it will accept values from 0 to 255)
          *   leds.write( 134 );
          * @endcode
          */
        void write( uint8_t val );

        /** Read a single led or the entire bus
          * @return led states
          *
          * Example:
          * @code
          *   // instance on led on 7 and read its state (0 o 1)
          *   Hotboards_leds led( 7 );
          *   uint8_t var = led.read( );
          *
          *   // instance an 8 leds bus (pin9->led7 ..... pin2->led0)
          *   Hotboards_leds leds( 9, 8, 7, 6, 5, 4, 3, 2 );
          *   // read the leds value (from 0 to 255)
          *   uint8_t var = leds.read( );
          *
          *   // nstance a 4 leds bus (pin2->led3 ..... pin5->led0)
          *   Hotboards_leds leds( 2, 3, 4, 5 );
          *   // read led 1 state (pin 4)
          *   uint8_t val1 = leds.write( 1 );
          *   // read led 0 state (pin 5)
          *   uint8_t val2 = leds.write( 0 );
          * @endcode
          */
        uint8_t read( uint8_t led=0xff );

    private :
        void begin( uint8_t led, uint8_t pin );
        uint8_t _pin[ 8 ];
        uint8_t _leds;
        uint8_t _state;
        bool _on;
};

#endif
