/*
 * Platform_Types.h
 *
 *  Created on: Oct 14, 2022
 *      Author: Omar Mohamed
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/*
 * 	The platform types for Freescale S12x shall have the following mapping to ANSI C*/

#include <stdint.h>

typedef int8_t 							sint8;
typedef uint8_t 						uint8;
typedef int16_t 						sint16;
typedef uint16_t 						uint16;
typedef int32_t 						sint32;
typedef uint32_t 						uint32;

typedef volatile int8_t 				vint8_t;
typedef volatile uint8_t 				vuint8_t;
typedef volatile int16_t 				vint16_t;
typedef volatile uint16_t 				vuint16_t;
typedef volatile int32_t 				vint32_t;
typedef volatile uint32_t 				vuint32_t;



#endif /* PLATFORM_TYPES_H_ */
