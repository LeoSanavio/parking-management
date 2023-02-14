
int led = 13; 

void setup() {
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  char leitura = Serial.read();

  if(leitura == '1'){
    digitalWrite(led, HIGH);
    delay(10000);
    digitalWrite(led, LOW);
  }
}
