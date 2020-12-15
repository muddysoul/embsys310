#if 1

#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4C)))
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int*)(GPIOA_BASE + 0x14)))

void dash();
void dot();
void space();

int counter = 0;

void main()
{
    RCC_AHB2ENR = 0x1;              // Enable clock to GPIOA
    GPIOA_MODER = 0xABFFF7FF;       //Set GPIOA to output
  
    while (1)
    {
        GPIOA_ODR = 0x0000;
        
        // M
        dash();
        dash();
        space();
        
        // A
        dot();
        dash();
        space();
        
        // R
        dot();
        dash();
        dot();
        space();
        
        // I
        dot();
        dot();
        space();
        
        // S
        dot();
        dot();
        dot();
        space();
        
        // O
        dash();
        dash();
        dash();
        space();
        
        // L
        dot();
        dash();
        dot();
        dot();
        space();
        space();
        space();
    }
}

void dash()
{
    counter = 0;
    GPIOA_ODR ^= 0x0020;
    while (counter < 600000) counter ++;
    
    counter = 0;
    GPIOA_ODR ^= 0x0020;
    while (counter < 200000) counter ++;
}

void dot()
{
    counter = 0;
    GPIOA_ODR ^= 0x0020;
    while (counter < 200000) counter ++;
    
    counter = 0;
    GPIOA_ODR ^= 0x0020;
    while (counter < 200000) counter ++;
}

void space()
{
    counter = 0;
    GPIOA_ODR = 0x0000;
    while (counter < 400000) counter ++;        // 2 units bc one is built in at the end of each letter
}

#endif