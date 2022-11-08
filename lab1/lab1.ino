void display(int arr[]);
void populateArray(int arr[]);
float getDecimalValue(int arr[]);
void getComplement(int arr[]);
int getBitPos();
int readBit(int);
int siz = 5;
int arr[] = {0,0,0,0,0};
int complArr[5];
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
   Serial.println("\t =====Lab 01 =====");
   Serial.println("Enter a 5 digit binary number");

  populateArray(arr); //this function will help in populating the array from users input
  display(arr); // displays the populated array
  float out = getDecimalValue(arr); // this function converts your binary number to decimal
  Serial.print("\nDecimal Value of this binary number is: ");
  Serial.println(out);
  Serial.println("Complement of given binary number; ");
  getComplement(arr);
  display(complArr); // this will display the complArr array which is an array we will populate after taking a complement
  Serial.println("\nEnter a bit position (starting from LS bit) to read: ");
  int pos = getBitPos(); // this function will ask user for the position they want and it will be returned as an integer which would equal to pos
  if (pos >=5)
  {
     Serial.println("Invalid bit position");
  }  
  else 
  {
    Serial.print("The binary digit at position ");
    Serial.print(pos);
    Serial.print(" is: "); 
    int val = readBit(pos);  // we will go to this function to get the value of that position
    Serial.println(val);
  }
}

void loop()
 {
  // nothing goes here for this lab
 }
void populateArray(int arr[5])
  {
//    this is populated in the start... we will be asking user to provide input ..
// loop for 5 inputs 
// store them in arr
  int a = 0;
   for (int i=0;i<5;i++){
     //delay(1000);     
   //Serial.println("Enter a number");
   while(Serial.available() == 0){ }// this empty loop will keep running until user has entered an input   
   delay(1000);  
   arr[i] = Serial.parseInt();
   //Serial.print(arr[i]);
   //delay(1000);  
   }
  
  }
int readBit(int p)
  {
  // this function takes in the position of the array that they want to get and returns that
  int c = arr[siz-p];
  return c;
  
  }
int getBitPos()
  {
  // in this function we will ask user to give us a position they want
  int a = 0;
     //delay(1000);     
   //Serial.println("Enter a number");
   while(Serial.available() == 0){ }// this empty loop will keep running until user has entered an input   
   delay(5000);  
   a = Serial.parseInt();
   return a;
  }
void getComplement(int arr[5])
  {  
    // this function will loop over the array and then invert all the 0s and 1s and populate complArr
    for (int i=0;i<5;i++){    
      if (arr[i] == 0){
         complArr[i] = 1; 
        //Serial.print("We are here");
         //Serial.print(complArr[i]);
       }
      else if (arr[i] == 1){
        complArr[i] = 0;  
        //Serial.print(arr[i]);            
      }      
      else{
            Serial.print("Invalid input");    
      }
    } 
 }  
float getDecimalValue(int arr[5])
{
  //this function will convert binary to decimal
  float sum = 0.0;
  if (arr[0] == 1){
    sum = sum + 16;
  }
  if (arr[1] == 1){
    sum = sum + 8;
  }
  if (arr[2] == 1){
    sum = sum + 4;
  }
  if (arr[3] == 1){
    sum = sum + 2;
  }
  if (arr[4] == 1){
    sum = sum + 1;
  }
  return sum;
  
  
}

void display(int arr[5])
  {
    for (int i=0;i<5;i++){  
      Serial.print(arr[i]);
    }
  }
