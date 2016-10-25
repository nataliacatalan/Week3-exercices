int ldr = A3;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;
int numleds=4;
int lastvalue=0;
int button = 8;


void setup() {
  
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(button, INPUT);
  
  Serial.begin(9600);
}

void loop() {

int valueldr = analogRead(ldr);
int value1 = map(valueldr,0,1023,1,4);
int butState = digitalRead(button);

if (butState==0){
       if(lastvalue<value1){
      for(int i=0; i<value1; i++){
        digitalWrite(9+i,HIGH);
      }
     }

     if(lastvalue>value1){
      for(int i=0; i<value1; i++){
       digitalWrite(12-i,LOW); 
      } 
    }
} else {
   if(lastvalue<value1){
  for(int i=0; i<value1; i++){
    digitalWrite(12-i,HIGH);
  }
 }
 if(lastvalue>value1){
  for(int i=0; i<value1; i++){
   digitalWrite(9+i,LOW); 
  }
  
} 

 }
int lastvalue=value1;
 
}

