
#define RED 3
#define WHITE 4
#define BLUE 5


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(BLUE, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  pot = analogRead(POT_PIN);
  Serial.println(pot);
  
  analogWrite(MOF_PIN, pot/4);
}
