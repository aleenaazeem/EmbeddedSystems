**_Introduction_**
Our lab was to we had to interface a keypad with Arduino and 
mimic the operation of a gas station terminal.
**_Methodology_**
First, we download the keypad library from our Arduino terminal.
Then we connected the data pins of the Arduino with our keypad. 
A message is displayed to the user which says, “Enter amount”. 
It is when we are waiting for the users input. The user enters 
an amount of 1000 for example. They first press 1, then 0 three 
times. These numbers are character input from the user. They are 
stored then in string strNum. After the user enter ‘#’ the code 
goes to the calculate function. We first convert the string to 
number. If the sum provided is greater than 200 then we 
calculate the number of liters or else, we display an error 
message as the price of liter is around 200. If the sum is 
greater than 200 given by user, then we divide that number by 
200 to get the price per liter. In this case we get 5 liters of 
petrol. While each liter gets added to the car the led blinks 
once. 

_**OUTPUTS:**_
**Output1:**

![image](https://user-images.githubusercontent.com/99934126/200687726-e3864ca1-7881-4eb9-809b-def10d1feaf7.png)

**Output2:**

![image](https://user-images.githubusercontent.com/99934126/200687746-3e9dfac6-26f9-407a-959f-e4f9efebf270.png)

Working Hardware:
![image](https://user-images.githubusercontent.com/99934126/200687880-23e4e5f0-56db-4386-a196-86e53ed58edf.png)

Circuit diagram:
![image](https://user-images.githubusercontent.com/99934126/200687930-19ab5cfd-b8b4-4846-9f84-cf2c583574f3.png)

