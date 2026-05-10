#  Simplified rotatory encoder code 


I feel like the code in the demo or documentation of the KY-040 are complex and messed up for no reason , heres a simpler one
So basically in simple terms , when turned right (clock wise)
<img width="283" height="193" alt="image" src="https://github.com/user-attachments/assets/e01d1fb2-3ab5-438b-bc33-8efeff784869" />
these are the values for CLK and DT pins , the CLK pins and the DT pins are never the same , one is always the opposite of the other in each turn 

and when turned left(counter clock wise),
<img width="306" height="309" alt="image" src="https://github.com/user-attachments/assets/748f6633-ae41-4279-8fc6-bec5fe48ed29" />
the value of both CLK and DT are the same in every turn.

Using this simple logic to detect any movment we detect the change in CLK as in both cases CLK will defo change , 

```cpp
if(CLK != prv_CLK){}// so just by comparing the current CLK value to the previous CLK value we can detect any change-
// -in the rotation

```

and inside this if statement we can run 2 other if statements ,
one that increments the position variable when encoder is turned to the right and the 2nd if statement decreases the value of the position variable , and that probably is the cleanest and simplest code for the rotatory encoder.

```cpp
 if( DT != CLK){} \\ if statement for when its rotated clockwise
if(CLK == DT){} \\ if statement when its rotated counter clockwise  cause  CLK and DT when going CCW
```


<img width="1066" height="738" alt="image" src="https://github.com/user-attachments/assets/2083b898-c6d5-4567-90b9-37b379216d70" />



