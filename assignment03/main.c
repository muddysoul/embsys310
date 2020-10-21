#if 1

#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000
#define GPIOB_BASE 0x48000400

#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4C)))
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int*)(GPIOA_BASE + 0x14)))
#define GPIOB_MODER (*((unsigned int*)(GPIOB_BASE + 0x0)))
#define GPIOB_ODR   (*((unsigned int*)(GPIOB_BASE + 0x14)))

int counter = 0;

int main()
{
    RCC_AHB2ENR = 0x3;              // Enable clock to GPIOA and GPIOB
    GPIOA_MODER = 0xABFFF7FF;       //Set GPIOA to output
    GPIOB_MODER = 0xDFFFFEBF;       // Set GPIOB to output
  
    while (1)
    {
        counter = 0;
        
        // Delay
        while (counter < 100000)
        {
            counter++;
        }   
        
        GPIOA_ODR ^= 0x0020;        // Toggle LED1 (PA5) with XOR
        //GPIOA_ODR = 0x0000;         // Turn LED1 (PA5) OFF
        //GPIOB_ODR = 0x4000;         // Turn LED2 (PB14) ON
        counter = 0;
        
        // Delay
        //while (counter < 100000)
        //{
        //    counter++;
        //}   
        //GPIOA_ODR = 0x0020;         // Turn LED1 (PA5) ON
        //GPIOB_ODR = 0x0000;         // Turn LED2 (PB14) OFF
        
    }
}

#endif