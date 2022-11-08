int led1 = 2; // least significant
int led2 = 3;
int led3 = 4; 
int led4 = 5; // most significant
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
 // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(led1,HIGH);
  delay(1200);
 
  digitalWrite(led2,HIGH);
  delay(1200);
  
  digitalWrite(led3,HIGH);
  delay(1200);
  
   digitalWrite(led4,HIGH);
  delay(1200);
  for(int i = 0; i<3;i++){
 digitalWrite(led1,LOW);
 digitalWrite(led2,LOW);
 digitalWrite(led3,LOW);
 digitalWrite(led4,LOW);    
 delay(500);
 digitalWrite(led1,HIGH);
 digitalWrite(led2,HIGH);
 digitalWrite(led3,HIGH);
 digitalWrite(led4,HIGH); 
 delay(500);
  }
   digitalWrite(led4,LOW);
  delay(1200);
  digitalWrite(led3,LOW);
  delay(1200);  
  digitalWrite(led2,LOW);
  delay(1200);
  digitalWrite(led1,LOW);
  delay(1200);
}
