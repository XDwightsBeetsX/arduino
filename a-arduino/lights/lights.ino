
#define RED 3
#define WHITE 4
#define BLUE 5

#define BAUD_RATE 9600


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(RED, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(BLUE, OUTPUT);
  
  Serial.begin(BAUD_RATE);
  Serial.println("Established connection at " + String(BAUD_RATE));
}


int wait = 500;

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(wait);
  digitalWrite(LED_BUILTIN, LOW);
  
  digitalWrite(RED, HIGH);
  Serial.println("RED");
  delay(wait);
  digitalWrite(RED, LOW);
  
  digitalWrite(WHITE, HIGH);
  Serial.println("WHITE");
  delay(wait);
  digitalWrite(WHITE, LOW);
  
  digitalWrite(BLUE, HIGH);
  Serial.println("BLUE");
  delay(wait);
  digitalWrite(BLUE, LOW);
}
