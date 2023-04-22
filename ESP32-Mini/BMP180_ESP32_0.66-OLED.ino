#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_BMP085.h>

#define OLED_RESET 0  // GPIO0
Adafruit_SSD1306 display(OLED_RESET);

Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
   delay(2000);
   
  if (!bmp.begin()) {
  Serial.println("Could not find a valid BMP085/BMP180 sensor, check wiring!");
  while (1) {}
  }
}
  
void loop() {
    // Clear the buffer.
    // Read temperature as Celsius
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(35,10);
  display.setTextColor(WHITE);
  display.print("Temp:");
  display.setCursor(35,18);
  display.print(bmp.readTemperature());
  display.println(" *C");
  display.display();
  delay(2000);
 
    //2nd page of reading
    // Clear the buffer.
   display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(35, 10);
  display.print("Pressure: ");
  display.setCursor(35,18);
  display.print(bmp.readPressure());
  display.println(" Pa");
    display.display();
  delay(2000);
 
   
  // 3rd  page of reading
  // Clear the buffer.
  display.clearDisplay();
   display.setTextSize(1);
  display.setCursor(35, 12);
  display.print("P:sealevel: ");
  display.setCursor(35, 20);
  display.print(bmp.readSealevelPressure());
  display.println(" Pa");
  display.display();
  delay(2000);

}
