#include "FastLED.h"

#define LEDPIN     11
#define LED_TYPE     ws2812b
#define NUM_LEDS    135
#define BRIGHTNESS 60
CRGB leds[NUM_LEDS];


void setup() {
//sanity delay
delay(3000); 

// set up LED strip info
FastLED.addLeds<LED_TYPE,LEDPIN>(leds,NUM_LEDS).setCorrection(TypicalLEDStrip);
FastLED.setBrightness(BRIGHTNESS);
}


void loop() {
//changing the third variable changes how quickly the lights fade
fadeToBlackBy( leds, NUM_LEDS, 10);

//changing this variable will increase the chance of a "star" popping up
addGlitter(30);

FastLED.show();
}


//glitter effect
void addGlitter( fract8 chanceOfGlitter) {
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;}
}
