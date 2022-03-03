/*
 * CBlueLed.h
 *
 *  Created on: Mar 1, 2022
 *      Author: Konrad
 */

#ifndef INC_CBLUELED_H_
#define INC_CBLUELED_H_

#include "gpio.h"

class CBlueLed
{

public:
	CBlueLed();
	virtual ~CBlueLed();

	void setState();

};

#endif /* INC_CBLUELED_H_ */
