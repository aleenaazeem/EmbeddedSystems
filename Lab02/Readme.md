_**Introduction:**_
In our lab we had to perform two tasks. First task was to blink 4 LEDs in a sequence from non-significant to most significant (Chasing sequence). In our Second task we had to ask user to enter their name and write ‘$’ at the end of it. Once the user has entered their name, our would program would count the number of characters and then blink the LED on pin 13

_**Methodology:**_
In task one we had to set four leds on a bread board. Their ground (anode) is connected to the ground of the arduino and cathode is connected to the data pins of the Arduino. We store the leds from least significant to most in our code by giving them numbers of the data pins. We put a delay of 1 second before the least significant led turns on. Then led 2, 3 and 4. When all of them have been turned on, we used “LOW” is digital write for all of the leds to turn off with each other in a blinking fashion, three times. Then we reverse the order of the leds turning on. First, we turn on Most significant to least significant. This code is written in the while loop to run forever. 
In task 2 we had to take a user’s name as an input on the serial monitor. The input is store one by one in a character variable “char_name” and then that character is added to the string name. After the user has given ‘$’ input the count function called. Here we first take the length of the name provided. Then we loop over the string to count the number of character and store the value in the variable ‘counter’. At the end we use the a loop to blink our LEDs the amount of time we have characters in our name.  

Output1 (Task2)
![image](https://user-images.githubusercontent.com/99934126/200686997-fb738b47-d17a-4204-8569-775ef4a7c2ca.png)

Output2 (Task2)
![image](https://user-images.githubusercontent.com/99934126/200687021-fc892e94-bb23-4db9-b512-2094b636a69d.png)

Output3 (Task2)
![image](https://user-images.githubusercontent.com/99934126/200687049-fddb9546-ac7d-488b-aafb-52429281656c.png)


Working Hardware (Task 1): 
![image](https://user-images.githubusercontent.com/99934126/200687086-f55125b1-8769-4724-a5a6-5a681235f6a5.png)


Working Hardware (Task 2): 
![image](https://user-images.githubusercontent.com/99934126/200687118-8596442f-37c8-4756-99e8-b039fe36f422.png)
 
 
Circuit diagram (Task 1):
![image](https://user-images.githubusercontent.com/99934126/200687146-fc019573-5b77-44ce-9b44-953d598c0c4d.png)


Circuit diagram (Task 2):
![image](https://user-images.githubusercontent.com/99934126/200687172-4c94aab9-bef5-4ac3-aa17-18ecc30cef92.png)

