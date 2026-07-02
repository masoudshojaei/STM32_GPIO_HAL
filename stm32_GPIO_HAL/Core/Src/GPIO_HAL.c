/*
 * GPIO_HAL.c
 *
 *  Created on: Jul 2, 2026
 *      Author: shoja
 */

#include "stm32f4xx_hal.h"
#include "GPIO_HAL.h"

void LED_init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* Enabling GPIOA clock */
    __HAL_RCC_GPIOA_CLK_ENABLE();

    /* Configuring GPIO pin PA5  */
    GPIO_InitStruct.Pin = GPIO_PIN_5;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

void LED_init_2(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* Enabling GPIOD clock */
    __HAL_RCC_GPIOD_CLK_ENABLE();

    /* Configuring GPIO pin PD8  */
    GPIO_InitStruct.Pin = GPIO_PIN_8;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
}

void LED_Blink_Fast(void)
{
    //HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
    //HAL_Delay(50);
    //HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
    //HAL_Delay(50);

    //or alternativly can be done by using HAL_GPIO_TogglePin function
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);    
    HAL_Delay(50);
}
void LED_Blink_Fast_2(void)
{
    //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
    //HAL_Delay(50);
    //HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
    //HAL_Delay(50);

    //or alternativly can be done by using HAL_GPIO_TogglePin function
    HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_8);    
    HAL_Delay(50);
}

void BUTTON_init_PC13(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* Enabling GPIOC clock */
    __HAL_RCC_GPIOC_CLK_ENABLE();

    /* Configuring GPIO pin PC13  */
    GPIO_InitStruct.Pin = GPIO_PIN_13;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
}
uint8_t BUTTON_read_PC13(void)
{
    //uint8_t button_state;
    //if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_SET)
    //{
    //    // Button is pressed
    //    button_state = 1;
    //}
    //else
    //{
    //    // Button is not pressed
    //    button_state = 0;
    //}
    //return button_state;

    //or alternativly can be done by using HAL_GPIO_ReadPin function
    return (HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_SET) ? 1 : 0;
}
