
int ldr = A3;
int led = 12;

void setup() {
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

int valueldr = analogRead(ldr);
int velocled = map(valueldr,0,1023,0,1000);
Serial.println(velocled);

if (velocled < 500){
digitalWrite(led,HIGH);

} else {
  digitalWrite(led,LOW);
}

}
