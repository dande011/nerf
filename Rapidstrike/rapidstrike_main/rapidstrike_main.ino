#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4

#include "rapidstrike_image.h"
#include "displaySetup.h"

int count = 0;
char string[] = "Hello World! ";

void setup() {
  Serial.begin(9600);
  displaySetup();
}

void loop() {
  display.print(string[(count%13)]);
  display.display();
  ++count;
  delay(100);
}
