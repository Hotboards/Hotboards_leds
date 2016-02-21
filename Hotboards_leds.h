/*
  Hotboards_leds.h - Driver to control leds one at a time or in group
  Hotboards leds board (http://hotboards.org)
  Created by Diego Perez, January 16, 2016.
  Released into the public domain.
*/

#ifndef Hotboards_leds_h
#define Hotboards_leds_h

#include <Arduino.h>

class Hotboards_leds
{
    public :
        Hotboards_leds( int led0, bool on=HIGH );
        Hotboards_leds( int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led2, int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led3, int led2, int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led4, int led3, int led2, int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led6, int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );
        Hotboards_leds( int led7, int led6, int led5, int led4, int led3, int led2, int led1, int led0, bool on=HIGH );
        void turnOn( uint8_t led=0 );
        void turnOff( uint8_t led=0 );
        void toggle( uint8_t led=0 );
        uint8_t read( uint8_t led=0 );
        uint8_t read( void );
        void write( uint8_t val );

    private :
        void begin( uint8_t led, uint8_t pin );
        uint8_t _pin[ 8 ];
        uint8_t _leds;
        uint8_t _state;
        bool _on;
};

#endif
