int ldr = A3;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;

void setup() {
  
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {


int valueldr = analogRead(ldr);
int value1 = map(valueldr,0,1023,0,4);
int value2 = map(valueldr,0,1023,4,0);


 if(valueldr++){
  for(int i=0; i<value1; i++){
    digitalWrite(9+i,HIGH);
  }
  
 }
 
 if(valueldr--){
  for(int j=0; j<value2; j++){
   digitalWrite(12-j,LOW); 
  }

 }



}

