//  pin 2:  LED Strip #1 

#include <OctoWS2811.h>

const int ledsPerStrip = 7;

DMAMEM int displayMemory[ledsPerStrip*6];
int drawingMemory[ledsPerStrip*6];

const int config = WS2811_GRB | WS2811_800kHz;

OctoWS2811 leds(ledsPerStrip, displayMemory, drawingMemory, config);

byte RGBdata[ledsPerStrip*3];

void setup() {
  Serial.begin(9600);
  leds.begin();
  leds.show();
}

void loop() {
  
while (Serial.available() > 0) {
  
/*
RGBdata[0] = Serial.parseInt();
RGBdata[1] = Serial.parseInt();
RGBdata[2] = Serial.parseInt();
RGBdata[3] = Serial.parseInt();
RGBdata[4] = Serial.parseInt();
RGBdata[5] = Serial.parseInt();
RGBdata[6] = Serial.parseInt();
RGBdata[7] = Serial.parseInt();
RGBdata[8] = Serial.parseInt();
RGBdata[9] = Serial.parseInt();
RGBdata[10] = Serial.parseInt();
RGBdata[11] = Serial.parseInt();
RGBdata[12] = Serial.parseInt();
RGBdata[13] = Serial.parseInt();
RGBdata[14] = Serial.parseInt();
RGBdata[15] = Serial.parseInt();
RGBdata[16] = Serial.parseInt();
RGBdata[17] = Serial.parseInt();
*/

for (int i=0; i<ledsPerStrip*3; i++){
RGBdata[i] = Serial.parseInt();
}


if (Serial.read() == '\n') {

for (int i=0; i<ledsPerStrip*3; i++){
leds.setPixel( i, RGBdata[i*3], RGBdata[i*3+1], RGBdata[i*3+2]);
}

/*
leds.setPixel( 0, RGBdata[0], RGBdata[1], RGBdata[2]);
leds.setPixel( 1, RGBdata[3], RGBdata[4], RGBdata[5]);
leds.setPixel( 2, RGBdata[6], RGBdata[7], RGBdata[8]);
leds.setPixel( 3, RGBdata[9], RGBdata[10], RGBdata[11]);
leds.setPixel( 4, RGBdata[12], RGBdata[13], RGBdata[14]);
leds.setPixel( 5, RGBdata[15], RGBdata[16], RGBdata[17]);
*/

leds.show(); }
}}
    

