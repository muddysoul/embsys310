# assignment 05
### 1. Create a function in “C” that allows swapping of two pointers.
a. Explain what the “main” function does in order to setup the input arguments prior to calling the swap_pointer() function?  
"main" moves the input arguments into memory locations and stores the addresses in the registers.  
b. What are the values in R0 & R1 when swap_pointer() is called?  
The values are the memory locations of the input arguments: R0 is 0x200003F4 and R1 is 0x200003F0.
c. Share a screen shot of the local variables inside of “main” after the function swap_pointer() returns showing the values of the pointers and what they are pointing to (similar to the picture below). 
I really don't know why my pointer values aren't showing up in the locals - when I step from line 18 to 20, I see a value in xPtr and <unavailable> in yPtr bc it hasn't been created yet, and then both go to <unavailable>. So here's a before and after for x and y:  
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment05/Images/before_swap.png "before swap")
![alt text](https://github.com/muddysoul/embsys310/blob/main/assignment05/Images/after_swap.png "after swap")

### 2. Create a new file divAsm.s and add the file to the same HelloWorld project above.
a. Start with the Assembly demo code shared in class (available under Module_06).  
b. Write the assembly code to take an input argument, divide it by 2, and return the result.  
c. Invoke the function “PrintString” from within divAsm before doing the division computation.  
d. Add a comment for every statement in your assembly function code.  
e. Invoke divAsm() inside of your main function in main.c  
f. Run your program on the board and capture a snapshot image of the output from TeraTerm showing the result of the divAsm.  

### 3. Implement a swap function in assembly and call it “swapCharsAsm”:
a. It takes as input two variables of char data type each and swaps the two chars.  
b. Add a comment for every statement in your assembly function code.  
c. Bonus: Return 0 if the two chars are identical; otherwise, return 1.  
