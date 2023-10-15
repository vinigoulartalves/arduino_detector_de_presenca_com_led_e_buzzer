// C++ code
//
int estadoSensor = 0;

void setup()
{
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  estadoSensor = digitalRead(12);
  if (estadoSensor == HIGH) {
    digitalWrite(13, HIGH);
    tone(11, 523, 1000); // play tone 60 (C5 = 523 Hz)
    Serial.println("ALARME DISPARADO!");
  } else {
    digitalWrite(13, LOW);
  }
  Serial.println(estadoSensor);
  delay(50); // Wait for 50 millisecond(s)
}