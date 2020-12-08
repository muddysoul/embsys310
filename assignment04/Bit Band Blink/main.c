#if 1

#define BIT_BAND_BASE 0x42000000
#define BYTE_OFFSET 0x2104c
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4C)))
#define RCC_GPIOA_BB (*((unsigned int*)(BIT_BAND_BASE+(BYTE_OFFSET*32)+(0*4))))
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int*)(GPIOA_BASE + 0x14)))

int counter = 0;

int main()
{
    //RCC_AHB2ENR |= 0x1;              // Enable clock to GPIOA
    RCC_GPIOA_BB = 0x1;
    GPIOA_MODER = 0xABFFF7FF;       //Set GPIOA to output
  
    while (1)
    {
        counter = 0;
        
        // Delay
        while (counter < 100000)
        {
            counter++;
        }   
        
        GPIOA_ODR ^= 0x0020;        // Toggle LED1 (PA5) with XOR
        counter = 0;
        
    }
}

#endif