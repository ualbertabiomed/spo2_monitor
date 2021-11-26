
#define WAVEFORM_WINDOW_WIDTH   300
#define WAVEFORM_WINDOW_HEIGHT   300


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
  tft.fillRect(170, 10, 150, 25, BLUE);
  tft.setCursor(175, 30);
  tft.print("Waveform");

  drawAxis(60,20,5,5);
  showValues();
}

void drawAxis(int domain, int range, int xInterval, int yInterval) {

  for(int i = 1; i*xInterval <= domain; i++) {
    tft.drawLine(470 - i*(xInterval*WAVEFORM_WINDOW_WIDTH/domain), 310-1, 470 - i*(xInterval*WAVEFORM_WINDOW_WIDTH/domain), WAVEFORM_WINDOW_WIDTH, RED);
  }

  for(int j = 1; j*yInterval <= range; j++) {
    tft.drawLine(470-1, 310 - j*(yInterval*WAVEFORM_WINDOW_HEIGHT/range), 460, 310 - j*(yInterval*WAVEFORM_WINDOW_HEIGHT/range), RED);
  }

}

void showValues() {
  tft.setFont(&FreeSevenSegNumFont);
  tft.setTextColor(BLACK);
  tft.setCursor(30, 95);
  tft.print("100");
  tft.setCursor(30, 250);
  tft.print("100");
}
