Introduction:
In Lab 01, we had to perform 5 tasks. Take a 5-digit binary input from the user. Convert that binary into decimal. Take complement of that binary number. Ask user for a bit at a specific position. Return the bit at that position.

Methodology:
First, we take input from the user. We call our function “populateArray”. We use a while(Serial.available == 0) which waits for the user’s input. The input from the user is added to an array of size 5. 
Then we call “getDecimalValue”. Which returns a float integer after converting the binary number to decimal. We check for the positions of 1s. If its 1 at the start then we add 16 to our variable “sum”, if its at 2 position we add 8 to the “sum” and so on we calculate binary to decimal.  
We call “getComplement” method to take ones complement of the binary number provided by the user. In this function we convert 0 to 1 and vice versa. After converting we add the converted bit inside a new array called “complArr”. Display method is called to print the converted array. 
Lastly, we ask the user to provide a bit position to read. We get that value and then iterate over the array starting from the least significant bit. We move the same number of steps as the bit position given by the user. We return that integer and call “readBit(pos)” to print the binary bit at that position. 
![image](https://user-images.githubusercontent.com/99934126/200685921-8b6e627f-1899-4208-bf42-a314a98015ed.png)
Major function/library calls
Serial.begin(): For communicating with Serial Monitor.Sets the data rate in bits per second (baud) for serial data transmission.
Serial.available(): Get the number of bytes (characters) available for reading from the serial port. 
Serial.parseInt(): Takes an integer value from the user on the serial monitor
