/*
 * CBlueLed.cpp
 *
 *  Created on: Mar 1, 2022
 *      Author: Konrad
 */

#include "CBlueLed.h"

CBlueLed::CBlueLed()
{
}

CBlueLed::~CBlueLed()
{
	// TODO Auto-generated destructor stub
}

void CBlueLed::setState()
{
	HAL_GPIO_TogglePin(LD5_GPIO_Port, LD5_Pin);
}
