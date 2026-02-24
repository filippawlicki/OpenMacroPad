#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN_RGB 16 
#define NUMPIXELS 1 

Adafruit_NeoPixel pixels(NUMPIXELS, PIN_RGB, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
}

void loop() {
  pixels.clear();  

  pixels.setPixelColor(0, pixels.Color(150, 0, 150));
  pixels.show();
  
  delay(500);

  pixels.clear();
  pixels.show();
  
  delay(500);
}
