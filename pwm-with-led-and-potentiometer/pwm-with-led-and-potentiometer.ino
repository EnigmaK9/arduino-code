int LED = 3;
int BRIGHTNESS;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  for (BRIGHTNESS = 0; BRIGHTNESS <= 255; BRIGHTNESS++)
  {
    analogWrite(LED, BRIGHTNESS);
    delay(15);
  }

  for (BRIGHTNESS = 255; BRIGHTNESS >= 0; BRIGHTNESS--)
  {
    analogWrite(LED, BRIGHTNESS);
    delay(15);
  }
}
