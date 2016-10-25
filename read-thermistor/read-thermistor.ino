
int thermistor = 13;

void setup() {
  pinMode(thermistor,INPUT);
  Serial.begin(9600);
}

void loop() {

int valuetemperature = analogRead(thermistor);
Serial.println(valuetemperature);
  
}
