/*
 * Analog.h
 *
 *  Created on: 20 Sep 2016
 *      Author: ralim
 */

#ifndef ANALOG_H_
#define ANALOG_H_
#include "stm32f10x.h"

uint16_t Get_ADC1Value(uint8_t i);
uint16_t readIronTemp(uint16_t calibration);
#endif /* ANALOG_H_ */