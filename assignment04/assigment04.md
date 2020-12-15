# Assignment 4
### 1. Follow the same steps as we did in the class to blink LED1 (PA5) at a visible rate using the bit- band region to enable the clock to Port A, then answer the following:
a. What instructions does the compiler produce in assembly for “writing” to the GPIO bit when using bit-band address?  
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment04/Images/bitband.png "screenshot of disassembly")  
b. What were the instructions produced when writing to the GPIOx_ODR without using bit- banding?  
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment04/Images/no_bitband.png "screenshot of disassembly")   
  
### 2. Create a function “func1” with 5 arguments and call “func1” from within another function “func2”. Trace thru the assembler and note:
a. How does the calling function “func2” pass the values to the called function “func1”?  
    - It passes them by value - four arguments go to the registers and anything more than that goes into the stack, so the 5th argument goes into the stack.
b. What extra code did the compiler generate before calling the function “func1” with the multiple arguments?  
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment04/Images/passing_args.png "screenshot of disassembly")  
c. What extra code did the compiler generate inside the called function “funct1” with the multiple list of arguments?  
    - Uhhh, I don't see anything special that's added there? Was I supposed to do something with the arguments? I just returned zero so it ignored them.
d. Any other observations?
  
### 3. Following the queue data structure approach, design, implement and test a stack data structure:
a. The following is the list of requirements:  
    - The stack should have a predefined size  
    - The stack supports “int” data types.  
    - Provide a function to initialize the stack internals.  
    - Provide a function to push an element onto the stack  
    - Provide a function to pop an element off the stack.  
    - Provide a function that returns 1 if stack is empty.  
    - Provide a function that returns 1 if stack is full.  
b. Provide a list of the test cases and their implementation inside of main.c  
c. Separate the stack code from the rest of the test code (create stack.h & stack.c)  

### I can't figure out why my code isn't working - it steps into the if at line 33 in stack.c, but it doesn't change the address for top and I've checked my syntax a million times - it changes the address if I specifically say step in not step over, but otherwise it doesn't set it and then it can never get the chars because it didn't set them. I would spend more time on this but I have two more homework assignments to attempt so I don't fail and I've spent a lot of time staring at the same thing it hurts my brain.
