#ifndef _delay_h
#define _delay_h
#include "main.h"

uint32_t DWT_Delay_Init(void);
void DWT_Delay_us(volatile uint32_t au32_microseconds);
void DWT_Delay_ms(volatile uint32_t au32_milliseconds);
#endif
