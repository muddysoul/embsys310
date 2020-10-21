# assignment 02
##### 1. Inject 0x7FFFFFFF for the “counter” value in the variable window, then step thru the program only once to increment “counter”.
a) What is the value of the “counter” from the “Locals” window?

    -2147483648

b) What is the value of the “counter” in the “Registers” window?

    0x80000000

c) Please note down if the N and/or V flags are set in the APSR register. And explain why.
   
    Both are set. This is because our int is signed and it wants you to know that when we added one it overflowed 
    and became negative because the most significant bit was set, and you dont usually want large positive numbers 
    to become large negative numbers when you add 1.
    
##### 2. If you write all Fs (0XFFFFFFFF) in the Register value for “counter” then step thru the program once to increment “counter”
a) What happens to the value of “counter” in the “Locals” window?

    It went from -1 to 0.

b) Please note down if the N and/or V flags are set in the APSR register. And explain why.

    Neither are set because 0 isn't negative, and it didn't overflow, it behaved properly (aka -1 + 1 = 0).
    
##### 3. Change the “counter” variable type in your code to “unsigned int”. Inject the values “0x7FFFFFFF” then step thru the program to increment the “counter” once:
a) What is the value of “counter” in the “Locals” window after incrementing for each value?

    2147483648

b) Please note down if the N and/or V flags are set in the APSR register. And explain why.
    
    Yes, both are set. It seems that it doesn't care that we declared it unsigned, and if it could be negative, 
    the flag is set so you can use it if you need to. The ARM developer website says "If the result is regarded 
    as a two's complement signed integer, then N is set to 1 if the result was negative, and N is set to 0 if the 
    result was positive or zero." (https://developer.arm.com/docs/ddi0595/h/aarch32-system-registers/apsr)
    

##### 4. Change the “counter” variable type in your code to “unsigned”. Inject the values “0xFFFFFFFF” then step thru the program to increment the “counter” once:
a) What is the value of “counter” in the “Locals” window after incrementing for each value?

    0

b) Please note down if the N and/or V flags are set in the APSR register. And explain why.

    Neither are set. It seems the overflow is only set when a sign overflow occurs, not when an overflow to 0 occurs 
    (especially since the N flag was set when counter was 0xFFFFFFFF so it considered it -1 and adding a 1 and getting
    0 is exactly normal.

##### 5. Move the “counter’ variable outside of main (at the top of the file):
a) What is the scope of the variable “counter”?

    It is now a global variable.
    
b) Is it still visible in the “Locals” view?

    No, it's no longer local.
    
c) In which window view can we track “counter” now?

    We use the Watch window.

d) What is the address of the “counter” variable in memory?

    0x20000000
    
##### 6. Change the source code, then run the program in the simulator.
a) What is the value of “counter” at the end of the program (halting at the return 0 statement)

    4
    
b) Explain why the counter value has changed?

    We assigned the pointer p_int to point to the memory address where counter is stored and then said to increment the 
    value at that address 3 times before telling counter to increment, both ++(*p_int) and counter++ increment the same thing.
    
##### 7. Change the setting of IAR to run the same program on the evaluation board.
a) What is the address where “counter” is stored?

    0x20000000
    
b) Is the “counter” variable stored in RAM or ROM?

    RAM
    
c) What is the value of “counter” at the end of the program (halting at the return 0 statement).

    4
