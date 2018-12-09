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
    
/*
----------begin_max5_patcher----------
1114.3oc0ZsraaiCEcsKP+GHzLqF3FH9RO5xtY1Lq51ACJnkYRTgjn.IUiSK
l+8ghTJNOnsUTnyHGCKFQQIdOGduGdIk+0G+vpnMhcbUD3yf+FrZ0uL0rxVW
eMqFqXUTMaWQESYaXTgntl2niVObQMem1dgVI+SJtFbsPBXUUfJ9VEPKr+u3
5qe3FJ2ZatXy2+Dh7PssLcwskM27MIuP6rHL9JDcM.iPWEuF.Si6KPlif+Y7
tT56q31G2COnlt5xlJt1ZsvGUqnSOVcrs1+8ienuzTr97g9q6Lmb2skZtWB.
NAB.kiu.H.0sh6LH9VNnnSJMMA70+7KfsLMCX531NcOazeYEWVxp.sB49mRU
YCuPz0XeTHODEjdLhJwRLTWAhbUuWC4+UZplqTra3ujl9YUQEmI84LfSdnVm
Mnuuk6.XTzdr3A+oXnE5XKCPnNd30P.H+D.L79Iek0rUTCJDUlHEq6QeTRoI
JgIkr68RLGUlffrgGlg89fjr7kbPxuA9qdcgxFChkJMPokFv3Eynig47XmjP
VpsftDTFZ32YL7WhY9tVI32Kgf+.6Enwy0qOi3fMxVjj8585gg1q27b1v8Fb
ixNBLWCh1vL9ASAtCi4CC4yCtsLIqlq4xuwaXab2Sret.EdIPDkBF95kony0
gHIMuW52QMooK.UvCESzZB60.lW3iOZJAYVYNBxJ3SHAym+LLUWQkP4OqGzr
GgICyvYGbw4Kfg3CBeQKuwK5msfGMidUh4urz8TvR1K+mUfajht19Ty7wDvS
nIdhjdftjdRHANb+LH4ECh6mk9YGce5kBe5wXvIjHgoy0EBgQ8RjCjFIgrji
fFXJuLvrkPPI46m+jBW1325m3E+yVDASfWJ3eHJwG9ylK7IvjKmg+3CI.L63
exiydboCeqZnO3O6EJSozKE3OLUfO3Slc5StkJco37OoOdUGwuw4GwNhBASW
xbjcUDdwO7slfsSl.SV5QHA9qOxL+slqka6aI4YK3T0G1TVEHOI1aH0QVTt0
I7jJuD790t37tRyC1pWQAmPXslkusE.8RFyVdgFOr7c6zPIoKgsr5PDfVT5U
a4vXupToOQ5GtjuwtBxL1CK7zvu6AZeuBO+8aYMq9K7LVQI5jEiPYHvG7HKa
KWoKaX5RQyiZDz0nCS+St6xlT28rVUWtsUXB.Ui6EN0J4Pr7apYVrwyBhIlF
BSLOwYTYOwDyBjIlD.SjlPNmlHI.lXBxtUmng85bvDowAxDwuJZLDcX7j6PX
X5vozezm1HgbKWdhMKMrF.Be.K.F.K.MIEmwQlPzgzP34O7F91KwE+BAuDbf
hC52o5I6lDh9K98s+fSaRmzynW3qvDfmoPQX566L8P76b+gBPbGJM6blZAD9
N64GG.NASiOqbxjzm8RIC4+ZVEyO3R0vc35IS5+eWXicRW6NurwctK25HI+G
ki2B0UESVz+SXpP2IcImuKYXSnhpElHwltxQ8.qMXN7e.3FBPt.
-----------end_max5_patcher-----------
*/
