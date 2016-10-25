
int ldr = A3;
int led = 12;

void setup() {
  
  pinMode(led, OUTPUT); //we set the led as an output
  Serial.begin(9600); //we set the serialprint
}

void loop() {

int valueldr = analogRead(ldr); //we read the ldr value
int velocled = map(valueldr,0,1023,0,1000); //we assign a value to the delay

digitalWrite(led,HIGH);
delay (velocled);
digitalWrite(led,LOW);
delay(velocled);

Serial.println(valueldr);
Serial.println(velocled);

}
