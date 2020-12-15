#include <stdint.h>
#include "delay.h"
#include "system_stm32l4xx.h"
#include "stm32l475xx.h"

// LD1 --> PA5 -- Homework
// LD2 --> PB14 -- In Class

volatile int counter=0;

void main(void)
{      
#if 1
    // Enable clock to Peripheral  
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
    
    // GPIO port mode register (GPIOx_MODER) (x = A..E and H)
    // GPIOB Base Address: 0x48000400
    // Address offset: 0x00
    // Set bit[29:28] to 0x01  so --> 0x400 // To enable PB14 as output
    GPIOA->MODER &= ~GPIO_MODER_MODE5_1;
    GPIOA->MODER |= GPIO_MODER_MODE5_0;
    
    // GPIO port output data register (GPIOx_ODR) (x = A..E and H)
    // GPIOB Base Address: 0x48000400
    // Address offset: 0x14
    // Set bit[14] to 1 --> 0x4000; // Turn LED ON
    // Set bit[14] to 0 --> 0x0; // Turn LED OFF
    
    while(1)
    {
        GPIOA->ODR |= GPIO_ODR_OD5;
        delay(100000);
        
        GPIOA->ODR &= ~GPIO_ODR_OD5;
        delay(100000);
    }    
#endif
}
