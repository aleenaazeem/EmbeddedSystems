void count(); //after user presses $ we will go here
int i=0; // for iteration
int counter = 0; // for counting characters
String name = "";
char char_name = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  pinMode(13, OUTPUT);
  Serial.println("\t =====Lab 02 =====");
  Serial.println("Enter your name(to terminate enter $):");
  for (i=0;i<20;i++){
  
  digitalWrite(13,HIGH); 
  delay(100);
  digitalWrite(13,LOW); }

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
     char_name = Serial.read();
     if (char_name != '$'){
      name = name + char_name;
      
    }
    else{
      // go to count
      Serial.print("Hello there, ");
      Serial.println(name);
      //Serial.println("We here because $");
      count();
    }
  }

}
void count(){
  //Serial.println("Here in the count function");
  //first we will count the length of the string
  int len = name.length(); // this will give the length of the string
  //Serial.println(len);
  for (i=0;i<len;i++){
  if (name[i] != ' ' && name[i] != '$'){
    counter = counter + 1;  // counter character while iterating over the string   
  }
  }
Serial.print("There are ");
Serial.print(counter);
Serial.println(" character in your name.");
Serial.println("Watch the LEDs blink");
  for (i=0;i<counter;i++){
  digitalWrite(13,HIGH); 
  delay(500);
  digitalWrite(13,LOW); 
  delay(500);
  }
  
  }
  