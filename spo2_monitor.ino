//adding libraries for various devices used
#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>
#include <SPI.h>
#include <SD.h>
#include <FreeDefaultFonts.h>
#include <Fonts/FreeSans12pt7b.h>
//#include <TouchScreen.h>

#define YP A3
#define XM A2
#define YM 9
#define XP 8
#define MINPRESSURE   10
#define MAXPRESSURE 1000
#define DISPLAY_WIDTH  480
#define DISPLAY_HEIGHT 320
//TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);
MCUFRIEND_kbv tft;

//colours used
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

void setup() {
  // put your setup code here, to run once:
  init();
  Serial.begin(9600);
  tft.reset();             // hardware reset
  uint16_t ID = tft.readID();    // read ID from display
  Serial.print("ID = 0x");
  Serial.println(ID, HEX);
  if (ID == 0xD3D3) ID = 0x9481; // write-only shield
  
  tft.begin(ID);                 // LCD gets ready to work
  tft.setRotation(1);

  draw();
}

void loop() {
  // put your main code here, to run repeatedly:


}
