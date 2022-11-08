#include <Keypad.h>
int amount[5];
void calculate(int arr[]); // this will determine how much petrol you asked fo\r
String strNum;
int sum = 0;
int i = 0;
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte colPins[ROWS] = {5, 4, 3, 2}; // Pins used for the rows of the keypad
byte rowPins[COLS] = {9, 8, 7, 6}; // Pins used for the columns of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  for (int i=0;i<5;i++){  
  digitalWrite(13,HIGH); 
  delay(200);
  digitalWrite(13,LOW); }
  Serial.println("Enter amount:");
  //Serial.print(amount);
}
void loop(){
  char customKey = customKeypad.getKey();  
   
  if (customKey == '1'){
    strNum = strNum + customKey;
    Serial.print(customKey);
    i = i+1;
  }
  if (customKey == '2'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '3'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '4'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '5'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '6'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '7'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '8'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }
  if (customKey == '9'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }  
  if (customKey == '0'){
    strNum = strNum + customKey;
    Serial.print(customKey);
  }  
  if (customKey == '#'){
    calculate(amount);
  } 
  //i = i+1;
  //Serial.print(i);  
  //Serial.print("array at i is");  
  //Serial.print(amount[i]);   
}
void calculate(int arr[5]){
int beta = 0;  
  int num_litres = 0;
  int power;
  int sum = strNum.toInt();
  Serial.print("\nYour entered value: ");
  Serial.print(sum);
   
    if (sum > 200){
    num_litres = sum / 200; // check
    Serial.print("\nYou will have ");
    Serial.print(num_litres);
    Serial.println(" Lit of fuel against this amount.");
    Serial.println("Dispensing fuel.Please wait");
    for (int i=0; i<num_litres;i++){
    digitalWrite(13,HIGH); 
    delay(1500);    
    digitalWrite(13,LOW);
    delay(1500);} 
    Serial.println("Thank you for visiting us.");
    Serial.println("Drive safe");
    }
    else{
         Serial.println("\nSorry, system cannot dispense fuel against this amount.");
          Serial.println("Thank you for visiting us.");
          Serial.println("Drive safe");                    
    }    
}