void draw() {

  tft.fillScreen(TFT_WHITE);
  tft.setFont(&FreeSans12pt7b);
  tft.setTextColor(WHITE);
  tft.setTextSize(1);
  
  tft.drawRect(10, 10, 150, 145, BLUE);
  tft.fillRect(10, 10, 150, 25, BLUE);
  tft.setCursor(15, 30);
  tft.print("Heart Rate");

  
  tft.drawRect(10, 165, 150, 145, BLUE);
  tft.fillRect(10, 165, 150, 25, BLUE);
  tft.setCursor(15, 185);
  tft.print("SpO2 %");

  tft.drawRect(170, 10, 300, 300, BLUE);
  tft.fillRect(170, 10, 300, 25, BLUE);
  tft.setCursor(175, 30);
  tft.print("Waveform");

}

void draw_graph() {
  
}

void graph() {

}
