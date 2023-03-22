#include <Arduino_GFX_Library.h>
 
#define TFT_SCK    18
#define TFT_MOSI   19
#define TFT_MISO   23
#define TFT_CS     5
#define TFT_DC     27
#define TFT_RESET  33
 
void setup(void)
{


  Serial.begin(9600);
  Serial.print("MOSI: ");
  Serial.println(MOSI);
  Serial.print("MISO: ");
  Serial.println(MISO);
  Serial.print("SCK: ");
  Serial.println(SCK);
  Serial.print("SS: ");
  Serial.println(SS); 

  
  Arduino_ESP32SPI bus = Arduino_ESP32SPI(TFT_DC, TFT_CS, TFT_SCK, TFT_MOSI, TFT_MISO);
  Arduino_ILI9341 display = Arduino_ILI9341(&bus, TFT_RESET);
 
  display.begin();
  display.fillScreen(WHITE);
  display.setCursor(20, 20);
  display.setTextSize(2);
  display.setTextColor(BLUE);
  display.print("Hello world");
}
 
void loop() {}
