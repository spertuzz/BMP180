#include <Wire.h>
#include <Adafruit_BMP085.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

 // Declaration for SSD1306 display connected using I2C
#define OLED_RESET  0 // Reset pin
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(OLED_RESET);

Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  Wire.begin(8, 10);
  
   if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085/BMP180 sensor, check wiring!");
  while (1) {}
  } 
   // initialize the OLED object
 display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS); 
 
}
  
void loop()
{
// intialize by Clearing the display.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(33,8);
  display.print("Temp:");
  display.print(bmp.readTemperature());
  display.println(" ℃");
  
  display.setTextSize(1);
  display.setTextColor(WHITE); 
  display.setCursor(33,16);
  display.print("Pres:");
  display.print(bmp.readPressure());
  display.println(" Pa");
  
  // Calculate altitude assuming 'standard' barometric
  // pressure of 1013.25 millibar = 101325 Pascal
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(33,25);
  display.print("Alti:");
  display.print(bmp.readAltitude());
  display.println(" M");
  
  display.display(); 
 delay(3000);
}
