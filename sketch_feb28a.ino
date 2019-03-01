#include <FastLED.h>

#define LEDPIN     11
#define LED_TYPE     WS2812B
#define NUM_LEDS    135
#define BRIGHTNESS 60
CRGB leds[NUM_LEDS];


void setup() {
//sanity delay
delay(3000); 

FastLED.addLeds<LED_TYPE,LEDPIN>(leds,NUM_LEDS).setCorrection(TypicalLEDStrip);
FastLED.setBrightness(BRIGHTNESS);

}


void loop() {
  {
 for(int i=0;i<NUM_LEDS;i++)
 {
    leds[i] = CRGB::Green;
    leds[(NUM_LEDS-i)] = CRGB::Blue;
    FastLED.show();
    delay(30);
  leds[i] = CRGB::White;
    leds[(NUM_LEDS-i)] = CRGB::White;
 }
fadeToBlackBy( leds, NUM_LEDS, 10);
    {
   

 float addGlitter(30);
 

FastLED.show();
    }
 
float chanceOfGlitter;
  {float addGlitter=chanceOfGlitter;
 
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::Black;}
  }
}
}
