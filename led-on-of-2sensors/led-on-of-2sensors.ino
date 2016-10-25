
int ldr = A3;
int ldr2 = A2;
int led = 12;

void setup() {
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

int valueldr = analogRead(ldr);
int valueldr2 = analogRead(ldr2);

int value1 = map(valueldr,0,1023,0,100);
int value2 = map(valueldr2,0,1023,0,100);

Serial.println(value1);
Serial.println(value2);

if (value1>75&&value2>75){
digitalWrite(led,HIGH);

} else {
  digitalWrite(led,LOW);
}

}
