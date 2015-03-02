  Adafruit_SSD1306 display(OLED_RESET);
  
void displaySetup(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //I2C address 0x3C
  
  //draw Adafruit splash
  //display.display();
  //delay(2000);
  display.clearDisplay();
  
  //draw Rapidstrike logo
  display.drawBitmap(0, 0, rapidstrike, rapidstrikeWPixels, rapidstrikeHPixels, 1);
  display.display();
  delay(1000);
  display.invertDisplay(true); //invert image (for teh cool factor)
  delay(1500);
  display.invertDisplay(false); //fix inversion
  display.clearDisplay();
  display.display();
  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
}
