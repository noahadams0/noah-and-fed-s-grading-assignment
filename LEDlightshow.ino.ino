   #include <FastLED.h>

#define LEDPIN     13
#define LED_TYPE     WS2812B
#define NUM_LEDS    135
#define BRIGHTNESS 60
CRGB leds[NUM_LEDS];


void setup() {
//sanity delay
delay(3000); 

FastLED.addLeds<LED_TYPE,LEDPIN, GRB>(leds,NUM_LEDS);
FastLED.setBrightness(BRIGHTNESS);

}


  void loop(){
  fill_rainbow(&(leds[NUM_LEDS]),0 , 222);//changes the leds 0-134 to any color on the spectrum
    FastLED.show();
    for(int i=0;i<NUM_LEDS;i++)//i goes up by one every time
    {
        leds[i] = CRGB::Green; //changes the number that i is =too to green
        leds[(NUM_LEDS-i)] = CRGB::Blue;//changes the number of the led -1 =green 
      FastLED.show();
          delay(30);
        leds[i] = CRGB::Black;//changes the led back to black
        leds[(NUM_LEDS-i)] = CRGB::Black;  
    }
     {        
uint8_t  thisfade = 8;                                        // How quickly does it fade? Lower = slower fade rate.
int       thishue = 50;                                       // Starting hue.
uint8_t   thisinc = 1;                                        // Incremental value for rotating hues
uint8_t   thissat = 100;                                      // The saturation, where 255 = brilliant colours.
uint8_t   thisbri = 255;                                      // Brightness of a sequence. Remember, max_bright is the overall limiter.
int       huediff = 256;                                      // Range of random #'s to use for hue
uint8_t thisdelay = 5;                                        // We don't need much delay (if any)

    
                                      // random colored speckles that blink in and fade smoothly
      fadeToBlackBy(leds, NUM_LEDS, thisfade);                    // Low values = slower fade.
      int pos = random16(NUM_LEDS);                               // Pick an LED at random.
      leds[pos] += CHSV((thishue + random16(huediff))/4 , thissat, thisbri);  // I use 12 bits for hue so that the hue increment isn't too quick.
        thishue = thishue + thisinc;                                // It increments here.
     }// confetti()   
  }   
