/*
 * global.c
 *
 *  Created on: Dec 1, 2022
 *      Author: DELL
 */

#include "global.h"

unsigned char BUZZER_VOLUME = 0;

unsigned char TIME_RED   = 10;
unsigned char TIME_AMBER = 3;
unsigned char TIME_GREEN = 7;

unsigned char UART_BUFFER[2] = {0, 0};
