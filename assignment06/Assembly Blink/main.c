#include <stdint.h>

// LD1 --> PA5 -- Homework
// LD2 --> PB14 -- In Class

#define BIT_BAND_BASE 0x42000000
#define BYTE_OFFSET 0x2104c
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4C)))
#define RCC_GPIOA_BB (*((unsigned int*)(BIT_BAND_BASE+(BYTE_OFFSET*32)+(0*4))))
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int*)(GPIOA_BASE + 0x14)))

#define ORD14   (1<<14)
#define ORD5    (1<<5)

#define LED_ON 1
#define LED_OFF 0
#define DELAY_DURATION 100000

void delay(uint32_t iteration);
void control_user_led1(uint8_t state, uint32_t duration);
void enable_rcc(uint32_t port);

void main(void)
{    
    RCC_GPIOA_BB = 0x1;             // enable clock to GPIOA
    GPIOA_MODER = 0xABFFF7FF;       //Set GPIOA to output
     
    while(1)
    {
        control_user_led1(LED_ON, DELAY_DURATION);
        control_user_led1(LED_OFF, DELAY_DURATION);
    }
}
