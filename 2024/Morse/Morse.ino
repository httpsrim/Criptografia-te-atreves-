int buzzer = A0;
void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  //h
  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);
  
  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);
  
  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);
  //o
  tone(buzzer,412);
  delay(300);
  noTone(buzzer);
  delay(100);

  tone(buzzer,412);
  delay(300);
  noTone(buzzer);
  delay(100);
  
  tone(buzzer,412);
  delay(300);
  noTone(buzzer);
  delay(100);
  //l
  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);

  tone(buzzer,412);
  delay(300);
  noTone(buzzer);
  delay(100);

  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);

  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);
  //a
  tone(buzzer,412);
  delay(100);
  noTone(buzzer);
  delay(100);

  tone(buzzer,412);
  delay(300);
  noTone(buzzer);
  delay(2000);
}
