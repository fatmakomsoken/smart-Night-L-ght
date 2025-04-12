int sensorPin = A0;       // LDR bağlı pin
int ledPin = 9;           // LED bağlı pin
int threshold = 500;      // Karanlık eşik değeri

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);     // Seri monitör için (isteğe bağlı)
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); // Işık seviyesini ekrana yaz

  if (sensorValue < threshold) {
    digitalWrite(ledPin, HIGH); // Karanlıksa LED yanar
  } else {
    digitalWrite(ledPin, LOW);  // Aydınlıksa LED söner
  }

  delay(500);
}
