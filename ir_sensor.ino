void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(8) == LOW)
  {
    digitalWrite(13,HIGH);
    delay(10);
  }
  else
  {
    digitalWrite(13,LOW);
    delay(10);
  }
}
