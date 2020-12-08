# Assignment 4
### 1. Follow the same steps as we did in the class to blink LED1 (PA5) at a visible rate using the bit- band region to enable the clock to Port A, then answer the following:
  
  a. What instructions does the compiler produce in assembly for “writing” to the GPIO bit when using bit-band address?  
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment04/Images/bitband.png "screenshot of disassembly")  
  a. What were the instructions produced when writing to the GPIOx_ODR without using bit- banding?
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment04/Images/no_bitband.png "screenshot of disassembly")  
  
### 2. Create a function “func1” with 5 arguments and call “func1” from within another function “func2”. Trace thru the assembler and note:
  a. How does the calling function “func2” pass the values to the called function “func1”?  
  a. What extra code did the compiler generate before calling the function “func1” with the multiple arguments?  
  a. What extra code did the compiler generate inside the called function “funct1” with the multiple list of arguments?  
  a. Any other observations?
  
### 3. Following the queue data structure approach, design, implement and test a stack data structure:
  a. The following is the list of requirements:  
    i. The stack should have a predefined size  
    i. The stack supports “int” data types.  
    i. Provide a function to initialize the stack internals.  
    i. Provide a function to push an element onto the stack  
    i. Provide a function to pop an element off the stack.  
    i. Provide a function that returns 1 if stack is empty.  
    i. Provide a function that returns 1 if stack is full.  
  a. Provide a list of the test cases and their implementation inside of main.c  
  a. Separate the stack code from the rest of the test code (create stack.h & stack.c)  
