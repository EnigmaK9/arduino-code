void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); // connected to S terminal of Relay
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH); // turn relay ON
  delay(3000); // keep it ON for 3 seconds
  digitalWrite(7, LOW); // turn relay OFF
  delay(5000); // keep it OFF for 5 seconds
}
