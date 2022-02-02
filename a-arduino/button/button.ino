#define BUTTON_READ 2

#define BAUD_RATE 9600


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON_READ, INPUT);
  
  Serial.begin(BAUD_RATE);
  Serial.println("Established connection at " + String(BAUD_RATE));
}


void loop() {
  if (digitalRead(BUTTON_READ) == HIGH) {
    Serial.println("Button Pressed.");
  }

  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}
