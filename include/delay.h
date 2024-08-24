#ifndef _delay_h
#define _delay_h
#include "main.h"

uint32_t Delay_Init(void);
void Delay_us(volatile uint32_t au32_microseconds);
void Delay_ms(volatile uint32_t au32_milliseconds);
#endif
