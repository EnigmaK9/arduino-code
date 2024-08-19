int LED = 3;
int BRIGHTNESS;
int POTENTIOMETER;

void setup()
{
  pinMode(LED, OUTPUT);
  // analog entries do not require initialization
}

void loop()
{
  BRIGHTNESS = analogRead(POTENTIOMETER) / 4; // 255.55 la fraccion se desestima
  analogWrite(LED, BRIGHTNESS);
}
