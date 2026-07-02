/*
 * GPIO_HAL.h
 *
 *  Created on: Jul 2, 2026
 *      Author: shoja
 */

#ifndef INC_GPIO_HAL_H_
#define INC_GPIO_HAL_H_

void LED_init(void);
void LED_Blink_Fast(void);
void LED_init_2(void);
void LED_Blink_Fast_2(void);
void BUTTON_init_PC13(void);
uint8_t BUTTON_read_PC13(void);

#endif /* INC_GPIO_HAL_H_ */
